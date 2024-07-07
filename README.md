# Double Slit Controller

## Components 

- Arduino Uno
- Max7219 8X8 LED
- Push Button

## Connections

| Component | Pin | Component | Pin |
| --- | --- | --- | --- |
| Arduino | Gnd | Breadboard | Blue Rail |
| Arduino | 5V | Breadboard | Red Rail |
| Breadboard | Red Rail | 8x8 | VCC |
| Breadboard | Blue Rail | 8X8 | gnd |
| Arduino | D3 | 8X8 | CS |
| Arduino | D11 | 8X8 | DIN | 
| Arduino | D13 | 8X8 | CLK |
| Arduino | D12 | Display Button | Right |
| Breadboard | Blue Rail | Display Button | Left |
| Arduino | D6 | 220 Ohm resistor | NA |
| 220 Ohm Resistor | NA | PN222A Transistor | Base | 
| Breadboard | Red Rail | PN222A Transistor | Collector | 
| PN222A Transistor | Emitter | Laser | Voltage | 
| Breadboard | Blue Rail | Laser | Ground |
| Breadboard | Blue Rail | Photo Button | Left | 
| Arduino | D8 | Photo Button | Right |
Connections in this iteration allow button to tick up number on display 0-9

TODO: Add pic you took on iphone 


## References

- [Arduino Push Button](https://roboticsbackend.com/arduino-push-button-tutorial/)
- [Arduino Max7219 Dot Matrix LED](https://www.makerguides.com/max7219-led-dot-matrix-display-arduino-tutorial/)
