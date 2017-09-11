#define BUTTONPIN D2
#define LEDPIN D7
#define RELAYPIN D4

void setup() {
    pinMode(LEDPIN, OUTPUT);
    pinMode(BUTTONPIN, INPUT);

    pinMode(RELAYPIN, OUTPUT);
    digitalWrite(RELAYPIN, LOW);
}

void loop() {
    if (digitalRead(BUTTONPIN) == 1) {
        digitalWrite(LEDPIN, HIGH);
        digitalWrite(RELAYPIN, HIGH);
    } else {
        digitalWrite(LEDPIN, LOW);
        digitalWrite(RELAYPIN, LOW);
    }
}
