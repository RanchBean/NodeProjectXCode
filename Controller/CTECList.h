/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: cody.henrichsen
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"
namespace CTECData
{
template <class Type>
class CTECList
{
private:
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	int size;
    void swap(int indexOne, int indexTwo);
	void calculateSize();
public:
	CTECList();
	virtual ~CTECList();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
    int indexOf(Type searchValue);
    int nextIndexOf(int startingIndex, Type searchValue);
    void selectionSort();
};
}

#endif /* MODEL_CTECLIST_H_ */
