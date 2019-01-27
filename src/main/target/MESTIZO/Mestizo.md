# MESTIZO (STM32F103 bluepill) NOT TESTED, use own resposibility.....blabla...
Forked from AlienFlightF1
- STM32F103CBT6 MCU
- MPU9250 accelerometer/gyro(/mag) sensor unit
- The MPU sensor interrupt is connected to the MCU for all published designs and enabled in the firmware ??
- 4-8 x 4.2A to 9.5A brushed ESCs, integrated, to run the strongest micro motors (brushed variants) ??
- extra-wide traces on the PCB, for maximum power throughput (brushed variants) ??
- USB port, integrated ??
- (*) serial connection for external DSM2/DSMX sat receiver (e.g. Spektrum SAT, OrangeRx R100, Lemon RX or Deltang Rx31) and SBUS ??
- CPPM input ??
- ground and 3.3V for the receiver, some boards have also the option to power an 5V receiver 
- hardware bind plug for easy binding ??
- motor connections are at the corners for a clean look with reduced wiring ??
- small footprint ??
- direct operation from a single cell LIPO battery for brushed versions ??
- brushless versions are designed for 4S operation and also have an 5V power output
- battery monitoring with an LED or buzzer output (for some variants only) ??
- hardware detection of brushed and brushless versions with individual defaults

For more detail of the different bind modes please refer the CleanFlight Spektrum Bind document.

Deltang receivers in serial mode will work like any other Spektrum satellite compatible receiver (10bit, 22ms) only the bind process will be different.
Pinout at https://docs.google.com/spreadsheets/d/12L04Fnicq1Q9iZMTiQBgtq-z47fT6OO8jmyIuBlNJhc/edit?usp=sharing

## Flashing the firmware

The firmware can be updated with the BetaFlight configurator as for any other target. All AlienFlight boards have a boot jumper which need to be closed for initial flashing or for recovery from a broken firmware.

The firmware for the OpenSky receiver can be updated via serial pass-through and the embedded boot loader. The initial flashing need to be done with the ISP programming pins. The target for the embedded AlienFlight OpenSky receiver is "AFF4RX". Please refer to the OpenSky project for more details.

