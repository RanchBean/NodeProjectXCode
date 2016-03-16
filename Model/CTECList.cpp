/*
 * CTECList.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */
#include "CTECList.h"
#include <iostream>
#include <assert.h>
using namespace std;

template<class Type>
CTECList<Type>::CTECList(int size)
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}
template <class Type>
CTECList<Type>::~CTECList()
{
	ArrayNode<Type> * current = head;
	while(current->getNext() != nullptr)
	{
		ArrayNode<Type> * temp = current;
		current = current->getNext();
		head = current;
		delete temp;
	}
	delete head;
	head = nullptr;
	end = nullptr;
	size = 0;
}
template <class Type>
int CTECList<Type>::getSize()
{
	return size;
}
template<class Type>
void CTECList<Type>:: addToFront(const Type& value)
{
	ArrayNode<Type> * newNode = new ArrayNode<Type>(value, head);
	head = newNode;
	if(size== 0)
	{
		end = head;
	}
	calculateSize();
}
template<class Type>
void CTECList<Type>:: addToEnd(const Type& value)
{
	ArrayNode<Type> * newNode = new ArrayNode<Type>(value, head);
	if(end == nullptr)
	{
		addToFront(value);
	}
	else
	{
		newNode = new ArrayNode<Type>(value);
		end->setNext(newNode);
	}

	end = newNode;
}
template<class Type>
void CTECList<Type>:: addAtIndex(int index, const Type& value)
{

}
template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size>=0);
	int count =0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext()!= nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}
}
template<class Type>
Type CTECList<Type>:: getFront()
{
	return this->head;
}
template<class Type>
Type CTECList<Type>:: getEnd()
{
	return this->end;
}
template<class Type>
Type CTECList<Type>:: getFromIndex(int index)
{

}
template<class Type>
Type CTECList<Type>:: removeFromFront()
{
//findNextspotremove head move head ti next spot.
	assert(this->size > 0);

	Type thingToRemove;
	newHead = this->head->getNext();
	thingToRemove = this->head->getValue();
	delete  this->head;
	this->head = newHead;
	this->calculateSize();
	return thingToRemove;
}
template <class Type>
Type CTECList<Type>:: removeFromEnd()
{

}
template <class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	assert(this->size > 0);
	assert(index >= 0 && index < size);
	Type thingToRemove;
	ArrayNode<Type> * previous,deleteMe,newNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot< index+1; spot++)
		{

		}
	}
}
template <class Type>
Type CTECList<Type>::set(int index, const Type& value)
{
	assert(index >= 0 && index < size);
	ArrayNode<Type> * current = head;
	for(int spot = 0; spot < index; spot++)
	{
		current = current->getNext();
	}
	current->setValue(value);
}




