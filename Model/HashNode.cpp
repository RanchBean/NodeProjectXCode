//
//  HashNode.cpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 5/9/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashNode.hpp"
#ifndef HashNode_hpp
#define HashNode_hpp

#include <iostream>

template <class Type>
class HashNode
{
private:
    int key;
    Type value;
public:
    HashNode(int key, const Type& value)
    int getKey();
    Type getValue();
};
#endif /* HashNode_hpp */