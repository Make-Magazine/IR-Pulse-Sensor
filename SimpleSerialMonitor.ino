    // Pins
    const int ledPin = 13;
    const int sensePin = 0 ;

    // LED blink variables
    int ledState = LOW;
    long ledOnMillis = 0;
    long ledOnInterval = 50;

    // Hearbeat detect variables
    int newHeartReading = 0;
    int lastHeartReading = 0;
    int Delta = 0;
    int recentReadings[8] = {0,0,0,0,0,0,0,0};
    int historySize = 8;
    int recentTotal = 0;
    int readingsIndex = 0;
    boolean highChange = false;
    int totalThreshold = 2;

    // Heartbeat Timing
    long lastHeartbeatTime = 0;
    long debounceDelay = 150;
    int currentHeartrate = 0;

    void setup() {
    // initialize the serial communication:
    Serial.begin(9600);
    // initialize the digital pin as an output:
    pinMode(ledPin, OUTPUT);
    }

    void loop() {
    // Turn off LED
    digitalWrite(ledPin, LOW);

    // Read analogue pin.
    newHeartReading = analogRead(sensePin);
    //Serial.println(newHeartReading);
    //Calculate Delta
    Delta = newHeartReading - lastHeartReading;
    lastHeartReading = newHeartReading;

    // Find new recent total
    recentTotal = recentTotal - recentReadings[readingsIndex] + Delta;
    // replace indexed recent value
    recentReadings[readingsIndex] = Delta;
    // increment index
    readingsIndex = (readingsIndex + 1) % historySize;

    //Debug
    Serial.println(recentTotal);

    // Decide whether to start an LED Blink.
    if (recentTotal >= totalThreshold) {
    // Possible heartbeart, check time
    if (millis() - lastHeartbeatTime >= debounceDelay) {
    // Heartbeat
    digitalWrite(ledPin, HIGH);
    currentHeartrate = 60000 / (millis() - lastHeartbeatTime);
    lastHeartbeatTime = millis();
    // Print Results
    Serial.println("Beat");
    if (currentHeartrate <= 200) { Serial.println(currentHeartrate); } } } delay(10); }
