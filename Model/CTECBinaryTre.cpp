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
bool CTECBinaryTre<Type> :: contains(Type value, TreNode<Type> * currentTre)
{
    bool isInTre = false;
    if(currentTre !=nullptr)
    {
        if(currentTre->getValue() == value)
        {
            isInTre = true;
        }
        else
        {
            if(value < root->getValue())
            {
                isInTre = contains(value, currentTre->getLesftChild());
            }
            else
            {
                isInTre = contains(value, currentTre->getRightChild());
            }
        }
    }
    return isInTre;
}
template <class Type>
bool CTECBinaryTre<Type> :: insert(const Type& value)
{
    if(contains(value))
    {
        return false;
    }
    else
    {
        CTECBinaryTre<Type> * currentNode = root;
        CTECBinaryTre<Type> * trailNode;
        
        if(root == nullptr)
        {
            root = new TreNode<Type>(value);
        }
        else
        {
            while(currentNode != nullptr)
            {
                trailNode = currentNode;
                
                if (currentNode->getValue() < value)
                {
                    currentNode = currentNode->getRightChild();
                }
                else
                {
                    currentNode = currentNode->getLeftChild();
                }
            }
            if(trailNode->getValue() > value)
            {
                trailNode->setLeftChild(new TreNode<Type>(value, trailNode));
            }
            else
            {
                TreNode<Type> * insertedNode = new TreNode<Type>(value, trailNode);
                trailNode->setRightChild(insertedNode);
            }
        }
    }
    return true;
    CTECBinaryTre<Type> * newNode;
}
template <class Type>
TreNode<Type> * CTECBinaryTre<Type> :: getRightMostChild(TreNode<Type> leftSubTree)
{
    TreNode<Type> * rightNode = leftSubTree;
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightMostChild();
    }
    
    return rightNode;
    
}
template <class Type>
TreNode<Type> * CTECBinaryTre<Type> :: getLeftMostChild(TreNode<Type> rightSubTree)
{
    TreNode<Type> * leftNode = rightSubTree;
    while(leftNode->getRightChild() != nullptr)
    {
        rightNode = leftNode->getLeftMostChild();
    }
    
    return rightNode;
    
}
template <class Type>
void CTECBinaryTre<Type> :: deleteFromTree(TreNode<Type> * toDelete)
{
     CTECBinaryTre *current;
     CTECBinaryTre *trailCurrent;
     CTECBinaryTre *temp;
    if(toDelete == nullptr)
    {
        cerr << "Error : The node is to be deleted is null." <<endl;
    }
    else if(toDelete->getLeft == nullptr && toDelete->getleftLink == nullptr)
    {
        
    }
}