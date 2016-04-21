/*
 * NodeController.h
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */


#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.h"
#include "../Model/CTECList.cpp"
#include "../Model/CTECBinaryTre.cpp"
#include <string>
using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
	CTECArray<double> * notHipDoubles;
	Node<string> stringNode;
	Node<int> intNode;
	ArrayNode<string> stringArrayNode;
	ArrayNode<string> otherArrayNode;
	Timer arrayTimer;
    void sortData();
    int * mergeData;
    void doMergesort();
    void mergesort(int data[], int size);
    void merge(int data[], int sizeOne, int sizeTwo);
    void swap(int first, int second);
    void quicksort(int first, int last);
    void doQuick();
    int partition(int first, int last);
    void tryTre();
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
