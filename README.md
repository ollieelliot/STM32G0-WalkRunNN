# Motion detection on an STM32G0 microcontroller

# Hardware: 
  - The Schematic and PCB is designed in KiCad and uses the STM32G041J6M6 ARM Cortex-M0 Microcontroller together with an MPU6050 (Gyroscope and Accelerometer).

# Software:
- Uses a neural network trained in Python and [emlearn](https://github.com/emlearn/emlearn) to save the weights, biases and activation functions to a header file in order to run inference in C.

# Pictures:
![3D View](https://github.com/ollieelliot/STM32G0-WalkRunNN/blob/main/Documentation_Photos_etc/STM32G0_MPU6050_Rounded_3D_v1_1.png)

![3D View](https://github.com/ollieelliot/STM32G0-WalkRunNN/blob/main/Documentation_Photos_etc/V_1_1_pic2.jpg)
Currently everything except the MPU6050 is soldered since it's still being shipped. 
