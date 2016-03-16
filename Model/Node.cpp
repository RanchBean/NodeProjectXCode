/*
 * Node.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#include "Node.h"

template<class Type>
Node<Type>::Node()
{
	this->pointers = nullptr;
}

template<class Type>
Node<Type>::Node(const Type& value)
{
	this->value = value;
	this->pointers = nullptr;
}

template<class Type>
Node<Type>::~Node()
{
	//Weird ~ thing.
}

template<class Type>
Type Node<Type> :: getValue()
{
	return this->value;
}

template<class Type>
void Node<Type> :: setValue(const Type& value)
{
	this->value = value;
}

template<class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}



