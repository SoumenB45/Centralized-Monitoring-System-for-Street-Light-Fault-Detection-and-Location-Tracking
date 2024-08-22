# Centralized Monitoring System for Street Light Fault Detection and Location Tracking

This project, Centralized Monitoring System for Street Light Fault Detection and Location Tracking uses IoT, Arduino, ESP 8266 (Wi-Fi module), and LDRs (Light Dependent Resistors) to monitor and detect faults in street lights. It provides real-time updates on the status of street lights, identifying issues such as non-functioning lights, current leakage, and wire breakage, along with their exact locations.

## Purpose of the Project
- Address the lack of a centralized monitoring system for street lights in urban areas.
- Enable real-time detection of faults in street lighting systems.
- Reduce delays in repair and maintenance processes for street lights.
- Improve public safety by ensuring streets remain well-lit at all times.
- Decrease maintenance costs and resources by optimizing the fault detection process.
- Enhance energy efficiency through timely maintenance and reduced manual inspections.

## Components and Technologies Used
The system is built using the following components and technologies:
- Sensors: LDRs (Light Dependent Resistors) detect light intensity from street lights.
- Microcontroller: Arduino UNO manages the operation, processes data from sensors, and communicates with the centralized system.
- Connectivity: The ESP 8266 (Wi-Fi module) sends sensor data to the centralized monitoring system, while the GSM module 800L provides the exact location of faults.
- Centralized Control System: A server collects, processes, and analyzes data, generating real-time updates, alerts, and storing historical records.
- Zonal Area Division: To simplify monitoring, the city is divided into zones, and each street light pole is assigned a unique identifier. This enhances fault detection and maintenance efficiency.

## Outcome of the Project:
### - Reduced Maintenance Costs: 
By detecting faults early and pinpointing their location, the system minimizes the need for costly manual inspections.
### - Improved Public Safety: 
Ensures streets are consistently well-lit by enabling prompt repairs.
### - Enhanced Maintenance Efficiency: 
Reduces the time required to locate and fix street light issues.
### - Extended Lifespan of Street Lights: 
Timely maintenance reduces wear and tear on street lighting infrastructure.
### - Scalability and Adaptability: 
The system can be implemented in cities of all sizes, making it a versatile solution for urban infrastructure management.
