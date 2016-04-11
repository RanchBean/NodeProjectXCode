//
//  TreNode.hpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef TreNode_hpp
#define TreNode_hpp

#include "Node.h"

namespace CTECData
{
template <class Type>
class TreNode : public Node<Type>
{
private:
    TreNode<Type> * leftChild;
    TreNode<Type> * rightChild;
    TreNode<Type> * parent;
    
public:
    TreNode();
    TreNode(const Type& value);
    TreNode(const Type&value, TreNode<Type> * parent);
    void setLeftChild(TreNode<Type> * leftChild);
    void setRightChild(TreNode<Type> * rightChild);
    void setParent(TreNode<Type> * parent);
    TreNode<Type> * getLeftChild();
    TreNode<Type> * getRightChild();
    TreNode<Type> * getParent();
  
};
    
}

#endif /* TreNode_hpp */
