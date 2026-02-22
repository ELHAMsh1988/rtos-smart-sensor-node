# RTOS Smart Sensor Node (Embedded C++ Project)

## 📌 Project Overview
This project demonstrates a multitasking embedded system using FreeRTOS and C++.
The system reads simulated sensor data, processes it, and transmits it via UART.

The goal of this project is to demonstrate:

- Embedded C++ design
- RTOS task management
- Inter-task communication (Queues)
- Hardware abstraction
- Modular firmware architecture

---
## Target Platform

This project is designed for:
- STM32 microcontroller (ARM Cortex-M)
- FreeRTOS
- Developed and tested using PlatformIO / STM32CubeIDE
- Serial output via UART (115200 baud)

---

## ⚙️ System Architecture

The firmware is structured into independent RTOS tasks:

- Sensor Task → Reads ADC values
- Processing Task → Applies filtering (Moving Average)
- Communication Task → Sends data via UART
- Monitor Task → Checks system health

Inter-task communication is implemented using FreeRTOS queues.

---

## Task Overview

The system is divided into four RTOS tasks:

1. SensorTask  
   Reads simulated sensor values periodically.

2. ProcessingTask  
   Filters and processes sensor data.

3. CommunicationTask  
   Sends processed data over UART.

4. MonitorTask  
   Monitors system health and memory usage.

---
   
## 🧠 Technologies Used

- STM32 (ARM Cortex-M)
- FreeRTOS
- Embedded C++
- UART Communication
- Multitasking architecture
- Modular driver abstraction

---

## 🧪 Functional Flow

1. Sensor reads data periodically
2. Data is pushed into a queue
3. Processing task filters the signal
4. Communication task sends processed data over UART
5. Monitor task checks task status

---

## 📷 System Output Example

![IMG_9507](https://github.com/user-attachments/assets/b415f728-1585-45bf-ab12-213ca1b4cd1d)

