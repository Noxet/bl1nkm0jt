# bl1nkm0jt
The latest official blinkmojt at LTH.

## Setup
Install the following:
 - Install ESP-IDF version 4.0
 - Install Python 3 and add to PATH
 - Add environment variable `BLINKMOJT_PATH` and point it to the root directory of the git repo.

## Build

### ESP32 Firmware
 - In BLINKMOJT_PATH/index, run `python index_gen.py` to generate the webpage for the ESP32
 - In BLINKMOJT_PATH/firmware/esp32/blinkmojt, run `idf.py build` followed by `idf.py flash`

### AVR Firmware
TBD
