# :beginner: Introduction
- This project is the final project for the two courses, Introduction to Embedded Systems as well as Electronics I at Rowan University.


## :ledger: Index

- [:beginner: Introduction](#beginner-introduction)
  - [:ledger: Index](#ledger-index)
  - [:computer: Embedded Systems](#computer-embedded-systems)
  - [:zap: Electronics](#zap-electronics)
  - [:electric\_plug: Installation](#electric_plug-installation)
  - [:wrench: Materials](#wrench-materials)
    - [:notebook: MCUs](#notebook-mcus)
    - [:nut\_and\_bolt: Dependencies](#nut_and_bolt-dependencies)
    - [:file\_folder: File Structure](#file_folder-file-structure)
  - [:question: FAQ](#question-faq)
  - [:page\_facing\_up: Resources](#page_facing_up-resources)
  - [:camera: Gallery](#camera-gallery)
  - [:star2: Credit/Acknowledgment](#star2-creditacknowledgment)
    - [:mortar_board: Instructors](#instructors)
    - [:school_satchel: Students](#students)
  - [:lock: License](#lock-license)

##  :computer: Embedded Systems
The major requirements for this project require the implementations:
- **Standalone System**
  - In Altium Designer, we have redesigned a standalone version of the MSP430FR2355 board to suit the needs of the chess board. The MSP430FR2355 standalone board as well as a chess board PCB that contains the LEDs and reed switches. To control the LEDs and switches, 2 16-bit shift registers (1 input/SIPO and 1 output/PISO) were used to control the LEDs and switches rather than using an LED matrix.
- **SENSING**
  - Reed switches activated by neodynium magnets
- **ACTUATING**
  - LEDs are emitted corresponding to the respective reed switch being activated
- **COMMUNICATING**
  - An ESP8266 ESP01 Wi-Fi module is used to communicate wirelessly with the MSP430 to communicate data read back to the user

## :zap: Electronics
[Talk about how this relates to electronics]

## :electric\_plug: Installation

##  :wrench: Materials
### Here is a list of MCUs:
- MSP430FR2355 Development board
- ESP8266 ESP01 Wi-Fi Module

### Here is a list of components used
- 

###  :nut_and_bolt: Dependencies
- The version of Code Composer Studio used is **Version: 12.2.0.00009**
- The corresponding MSP430 board is the **MSP430FR2355**




#### Arduino
- Libraries
  - https://www.arduino.cc/reference/en/libraries/arduino-uno-wifi-dev-ed-library/

- Packages
  - http://arduino.esp8266.com/stable/package_esp8266com_index.json
  - https://dl.espressif.com/dl/package_esp32_index.json




###  :file_folder: File Structure
Add a file structure here with the basic details about files, below is an example.

```
.
├── assets
│   ├── css
│   │   ├── index-ui.css
│   │   └── rate-ui.css
│   ├── images
│   │   ├── icons
│   │   │   ├── shrink-button.png
│   │   │   └── umbrella.png
│   │   ├── logo_144.png
│   │   └── Untitled-1.psd
│   └── javascript
│       ├── index.js
│       └── rate.js
├── CNAME
├── index.html
├── rate.html
└── README.md
```

| No  | File Name | Details     |
| --- | --------- | ----------- |
| 1   | index     | Entry point |

## :question: FAQ
Talk about possible questions here
- What was the provided budget by the instructors?
- What were the main issues of the project if any?
- 

##  :page_facing_up: Resources
Add important resources here

##  :camera: Gallery
Pictures of your project.

## :star2: Credit/Acknowledgment
### Instructors
- Russell Trafford, M.S. (IES)
- John Schmalzel, Ph.D. (Electronics)
- Jannatun Naher, Ph.D. (IES)
- Jochy Perez (Electronics)

### Students
- Keiane Balicanta
- Andrew McGlynn
- David Miller

###  :lock: License
Add a license here, or a link to it.