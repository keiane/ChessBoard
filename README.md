# Introduction
- This project is the final project for Intro to Embedded Systems as well as Electronics I at Rowan University


## :ledger: Index

- [Introduction](#introduction)
  - [:ledger: Index](#ledger-index)
  - [:beginner: Embedded Systems](#beginner-embedded-systems)
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
  - [Instructors](#instructors)
  - [Students](#students)
  - [:lock: License](#lock-license)

##  :beginner: Embedded Systems
The major requirements for this project require the implementations:
- **Standalone System**
  - In Altium Designer, we have redesigned a standalone version of the MSP430FR2355 board to suit the needs of the Chess Board. The MSP430FR2355 standalone board as well as a chess board PCB that contains the LEDs and reed switches. To control the LEDs and switches, 2 16-bit shift registers (1 input and 1 output) were used to control the LEDs and switches rather than using an LED matrix.
- **SENSING**
  - Reed switches being activated by neodynium magnets
- **ACTUATING**
  - LEDs are emitted corresponding to the respective reed switch being activated
- **COMMUNICATING**
  - An ESP8266 ESP01 Wi-Fi module is used to communicate wirelessly with the MSP430 to communicate data read back to the user

## :zap: Electronics
[Talk about how this relates to electronics]

###  :electric_plug: Installation
- Steps on how to install this project, to use it.
- Be very detailed here, For example, if you have tools which run on different operating systems, write installation steps for all of them.


##  :wrench: Materials
If you want other people to contribute to this project, this is the section, make sure you always add this.

### :notebook: MCUs
These are the main MCU pre-requisites for the system
- MSP430FR2355 Development board
- ESP8266 ESP01 Wi-Fi Module

###  :nut_and_bolt: Dependencies
Here are a list of libraries and packages used for Arduino and CCS development of this project.
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
- What issues occurred?

##  :page_facing_up: Resources
Add important resources here

##  :camera: Gallery
Pictures of your project.

## :star2: Credit/Acknowledgment
## Instructors
- Russell Trafford, M.S. (IES)
- John Schmalzel, Ph.D. (Electronics)
- Jannatun Naher, Ph.D. (IES)
- Jochy Perez (Electronics)

## Students
- Keiane Balicanta
- Andrew McGlynn
- David Miller

##  :lock: License
Add a license here, or a link to it.