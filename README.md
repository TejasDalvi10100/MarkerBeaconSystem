# Aircraft Marker Beacon System (IR Sensor Based)

This project is a mock model of an Aircraft Marker Beacon System used during the landing phase of an aircraft. I developed this in 2021 while assisting a friend with his B.Sc. Aeronautics academic project, where I handled the embedded system design and implementation.

In real aviation systems, marker beacons provide visual and aural indications to pilots when the aircraft passes specific points on the runway approach path. In this project, I simulated that system using IR proximity sensors, LEDs, a buzzer, DC motor, and an Arduino.

The system detects an approaching aircraft (model) and gives proper light and sound indications based on which marker it crosses.

[projecthub.arduino.cc/tejassunildalvi](https://projecthub.arduino.cc/tejassunildalvi/marker-beacon-system-with-ir-sensors-buzzer-and-led-b70218)
<img width="655" height="1077" alt="image" src="https://github.com/user-attachments/assets/69de68ec-8da7-434d-ae6c-2506caf09c00" />


Part 1 | Arduino based Marker Beacon System | Arduino+IR Sensors+LED+Speaker
[![Part 1 | Arduino based Marker Beacon System | Arduino+IR Sensors+LED+Speaker](https://img.youtube.com/vi/MdHkRHNQ4OQ/0.jpg)](https://www.youtube.com/watch?v=MdHkRHNQ4OQ)

<br>
[![Part 2 | Arduino based Marker Beacon System | Arduino+IR Sensors+LED]](https://www.youtube.com/watch?v=VDRLrqi4RbKR5d1j)

---

## Objective

To design and implement a simplified Marker Beacon System using IR sensors and Arduino that:

- Detects aircraft movement over runway markers  
- Provides visual indication using LEDs  
- Provides audio indication using a buzzer  
- Prevents indication during the return phase using the NRI sensor  

---

## Components Used

- Arduino Uno  
- 4 × IR Proximity Sensors (Inner, Middle, Outer, NRI)  
- 3 × LEDs (Inner, Middle, Outer markers)  
- Buzzer / Speaker  
- DC Motor  
- Breadboard & Jumper Wires  

---

## ⚙️ Working Principle

Three IR proximity sensors act as:

- Outer Marker  
- Middle Marker  
- Inner Marker  

When the aircraft model passes over a marker:

1. The corresponding IR sensor detects it.
2. Arduino processes the signal.
3. The respective LED glows.
4. The buzzer generates a specific tone for each marker.

Each marker has a different beep pattern to simulate real aviation marker beacon behavior.

---

### NRI (No Return Indication)

To avoid false indication during the return phase, a fourth sensor (NRI) is installed near the runway.

When the aircraft reaches the runway:
- Arduino pauses detection.
- System resumes only after aircraft moves back to the initial position.

This ensures proper landing-phase-only indication.

---

## 🔌 Circuit Overview

### IR Sensor Connections
- Inner → Digital Pin 6  
- Middle → Digital Pin 13  
- Outer → Digital Pin 12  
- NRI → Digital Pin 9  
- VCC → 5V  
- GND → Ground  

### LED Connections
- Inner LED → Digital Pin 2  
- Middle LED → Digital Pin 3  
- Outer LED → Digital Pin 4  
- All negative terminals → Ground  

### Buzzer
- Positive → Digital Pin 11  
- Negative → Ground
  
---

## 💻 Software

- Arduino IDE  
- Embedded C (Arduino Code)

The project contains:
- Sensor handling logic  
- LED & buzzer control logic  
- Motor movement control  

---

## Model & Circuit Diagrams
<img width="1360" height="544" alt="94a9ac64-4541-4461-b36d-17d2ff3a4b4d" src="https://github.com/user-attachments/assets/4d1c6afd-007f-43b3-970c-3628d427eb1a" />

<br>
<img width="2124" height="872" alt="96d00432-414a-4b59-9dbe-b9204e2ac0e8" src="https://github.com/user-attachments/assets/c18f15c9-2279-4497-8bc0-e0d32bec4052" />

![07ad468d-8de1-49d5-bc54-4168d366f25d](https://github.com/user-attachments/assets/c5c00f6a-ff8b-4394-a7d8-16e9fb2f6e7d)<br>

---

## Key Learnings

- Working with IR proximity sensors  
- Real-time signal processing using Arduino  
- Hardware integration (Sensors + Actuators)  
- Implementing aviation-inspired logic in embedded systems  

---

## Conclusion

This project demonstrates a practical implementation of an aviation Marker Beacon System using embedded systems concepts.

It simulates real-world landing phase indications using sensors, microcontroller logic, and output devices in a simple and effective way.
