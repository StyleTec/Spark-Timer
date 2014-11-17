/*
  Test.h - Test library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef Timer_h
#define Timer_h

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
};

#endif

