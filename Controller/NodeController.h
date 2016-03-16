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
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
