#include <ArduinoWebsockets.h>

// Define your network settings
const char* ssid = "";
const char* password = "";

// Create a WebSocket server on port 81
WebsocketsServer server = WebsocketsServer(81);

void setup() {
    Serial.begin(115200);

    // Connect to Wi-Fi
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    Serial.println("Connected to WiFi");

    // Start the WebSocket server
    server.begin();
}

void loop() {
    server.listen();

    // Check for WebSocket connections
    WebsocketsClient client = server.accept();

    if (client.available()) {
        Serial.println("Client connected!");

        // Send a message to the connected client
        client.send("Hello, Android!");

        // Close the connection
        client.close();
    }
}
