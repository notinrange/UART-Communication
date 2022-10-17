
# UART Communication

In UART communication, two UARTs communicate directly with each other. The transmitting UART converts parallel data from a controlling device like a CPU into serial form, transmits it in serial to the receiving UART, which then converts the serial data back into parallel data for the receiving device. Only two wires are needed to transmit data between two UARTs. Data flows from the Tx pin of the transmitting UART to the Rx pin of the receiving UART:


![UART Structure](https://user-images.githubusercontent.com/88238469/196004249-70d46d41-f54e-4be5-b11f-7776ee6da5b1.PNG)



UARTs transmit data asynchronously, which means there is no clock signal to synchronize the output of bits from the transmitting UART to the sampling of bits by the receiving UART. Instead of a clock signal, the transmitting UART adds start and stop bits to the data packet being transferred. These bits define the beginning and end of the data packet so the receiving UART knows when to start reading the bits.

When the receiving UART detects a start bit, it starts to read the incoming bits at a specific frequency known as the baud rate. Baud rate is a measure of the speed of data transfer, expressed in bits per second (bps). Both UARTs must operate at about the same baud rate. The baud rate between the transmitting and receiving UARTs can only differ by about 10% before the timing of bits gets too far off.

![Circuit Diagram Between 2 Arduinos](https://user-images.githubusercontent.com/88238469/196004255-0b5c192f-7c4d-4ea2-ac36-eefbe2113317.PNG)


## Important points about UART

#### This Device is Asynchronus.
#### UART has a max communication distance of 15 meters. 
#### UART leverages shift registers to convert serial communication to parallel communication. 
#### Maximum Frequencies used in UART is 45.1584 MHz.

![Table of Contents in UART](https://user-images.githubusercontent.com/88238469/196004256-84761e7a-acb6-4a9e-9be4-428bea1f58fb.PNG)


## For Further Reference Read this 

[UART Communication Article](https://www.circuitbasics.com/basics-uart-communication/)

[UART Protocol Github](https://github.com/topics/uart-protocol)

[Tinkercad Simulation By Me](https://www.tinkercad.com/embed/aag5JaoGFNh)
