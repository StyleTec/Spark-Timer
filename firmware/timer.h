/*
  timer.h - A non-blocking timer library for Arduino/Spark
  Copyright (c) 2014 Bastian Mencke.  All right reserved.
*/


// ensure this library description is only included once
#ifndef sparktimer_h
#define sparktimer_h

// library interface description
class Timer
{
  // user-accessible "public" interface
  public:
	Timer(long);
	long getInterval(void);
	void setInterval(long delay);
	int isFired(void);
	void resetTimer(void);

  // library-accessible "private" interface
  private:
	unsigned long interval;
	unsigned long startTime;
}

#endif

