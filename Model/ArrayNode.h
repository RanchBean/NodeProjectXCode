/*
 * ArrayNode.h
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#ifndef MODEL_ARRAYNODE_H_
#define MODEL_ARRAYNODE_H_

#include "Node.h"
template <class Type>

class ArrayNode: public Node<Type>
{
private :
	ArrayNode * next;
public:
	ArrayNode();
	ArrayNode(const Type& value);
	ArrayNode(const Type& value, ArrayNode * next);
	ArrayNode * getNext();
	void setNext(ArrayNode * next);
	virtual ~ArrayNode();
};

#endif /* MODEL_ARRAYNODE_H_ */
