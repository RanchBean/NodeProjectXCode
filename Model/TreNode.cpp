//
//  TreNode.cpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreNode.hpp"
template <class Type>
TreNode<Type> :: TreNode() : Node<Type>()
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = nullptr;
}
template<class Type>
TreNode<Type>:: TreNode(const Type& value) : Node<Type>(value)
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = nullptr;
    
    this->setValue(value);
}
template<class Type>
TreNode<Type>:: TreNode(const Type& value, TreNode<Type> * parent) : Node<Type>(value)
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    
    this->parent = parent;
}
template<class Type>
void TreNode<Type>::setLeftChild(TreNode<Type> * leftChild)
{
    this->leftChild = leftChild;
}
template<class Type>
void TreNode<Type>::setRightChild(TreNode<Type> * rightChild)
{
    this->rightChild = rightChild;
}
template<class Type>
void TreNode<Type>::setParent(TreNode<Type> * leftChild)
{
    this->parent = parent;
}
template<class Type>
TreNode<Type> * TreNode<Type>::getLeftChild()
{
    return this->getLeftChild;
}
template<class Type>
TreNode<Type> * TreNode<Type>::getRightChild()
{
    return this->getRightChild;
}
template<class Type>
TreNode<Type> * TreNode<Type>::getParent()
{
    return this->getParent;
}
