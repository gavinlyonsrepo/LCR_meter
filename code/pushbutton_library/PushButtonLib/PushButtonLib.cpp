/*
 * File: PushButtonLib.cpp
 * Description: 
 * A Simple small library to read push buttons ,arduino eco system
 * Author: Gavin Lyons.
 * Created : March 2022
 * Description: See URL for full details.
 * URL: https://github.com/gavinlyonsrepo/PushButtonLib
 */

#include "PushButtonLib.h"

PushButton::PushButton(uint8_t pin, uint16_t DebounceDelay= DEBOUNCE_DELAY)
{
	_PushButtonPin = pin;
	_DeBounceDelay = DebounceDelay;
}

void PushButton::Init()
{
	pinMode(_PushButtonPin, INPUT_PULLUP);
}

// 
// public methods
// 

bool PushButton::ReadButton()
{
	// ignore pin changes until after this delay time
	if (_IgnoreUntil > millis())
	{
		// ignore any changes during this period
	}
	
	// pin has changed 
	else if (digitalRead(_PushButtonPin) != _PushButtonReadButton)
	{
		_IgnoreUntil = millis() + _DeBounceDelay;
		_PushButtonReadButton = !_PushButtonReadButton;
		_HasChanged = true;
	}
	
	return _PushButtonReadButton;
}

// has the button been toggled from on -> off, or vice versa
bool PushButton::Toggled()
{
	ReadButton();
	return HasChanged();
}

// mostly internal, tells you if a button has changed after calling the read() function
bool PushButton::HasChanged()
{
	if (_HasChanged  == true)
	{
		_HasChanged  = false;
		return true;
	}
	return false;
}

// has the button gone from off -> on
bool PushButton::IsPressed()
{
	if (ReadButton() == PRESSED && HasChanged() == true)
		return true;
	else
		return false;
}

// has the button gone from on -> off
bool PushButton::IsReleased()
{
	if (ReadButton() == RELEASED && HasChanged() == true)
		return true;
	else
		return false;
}
