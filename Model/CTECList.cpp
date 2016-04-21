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
CTECList<Type>::CTECList()
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
void CTECList<Type> :: swap(int indexOne, int indexTwo)
{
    assert(indexOne < size && indexTwo < size);
    Type temp = getFromIndex(indexOne);
    set(indexOne, getFromIndex(indexTwo));
    set(indexTwo, temp);
}
template <class Type>
void CTECList<Type> :: selectionSort()
{
    for(int outerLoop = 0; outerLoop < size - 1; outerLoop++)
    {
        int selectedMinimum = outerLoop;
        
        for(int innerLoop = outerLoop + 1; innerLoop < size; innerLoop++)
        {
            if(getFromIndex(innerLoop) < getFromIndex(selectedMinimum))
            {
                selectedMinimum = innerLoop;
            }
        }
        if(selectedMinimum != outerLoop)
        {
            swap(selectedMinimum, outerLoop);
        }
    }
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
    assert(index <= size);
    assert(index >= 0);
    
    if(index == 0)
    {
        addToFront(value);
    }
    else if(index == size - 1)
    {
        addToEnd(value);
    }
    else
    {
        //ArrayNode<Type> * newNode = newArrayNode
    }
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
    return head->getValue();
}
template<class Type>
Type CTECList<Type>:: getEnd()
{
    return end->getValue();
}
template<class Type>
Type CTECList<Type>:: getFromIndex(int index)
{
    assert(size > 0 && index >= 0 && index < size);
    Type returnValue;
    ArrayNode<Type> * current = head;
    
    for(int spot = 0; spot <= index; spot++)
    {
        if(spot == index)
        {
            returnValue = current->getValue();
        }
        current = current->getNext();
    }
    return returnValue;
}
template<class Type>
Type CTECList<Type>:: removeFromFront()
{
    Type returnValue;
	assert(this->size > 0);
    ArrayNode<Type> * newHead;
    newHead = this->head->getValue();
    delete this->head;
    this->head = newHead;
    this->calculateSize(returnValue);
    return returnValue;
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
	ArrayNode<Type> * current,previous,deleteMe,newNext;

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
            if(spot == index -1)
            {
                previous = current;
            }
            else if(spot == index)
            {
                deleteMe = current;
                newNext = current->getNext();
            }
		}
        thingToRemove = deleteMe->getValue();
        previous->setNext(newNext);
        delete deleteMe;
        this->calculateSize();
	}
    return thingToRemove;
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

template <class Type>
int CTECList<Type> :: indexOf(Type searchValue)
{
    assert(this->size >0);
    int index;
    ArrayNode<Type> * searchPointer;
    for(searchPointer = head; searchPointer != nullptr; searchPointer = searchPointer->getNext
        ())
    {
        if(searchValue == searchPointer->getValue())
        {
            return index;
        }
        index++;
    }
    index = -1;
    return index;
}
