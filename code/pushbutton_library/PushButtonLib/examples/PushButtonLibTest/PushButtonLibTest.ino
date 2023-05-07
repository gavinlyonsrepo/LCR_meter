/*
 * File: PushButtonLibTest.ino
 * Description: 
 * An arduino  example file to  test library PushButtonLib
 * Description: See URL for full details.
 * URL: https://github.com/gavinlyonsrepo/PushButtonLib
 */

// Section :: include the Library
#include <PushButtonLib.h>

// Section :: globals define the Push Button Objects
// Connect your button between test pin and GND
PushButton button1(11, 100); 
PushButton button2(10, 100); 
PushButton button3(12, 100);

void setup() {
	button1.Init();
	button2.Init();
	button3.Init();
	
	while (!Serial) { }; // for Leos
	Serial.begin(9600);
}

void loop() {
	if (button1.IsPressed())
		Serial.println("Button 1 pressed");
	
	if (button2.IsReleased())
		Serial.println("Button 2 released");
	
	if (button3.Toggled()) {
		if (button3.ReadButton() == PushButton::PRESSED)
			Serial.println("Button 3 has been pressed");
		else
			Serial.println("Button 3 has been released");
	}
}
