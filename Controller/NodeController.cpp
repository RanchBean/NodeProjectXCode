/*
 * NodeController.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#include "NodeController.h"

#include <iostream> 
#include <stdlib.h> //allows rand() function access
using namespace std;

NodeController::NodeController()
{
    numbers = new CTECList<int>();
    timer = new Timer();
    array = new CTECArray<int>(5);
}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
    
}
void NodeController :: testLists()

{
    
    numbers->addToFront(3);
    
    numbers->addToEnd(8);
    
    cout << "End should be 8 and is: " << numbers->getEnd() << endl;
    
    cout << "Head should be 3 and is: " << numbers->getFront() << endl;
    
}
void NodeController :: tryTre()
{
    
    CTECBinaryTre<int> firstTre;
    firstTre.insert(34);
    firstTre.insert(68);
    cout << "Current size of tree is " << firstTre.getSize() << endl;
    firstTre.insert(581);
    firstTre.insert(-87);
    firstTre.insert(7);
    cout << "Current size of tree is " << firstTre.getSize() << endl;
    firstTre.insert(1);
    cout << "Current size of tree is " << firstTre.getSize() << endl;
    cout << "The Tree in order traversal: " << endl;
    firstTre.inorderTraversal(firstTre.getRoot());
    cout << endl;
    cout << "The Tree pre order traversal: " << endl;
    firstTre.preorderTraversal(firstTre.getRoot());
    cout << endl;
    cout << "The Tree post order traversal: " << endl;
    firstTre.postorderTraversal(firstTre.getRoot());
    cout << endl;
    firstTre.remove(2);
    cout << "In order traversal after remove: " << endl;
    firstTre.inorderTraversal(firstTre.getRoot());
    
    
}
void NodeController::merge(int data[], int sizeOne, int sizeTwo)
{
    int * temp;
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;
    
    temp = new int[sizeOne + sizeTwo];
    
    while((copied1 , sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1]< (data + sizeOne) [copied2])
        {
            temp[copied++] = data[copied1++];
        }
        else
        {
            temp[copied++] = (data+ sizeOne)[copied2];
        }
    }
    while(copied1 < sizeOne)
    {
        temp [copied++] = data[copied1++];
    }
    while(copied2 < sizeTwo)
    {
        temp[copied++] = (data + sizeOne)[copied2++];
    }
    for(index = 0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp [index];
    }
    delete [] temp;
}
void NodeController :: testHashTable()
{
    CTECHashTable<int> tempTable;
    HashNode<int> tempArray[10];
    for(int spot = 0; spot < 10; spot++)
    {
        int randomValue= rand();
        int randomKey = rand();
        HashNode<int> temp = HashNode<int>(randomKey, randomValue);
        tempTable.add(temp);
        tempArray[spot] = temp;
    }
    bool test = tempTable.contains(tempArray[0]);
    string result;
    if(test)
    {
        result = "it's right there";
    }
    else
    {
        result = "not anywhere else";
    }
    cout << result << endl;
}
void NodeController :: tryGraphs()
{
    CTECGraph<int> * graph = new CTECGraph<int>();
    graph->addVertex(5);
    graph->addEdge(0,1);
    graph->addVertex(4);
    graph->addEdge(1,2);
    graph->addVertex(17);
    graph->addEdge(2,3);
    graph->addVertex(212);
    graph->addEdge(3,4);
    graph->addVertex(1);
    graph->addEdge(4,5);
    graph->addVertex(-23);
    graph->addEdge(5,6);
    graph->addVertex(787);
}
void NodeController::doMergesort()
    {
        mergeData = new int[500000];
        for(int spot = 0; spot < 500000; spot++)
        {
            int myRandom = rand();
            mergeData[spot] = myRandom;
        }
        for (int spot = 0; spot < 5000; spot++)
        {
            cout << mergeData[spot]<< ", " ;
        }
        Timer mergeTimer;
        mergeTimer.startTimer();
        mergesort(mergeData, 500000);
        mergeTimer.stopTimer();
        mergeTimer.displayTimerInformation();
        
        for(int spot = 0; spot < 5000; spot++)
        {
            cout << mergeData[spot] << ", ";
        }
        delete [] mergeData;
    }
void NodeController:: mergesort(int data[], int size)
{
    int sizeOne;
    int sizeTwo;
    if(size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;
        
        mergesort(data, sizeOne);
        mergesort((data+sizeOne), sizeTwo);
        merge(data, sizeOne, sizeTwo);
    }
}
void NodeController::quicksort(int first, int last)
{
    int pivotIndex;
    if(first < last)
    {
        pivotIndex = partition(first, last);
        quicksort(first, pivotIndex-1);
        quicksort(pivotIndex+1, last);
    }
}
int NodeController::partition(int first, int last)
{
    int pivot;
    int index, smallIndex;
    swap(first, (first + last)/2);
    pivot = mergeData[first];
    smallIndex = first;
    for(index = first + 1; index <= last; index++)
    {
        if(mergeData[index] <pivot)
        {
            smallIndex++;
            swap(smallIndex, index);
        }
    }
    swap(first, smallIndex);
    return smallIndex;
}
void NodeController::swap(int first, int last)
{
    int temp = mergeData[first];
    mergeData[first] = mergeData[last];
    mergeData[last] = temp;
}
void NodeController :: doQuick()
{
    mergeData = new int[100000000];
    for (int spot = 0; spot < 100000000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    Timer mergeTimer;
    mergeTimer.startTimer();
    quicksort(0, 1000000000-1);
    mergeTimer.stopTimer();
    mergeTimer.displayTimerInformation();
    delete[] mergeData;
}


void NodeController::sortData()
{
    /*
     Create a CTECList/Array
     fill them with random stuff
     start a timer
     */
    CTECArray<int> randomNumberArray(5000);
    CTECList<int>   randomNumberList;
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


