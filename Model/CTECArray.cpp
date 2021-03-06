/*
 * CTECArray.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#include "CTECArray.h"
#include <assert.h>
#include <iostream>
using namespace std;

template<class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	//defensive code

	assert(size > 0);
	for (int index = 0; index < size; index++) {
		if (head != nullptr)
		{
			//regular array nodes are being made.
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			this->head = nextNode;
		}
		else
		{
			//first array node needs to be made
			ArrayNode<Type> * firstNode = new ArrayNode<Type>();
			this->head = firstNode;
		}

	}

}
template<class Type>
CTECArray<Type>::~CTECArray() {
	ArrayNode<Type> * deleteMe = head;
	for (int index = 0; index < size; index++) {
		if (deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);

			delete deleteMe;
			deleteMe = head;
		}
		else
		{
			delete deleteMe;

		}

	}
	delete head;
}

template<class Type>
void CTECArray<Type> :: set(const Type& value, int position)
{

	assert(position < size && position >= 0);

	ArrayNode<Type> * current = head;
	for (int spot = 0; spot <= position; spot++)
	{
		if(spot != position)
		{
			current = current->getNext();
		}
		else
		{
			current->setValue(value);
		}
	}
}
template <class Type>
void CTECArray<Type> :: swap(int indexOne, int indexTwo)
{
    assert(indexOne < size && indexTwo < size);
    Type temp = get(indexOne);
    set(indexOne, get(indexTwo));
    set(indexTwo, temp);
}
template <class Type>
void CTECArray<Type> :: selectionSort()
{
    for(int outerLoop = 0; outerLoop < size - 1; outerLoop++)
    {
        int selectedMinimum = outerLoop;
        
        for(int innerLoop = outerLoop + 1; innerLoop < size; innerLoop++)
        {
            if(get(innerLoop) < get(selectedMinimum))
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
Type CTECArray<Type>::get(int position)
{
	//We need to do boudn checking so dont crash program
	assert(position < size && position>= 0);
		//am in  bound
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
    return current->getValue();
}

template<class Type>
int CTECArray<Type>::getSize()
{
	return this->size = size;
}
/*
 1.check if exists
 2.point to head
 3.loop over nodes
 4.return index or -1 if not found
*/
template<class Type>
int CTECArray<Type> :: indexOf(Type searchValue)
{
    assert(this->size > 0);
    ArrayNode<Type> * current = head;
    int indexNotFound = -1;
    for (int index = 0; index < this->sie; index++)
    {
        if(current->getValue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current->getValue();
        }
    }
    return indexNotFound;
}

template<class Type>
int CTECArray<Type> :: nextIndexOf(int startingIndex, Type searchValue)
{
    assert(this->size > 0);
    assert(startingIndex >= 0 && startingIndex < this->size);
    
    ArrayNode<Type> * current = head;
    int indexNotFound = -1;
    for(int index = 0; index<startingIndex; index++)
    {
        current = current->getNext();
    }
    for (int index = startingIndex; index < this->sie; index++)
    {
        if(current->getValue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current->getValue();
        }
    }
    return indexNotFound;
}




