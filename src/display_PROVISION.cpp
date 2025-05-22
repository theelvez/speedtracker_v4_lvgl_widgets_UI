#include "display_PROVISION.h"

// UI Styles
lv_style_t provisionLabelStyle;


// UI Objects
lv_obj_t *provisionLabel;

// Global variables
String provisionStatusMessage;
const char* ssid = "SpeedTracker-Setup";
const byte DNS_PORT = 53;
DNSServer dnsServer;
WebServer server(80);


void dispUpdateProvisionLabel(const char *message, bool clear) {

  //
  // Clear the status message if requested
  //

  if (clear) {
    provisionStatusMessage = "";
  }
  

  //
  // Add the message to the status message
  //

  provisionStatusMessage += message;
  

  //
  // Set the label text to the status message
  //
  
  lv_label_set_text(provisionLabel,
                    message);


  //
  // Set the label text to the status message
  //

  lv_timer_handler();

  return;
}


void dispProvisionOnNotFoundHandler() {

  //
  // Redirect to the root page
  //

  server.sendHeader("Location", "/", true);
  server.send(302, "text/plain", "");
}


void dispProvisionRootHandler() {

  String html = "<html><body><h1>SpeedTracker Provisioning</h1>";
  html += "<form method='POST' action='/upload' enctype='multipart/form-data'>";
  html += "<input type='file' name='upload'>";
  html += "<input type='submit' value='Upload'>";
  html += "</form>";
  html += "<h2>Download Config File</h2>";
  html += "<a href='/download'>Download</a>";
  html += "</body></html>";


  //
  // Send the HTML page to the client
  //

  server.send(200,
              "text/html",
              html);
}


void dispProvisionUploadHandler() {

  HTTPUpload& upload = server.upload();
  static File fsUploadFile;

  Serial.printf("Upload Handler: status: %d, filename: %s, totalSize: %u\n",
                upload.status,
                upload.filename.c_str(),
                upload.totalSize);


  if (upload.status == UPLOAD_FILE_START) {

    //
    // Open the file for writing and update the status label
    // 

    String filename = "/" + upload.filename;
    fsUploadFile = sdCardPointer->open(filename.c_str(), FILE_WRITE);

    if (!fsUploadFile) {
      Serial.printf("Failed to open file %s for writing\n",
                    filename.c_str());
    } else {
      dispUpdateProvisionLabel((String("Uploading ") + upload.filename).c_str(), false);
      Serial.printf("Upload Start: %s\n", filename.c_str());
    }

  } else if (upload.status == UPLOAD_FILE_WRITE) {
    
    if (fsUploadFile) {
      Serial.printf("Writing %u bytes to file %s\n",
                    upload.currentSize,
                    upload.filename.c_str());
      fsUploadFile.write(upload.buf, upload.currentSize);
    }
  } else if (upload.status == UPLOAD_FILE_END) {

    if (fsUploadFile) {
      fsUploadFile.close();
      Serial.printf("Upload End: %s, %u bytes\n",
                    upload.filename.c_str(),
                    upload.totalSize);
    } else {
      Serial.println("Upload failed, file not open");
    } 

    server.send(200, "text/plain", "File uploaded. Device will restart.");
    dispUpdateProvisionLabel("Upload complete. Device will restart.", true);
    delay(1500);

    deviceData.deviceProvisioned = true;
  }
}


void dispProvisionDownloadHandler() {

  //
  // Handle the file download
  //

  File downloadFile = SD.open(deviceData.configDataFileName.c_str());
  if (downloadFile) {
    server.streamFile(downloadFile, "application/octet-stream");
    downloadFile.close();
  } else {
    server.send(404, "text/plain", "File not found");
  }
}

void dispStartCaptivePortal() {

  //
  // Start the captive portal AP
  //

  WiFi.softAP(ssid);
  delay(100);


  //
  // Get the IP address of the AP and start the DNS server
  //

  IPAddress myIP = WiFi.softAPIP();
  
  dispUpdateProvisionLabel((String("AP IP: ") + myIP.toString()).c_str(), false);


  //
  // Start the DNS server
  //

  dnsServer.start(DNS_PORT, "*", myIP);


  //
  // Set the web server handlers 
  //

  server.onNotFound(dispProvisionOnNotFoundHandler);
  server.on("/", HTTP_GET, dispProvisionRootHandler);
  server.on("/upload", HTTP_POST, dispProvisionUploadHandler);
  server.on("/download", HTTP_GET, dispProvisionDownloadHandler);

  server.begin();
}


