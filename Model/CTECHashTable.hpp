//
//  CTECHashTable.hpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECHashTable_hpp
#define CTECHashTable_hpp

#include <stdio.h>
template<class Type>
class CTECHashTable
{
private:
    int size;
    int capacity;
    Type * internalStorage;
    double effeciency;
    int findPosition(const Type& value);
    int handleCollision(const Type& value);
    void updateSize();
public:
    CTECHashTable();
    ~CTECHashTable();
    void add(const Type & value);
    bool remove(const Type& value);
    bool contains(const Type& value);
    int getSize();
    
};

#endif /* CTECHashTable_hpp */
