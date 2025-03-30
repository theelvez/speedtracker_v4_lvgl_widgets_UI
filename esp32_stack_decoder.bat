@echo off
:: Decode ESP32 backtrace addresses using addr2line

:: Assign variables
set "ELF_FILE=.\.pio\build\T-Display-AMOLED\firmware.elf"
set "BACKTRACE=%~1%"

:: Check if ELF file exists
if not exist "%ELF_FILE%" (
    echo Error: ELF file "%ELF_FILE%" does not exist.
    exit /b 1
) else (
    echo ELF file found: "%ELF_FILE%"
)

:: Prompt for backtrace input if not provided
if "%BACKTRACE%"=="" (
    set /p BACKTRACE=Enter backtrace: 
)

:loop
if "%~1"=="" goto done

:: Get the instruction address (before the colon)
for /f "tokens=1 delims=:" %%A in ("%~1") do (
    xtensa-esp32s3-elf-addr2line -pfiaC -e "%ELF_FILE%" %%A
)

shift
goto loop

:done
echo Done.
