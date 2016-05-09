//
//  CTECHashTable.hpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECHashTable_hpp
#define CTECHashTable_hpp
#include "HashNode.cpp"
#include <stdio.h>

template<class Type>
class CTECHashTable
{
private:
    int size;
    int capacity;
   HashNode<Type> * internalStorage;
    double effeciency;
    int findPosition(HashNode<Type> currentNode);
    int handleCollision(HashNode<Type> currentNode);
    void updateCapacity();
    
    int getNextPrime();
    bool isPrime(int canidateNumber);
    
public:
    CTECHashTable();
    ~CTECHashTable();
    
    void add(HashNode<Type> currentNode);
    bool remove(HashNode<Type> currentNode);
    bool contains(HashNode<Type> currentNode);
    int getSize();
    
};

#endif /* CTECHashTable_hpp */
