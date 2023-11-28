# USART2 Echo Example for STM32F4
This repository contains a simple embedded program for STM32F4 microcontrollers, demonstrating the use of USART2 for serial communication. The program initializes USART2, and repeatedly sends the string "Yes" with a delay between each transmission.

## Description
The main functionality of the program is divided into several parts:

USART2 Initialization (USART2_init): Configures the USART2 for serial communication, including setting up the GPIO pins for USART2 TX, configuring baud rate, data bits, stop bits, and enabling the USART2 module.

### Character Transmission (USART2_write): 
Sends individual characters via USART2. The function waits until the transmission buffer is empty before sending a new character.

### Delay Function (delayMs): 
Creates a simple blocking delay, used here to space out message transmissions.

### Main Loop: 
In the main function, the USART2 is initialized, and the characters 'Y', 'e', 's' are sent in a loop with a delay between each complete "Yes" message.

## Hardware Requirements
STM32F4 series microcontroller
Serial-to-USB converter (if your PC does not support direct serial communication)
Connecting wires
## Software Requirements
STM32CubeIDE or similar IDE supporting STM32
Serial terminal software (e.g., PuTTY, Tera Term)
Setup and Usage
## Hardware Setup:

Connect the USART2 TX pin of the STM32F4 to the RX pin of the serial-to-USB converter.
Connect the GND of the STM32F4 to the GND of the converter.
## Software Setup:

## Open the project in PlatforIO.
Build and flash the program to your STM32F4 microcontroller.
Serial Terminal Setup:

Open your serial terminal software.
Configure the serial port with the correct COM port and set the baud rate to 9600.
## Operation:

Reset or power up the STM32F4 microcontroller.
Observe the repeated transmission of "Yes" in the serial terminal.
