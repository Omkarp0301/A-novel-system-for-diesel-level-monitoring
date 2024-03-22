# A-novel-system-for-diesel-level-monitoring
# Overview
This paper proposes a novel IoT system designed to monitor diesel levels in a diesel generator tank remotely. The system utilizes the WebSocket protocol for real-time communication between fuel sensors and a mobile app, offering users access to current diesel levels, consumption statistics, and notifications for low fuel levels. By integrating capacitive fuel level sensors, ESP8266 microcontroller, and WebSocket communication, this solution provides an efficient and user-friendly approach to diesel level monitoring in remote locations.

# Key Features
Wireless Monitoring: Utilizes IoT technology for wireless monitoring of diesel levels in generator tanks, eliminating the need for physical inspections.

Real-time Communication: Implements WebSocket protocol for real-time communication between fuel sensors and the mobile app, ensuring timely updates on diesel levels.

User-friendly Interface: The mobile app provides a simple interface for users to log in, view current diesel levels of different tanks, and access consumption statistics.

Notifications: Sends notifications to users when diesel levels fall below predetermined thresholds, enabling timely refills and uninterrupted power supply.

# How it Works
Sensor Integration: Capacitive fuel level sensors are integrated into diesel generator tanks to measure diesel levels accurately.

Data Conversion: Voltage measurements from the sensors are converted to diesel levels and presented as a percentage.

Microcontroller Communication: ESP8266 microcontroller facilitates communication between fuel sensors and the mobile app via WebSocket protocol.

Mobile App: Users can log in to the mobile app via Wi-Fi networks to view real-time diesel levels, consumption statistics, and receive notifications.

# Usage
The IoT Diesel Tank Monitoring System can be deployed in remote locations with diesel generator setups. Here's how to implement it:

Hardware Setup: Install capacitive fuel level sensors in diesel generator tanks and connect them to ESP8266 microcontrollers.

Software Configuration: Program the microcontrollers to communicate with the WebSocket server and send diesel level data.

Mobile App Installation: Install the mobile app on users' devices and configure it to connect to the WebSocket server for real-time updates.

User Interaction: Users can log in to the mobile app, view diesel levels, monitor consumption statistics, and receive notifications for low fuel levels.

# Benefits
Remote Monitoring: Enables remote monitoring of diesel levels, eliminating the need for physical inspections in remote areas.

Timely Refills: Provides notifications for low fuel levels, enabling users to schedule timely refills and ensure uninterrupted power supply.

Efficient Usage: Optimizes diesel usage by providing real-time information on consumption, helping users plan refills effectively.

Scalability: Offers a scalable solution that can be deployed in diverse applications requiring diesel level monitoring.

# Conclusion
The IoT Diesel Tank Monitoring System offers a practical and scalable solution for monitoring diesel levels in remote locations. By integrating capacitive fuel level sensors, ESP8266 microcontroller, and WebSocket communication, this system facilitates efficient diesel usage and timely refills, ensuring uninterrupted power supply in diverse applications.
