// First introduce some handy constants
int motor1aPin = 3; // H-bridge motor1, leg a
int motor1bPin = 4; // H-bridge motor1, leg b
int speed1Pin = 9; // H-bridge motor1, speed pin
int motor2aPin = 5; // H-bridge motor2, leg a
int motor2bPin = 6; // H-bridge motor2, leg b
int speed2Pin = 10; // H-bridge motor2, speed pin
int ledPin = 13; //LED

// The setup function is needed to configure the ATMEGA168 chip
void setup() {
	// set outputs
	pinMode( motor1aPin, OUTPUT );
	pinMode( motor1bPin, OUTPUT );
	pinMode( speed1Pin, OUTPUT );
	pinMode( motor2aPin, OUTPUT );
	pinMode( motor2bPin, OUTPUT );
	pinMode( speed2Pin, OUTPUT );
	pinMode( ledPin, OUTPUT );
}

// Main loop of our program
void loop() {
	blink( );
	setMotors( 70, 70 );
	delay( 1000 );
	blink( );
	setMotors( -60, 60 );
	delay( 1000 );
}

// Support function to set the speed of the motors
void setMotors( int speed1, int speed2 ) {
	if( speed1 < 0 ) { // drive backwards
		digitalWrite( motor1aPin, LOW );
		digitalWrite( motor1bPin, HIGH );
		analogWrite( speed1Pin, abs(speed1) );
	} else { // drive forward
		digitalWrite( motor1aPin, HIGH );
		digitalWrite( motor1bPin, LOW );
		analogWrite( speed1Pin, speed1 );
	}

	if( speed2 < 0 ) { // drive backwards
		digitalWrite( motor2aPin, LOW );
		digitalWrite( motor2bPin, HIGH );
		analogWrite( speed2Pin, abs(speed2) );
	} else { // drive forward
		digitalWrite( motor2aPin, HIGH );
		digitalWrite( motor2bPin, LOW );
		analogWrite( speed2Pin, speed2 );
	}
}

// support function to turn the LED on/off
void blink() {
	digitalWrite( ledPin, HIGH );
	delay( 100 );
	digitalWrite( ledPin, LOW );
}