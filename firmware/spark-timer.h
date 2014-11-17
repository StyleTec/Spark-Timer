/*
  Test.h - Test library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef spark-timer_h
#define spark-timer_h

// library interface description
class spark-timer
{
  // user-accessible "public" interface
  public:
    spark-timer(long);
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

