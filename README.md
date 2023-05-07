# :beginner: Introduction
- This project is the final project for the two courses, Introduction to Embedded Systems (IES) as well as Electronics I at Rowan University.


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
  - Green LEDs are emitted corresponding to the respective reed switch being activated
- **COMMUNICATING**
  - An ESP8266 ESP01 Wi-Fi module is used to communicate wirelessly with the MSP430 to communicate data read back to the user

## :zap: Electronics
A 9V battery is going to be used through a linear regulator to drop the voltage to 5V and 3.3V to deliver power to the MSP430 board.

## :electric\_plug: Installation


##  :wrench: Materials
### Here is a list of components used
| Item | Amount | Part Number | Description
| ------------ | ------------- | ------------- | ------------- |
| Reed Switches | x16 | MDSR-7-10-20 | Used with any neodynium magnets
| Green LEDs | x16 | LTL-4234 | Connected to 5V rail
| SIPO Shift Register | x1 | SN74LS673N | For LED control
| PISO Shift Register | x1 | SN54LS674J | For reed switch control
| Linear Regulator | x1 | UA78M33CKCS | Connects to 5V and 3.3V
| 330 nF Cap | x1 | CC0603KRX7R7BB334 | 
| 100 nF Cap | x1 | K104K15X7RF53H5
|ESP8266 ESP01 Wi-Fi Module | x1 | WRL-17146 | WiFi connected to ThingSpeak

###  :nut_and_bolt: Dependencies
- The version of Code Composer Studio used is **Version: 12.2.0.00009**
#### Arduino
- Libraries
  - https://www.arduino.cc/reference/en/libraries/arduino-uno-wifi-dev-ed-library/

- Packages
  - http://arduino.esp8266.com/stable/package_esp8266com_index.json
  - https://dl.espressif.com/dl/package_esp32_index.json


## :question: FAQ
Talk about possible questions here
- What was the provided budget by the instructors?
- What were the main issues of the project if any?
- 

##  :page_facing_up: Resources
Add important resources here

##  :camera: Gallery
### Schematics:

### Pictures of Boards:
![MSP_PCB_Design](https://user-images.githubusercontent.com/74569357/236701966-9b51a37c-a874-4182-8570-cc397dd9604e.jpg)
![Shift_Wiring](https://user-images.githubusercontent.com/74569357/236701974-5e10b069-f9af-40a5-b4f8-dcc7290a685f.jpg)
![Chess_PCB_Design](https://user-images.githubusercontent.com/74569357/236701979-df0d3ea4-be04-446a-a561-f9323898b3d6.jpg)

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