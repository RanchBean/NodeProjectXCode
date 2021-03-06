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
    int height;
    void calculateSize(TreNode<Type> * currentNode); //doen
    bool balanced;
    bool contains(Type value, TreNode<Type> * currentTre);//deon
    TreNode<Type> * getRightMostChild(TreNode<Type> leftSubTree);
    TreNode<Type> * getLeftMostChild(TreNode<Type> rightSubTree);
    void remove(TreNode<Type> * nodeToBeRemoved);
public:
    CTECBinaryTre();
    ~CTECBinaryTre();
    bool insert(const Type& value);//done
    void remove(const Type& value);
    bool contains(Type Value); //doen
    int getSize();//done
    int getHeight();
    bool isBalanced();
    TreNode<Type> * getRoot();
    void preorderTraversal(TreNode<Type> *currentNode);//doen
    void inorderTraversal(TreNode<Type> *currentNode);//doen
    void postorderTraversal(TreNode<Type> *currentNode);//done
    void deleteFromTree(TreNode<Type> * toDelete);
};

#endif /* CTECBinaryTre_hpp */
