/*
 * File: PushButtonLib.h
 * Description: 
 * A Simple small library to read push buttons, arduino eco system
 * Author: Gavin Lyons.
 * Created : March 2022
 * Description: See URL for full details.
 * URL: https://github.com/gavinlyonsrepo/PushButtonLib
 */

#ifndef PushButtonLib_h
#define PushButtonLib_h

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#define DEBOUNCE_DELAY 250 // mS

class PushButton
{
	public:
		PushButton(uint8_t pin, uint16_t DebounceDelay);
		void Init();
		
		bool ReadButton();
		bool IsPressed();
		bool IsReleased();
		bool HasChanged();
		bool Toggled();
		
		const static bool PRESSED = LOW;
		const static bool RELEASED = HIGH;
		
	private:
	
		uint8_t  _PushButtonPin;
		uint16_t _DeBounceDelay= DEBOUNCE_DELAY;
		uint32_t _IgnoreUntil = 0;
		bool     _HasChanged = false;
		bool     _PushButtonReadButton = HIGH;
		
};

#endif
