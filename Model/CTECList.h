/*
 * CTECList.h
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_
#include "ArrayNode.h"

template <class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	void calculateSize();
    void swap (int indexOne, int indexTwo);

public:
	CTECList(int size);
	virtual ~CTECList();
	int getSize();
    void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
    void selectionSort();
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
    int indexOf(Type searchValue);


};
#endif /* MODEL_CTECLIST_H_ */
