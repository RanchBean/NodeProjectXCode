/*
 * Tiemr.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#include <iostream>
#include <iomanip>
#include "Timer.h"
using namespace std;
Timer :: Timer()
{
	executionTime = 0;
}

Timer::~Timer()
{

}
void Timer :: displayTimerInformation()
{
	cout<< fixed;
	cout<< setprecision(8);

	cout<< executionTime << "us (microseconds) for the code " << endl;
	cout<< "which is " << float(executionTime)/CLOCKS_PER_SEC<< "seconds" << endl;
}
void Timer::startTimer()
{
	executionTime = clock();
}
void Timer::stopTimer()
{
	executionTime =clock() - executionTime;
}
void Timer::resetTimer()
{
	executionTime = 0;
}
long Timer::getExecutionTimeInMicrosecond()
{
	return executionTime;
}


