/*
 * NodeController.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#include "NodeController.h"
#include <iostream>
#include <stdlib.h> //allows rand() funtion access
using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
	notHipDoubles = new CTECArray<double>(4);


}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
    
}

void NodeController::sortData()
{
    /*
     Create a CTECList/Array
     fill them with random stuff
     start a timer
     */
    CTECArray<int> randomNumberArray(5000);
    CTECList<int> randomNumberList;
    int myCPPArray[5000];
    for(int spot = 0; spot < 5000; spot++)
    {
        int myRandom = rand();
        randomNumberArray.set(spot, myRandom);
        randomNumberList.addToEnd(myRandom);
        myCPPArray[spot] = myRandom;
    }
    Timer sortTimer;
    sortTimer.startTimer();
    randomNumberArray.selectionSort();
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    
    sortTimer.resetTimer();
    sortTimer.startTimer();
    std::sort(std::begin(myCPPArray), std::end(myCPPArray));
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    sortTimer.resetTimer();
}


