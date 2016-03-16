/*
 * Timer.h
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */
#ifndef MODEL_TIMER_H_
#define MODEL_TIMER_H_
#include <time.h>
class Timer
{
	clock_t executionTime;

public:
	Timer();
	virtual ~Timer();
	void startTimer();
	void stopTimer();
	void resetTimer();
	void displayTimerInformation();
	long getExecutionTimeInMicrosecond();
};




#endif /* MODEL_TIMER_H_ */
