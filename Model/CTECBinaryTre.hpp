//
//  CTECBinaryTre.hpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECBinaryTre_hpp
#define CTECBinaryTre_hpp

#include "TreNode.hpp"
template<class Type>
class CTECBinaryTre
{
private:
    int size;
    TreNode<Type> * root;
    int hight;
    bool balanced;
    bool contains(Type value, CTECBinaryTre<Type> * currentTre);
public:
    CTECBinaryTre();
    ~CTECBinaryTre();
    bool insert(const Type& value);
    Type rove(const Type& value);
    bool contains(Type Value);
    int getSize();
    int getHeight();
    bool isBalanced();
    TreNode<Type> * getRoot();
};

#endif /* CTECBinaryTre_hpp */
