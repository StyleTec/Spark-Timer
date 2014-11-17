/*
  Test.h - Test library for Wiring - implementation
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// include this library's description file
#include "spark-timer.h"
#include "application.h"

// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

SparkTimer::Timer::Timer(long delay)
{
  // initialize this instance's variables
  interval = delay;
  startTime = millis();
}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in Wiring sketches, this library, and other libraries

long SparkTimer::Timer::getInterval(void)
{
	return interval;
} 

void SparkTimer::Timer::setInterval(long delay)
{
	interval = delay;
} 

int SparkTimer::Timer::isFired(void)
{
  if ((millis()-startTime)>interval) { return 1; } else { return 0; }
}

void SparkTimer::Timer::resetTimer(void)
{
  startTime = millis();
}