/**
 * @brief Function that initializes the display
*/
bool dispInitialize_PROVISION(bool shutdown) {

  //
  // Clear the display
  //

  lv_obj_clean(lv_scr_act());

  lv_obj_set_style_bg_color(lv_scr_act(),
                             SCREEN_BACKGROUND_COLOR,
                             LV_PART_MAIN);

  if (shutdown) {
    amoled.shutdown();
    return false;
  }              

  //
  // Initialize the UI styles and objects
  //
  
  Serial.println("****Initializing the UI styles and objects.****");
  dispInitializeUIStyles_PROVISION();
  Serial.println("****Initialized the PROVISION UI styles.****");
  dispInitializeUIObjects_PROVISION();
  Serial.println("****Initialized the PROVISION UI objects.****");


  //
  // Start the captive portal
  //

  dispStartCaptivePortal();
  

  while (!deviceData.deviceProvisioned) {
    dnsServer.processNextRequest();
    server.handleClient();
    delay(10);
  }


  //
  // Stop the captive portal
  //

  Serial.println("****Stopping the captive portal.****");

  dnsServer.stop();
  server.stop();
  WiFi.softAPdisconnect(true);
  WiFi.disconnect(true);
  delay(1000);


  //
  // Dump the files now on the SD card to the serial console
  //

  Serial.println("****Dumping all files on the SD card.****");
  File root = sdCardPointer->open("/");
  File file = root.openNextFile();


  while (file) {
    Serial.printf("File: %s, Size: %d bytes\n",
                  file.name(),
                  file.size());

    file.close();

    file = root.openNextFile();
  }
  root.close();

  
  Serial.println("****Stopped the captive portal.****");
  Serial.println("****Device is provisioned.****");
  
  Serial.println("****Device will restart.****");
  delay(1000);
  
  return true;
}


/**
 * @brief Function that initializes the UI styles
 */
void dispInitializeUIStyles_PROVISION() {

  //////////////////////////////////////////////
  //
  // Initialize the style for the provision label
  //
  //    - White, right aligned text
  //    - American Captain font
  //    - Transparent background
  //    - No scrolling
  //
  //////////////////////////////////////////////

  lv_style_init(&provisionLabelStyle);

  lv_style_set_text_font(&provisionLabelStyle,
                         &PROVISION_LABEL_FONT);

  lv_style_set_text_color(&provisionLabelStyle,
                          PROVISION_LABEL_TEXT_COLOR);

  lv_style_set_text_align(&provisionLabelStyle,
                          PROVISION_LABEL_ALIGNMENT);

  lv_style_set_bg_color(&provisionLabelStyle,
                        PROVISION_LABEL_BG_COLOR);

  lv_style_set_bg_opa(&provisionLabelStyle,
                      PROVISION_LABEL_OPACITY);

  lv_style_set_text_opa(&provisionLabelStyle,
                        LV_OPA_COVER);

  return;
}


/**
 * @brief Function that initializes the UI objects
 */
void dispInitializeUIObjects_PROVISION() {

  //////////////////////////////////////////////
  //
  // Initialize the provision label
  //
  //    - White, right aligned text
  //    - American Captain font
  //    - Transparent background
  //    - No scrolling
  //
  //////////////////////////////////////////////

  provisionLabel = lv_label_create(lv_scr_act());

  lv_obj_set_size(provisionLabel,
                  PROVISION_LABEL_WIDTH,
                  PROVISION_LABEL_HEIGHT);

  lv_obj_set_pos(provisionLabel,
                 PROVISION_LABEL_X_POSITION,
                 PROVISION_LABEL_Y_POSITION);

  lv_obj_add_style(provisionLabel,
                   &provisionLabelStyle,
                   LV_PART_MAIN | LV_STATE_DEFAULT);


  return;
}