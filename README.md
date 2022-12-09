# Blinky project for Arm FVP/AVH

The **Blinky** project can be used to verify the basic tool setup. It is compliant to the [Cortex Microcontroller Software Interface Standard (CMSIS)](https://arm-software.github.io/CMSIS_5/General/html/index.html).

## Operation

The application sets/resets a variable, mimicking the blinking of an LED.

## Board: Arm V2M-MPS3-SSE-300-FVP

- Simulated MPS3 platform for Corstone-300.
- The heap/stack setup and the CMSIS-Driver assignment is in configuration files of related software components.

### System Configuration

| System Component        | Setting
|:------------------------|:----------------------------------------
| Device                  | SSE-3000-MPS3
| Clock                   | 32 MHz
| Heap                    | 64 kB (configured in region_limit.h file)
| Stack (MSP)             |  1 kB (configured in region_limit.h file)
