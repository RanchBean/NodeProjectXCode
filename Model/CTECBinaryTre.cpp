//
//  CTECBinaryTre.cpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBinaryTre.hpp"
#include <iostream>
using namespace std;

template <class Type>
CTECBinaryTre<Type> :: CTECBinaryTre()
{
    this->root = nullptr;
    this->size = 0;
    this->height = 0;
    this->balanced = true;
}
template <class Type>
int CTECBinaryTre<Type> :: getSize()
{
    size = 0;
    size = calculatedSize(root);
    return size;
}
template <class Type>
void CTECBinaryTre<Type> :: calculateSize(TreNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        calculateSize(currentNode->getleftChild());
        calculateSize(currentNode->getRightChild());
        size++;
    }
}
template <class Type>
TreNode<Type> * CTECBinaryTre<Type> ::getRoot()
{
    return root;
}
template <class Type>
void CTECBinaryTre<Type> :: preorderTraversal(TreNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode->getValue() << " " ;
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->getRightChild());
    }
}
template <class Type>
void CTECBinaryTre<Type> :: inorderTraversal(TreNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        
        inorderTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << " " ;
        inorderTraversal(currentNode->getRightChild());
    }
}
template <class Type>
void CTECBinaryTre<Type> :: postorderTraversal(TreNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        
        postorderTraversal(currentNode->getLeftChild());
        postorderTraversal(currentNode->getRightChild());
        cout << currentNode->getValue() << " ";
    }
}
template <class Type>
bool CTECBinaryTre<Type> :: contains(Type value)
{
    bool isInTre = false;
    if(root != nullptr)
    {
        if(root->getvalue() == value)
        {
            isInTre = true;
        }
        else
        {
            if(value < root->getValue())
            {
                isInTre = contains(value, root->getLesftChild());
            }
            else
            {
                isInTre = contains(value, root->getRightChild());
            }
        }
    }
    return isInTre;
}
template <class Type>
bool CTECBinaryTre<Type> :: contains(Type value, CTECBinaryTre<Type> * currentTre)
{
    bool isInTre = false;
    if(currentTre !=nullptr)
    {
        if(currentTre->getRoot()->getValue() == value)
        {
            isInTre = true;
        }
        else
        {
            if(value < root->getValue())
            {
                isInTre = contains(value, currentTre->getRoot()->getLesftChild());
            }
            else
            {
                isInTre = contains(value, currentTre->getRoot()->getRightChild());
            }
        }
    }
    return isInTre;
}

