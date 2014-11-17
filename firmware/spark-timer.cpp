/*
  Test.h - Test library for Wiring - implementation
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// include this library's description file
#include "spark-timer.h"
#include "Arduino.h"

// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

spark-timer::spark-timer(long delay)
{
  // initialize this instance's variables
  interval = delay;
  startTime = millis();
}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in Wiring sketches, this library, and other libraries

long spark-timer::getInterval(void)
{
	return interval;
} 

void spark-timer::setInterval(long delay)
{
	interval = delay;
} 

int spark-timer::isFired(void)
{
  if ((millis()-startTime)>interval) { return 1; } else { return 0; }
}

void spark-timer::resetTimer(void)
{
  startTime = millis();
}
