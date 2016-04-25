//
//  CTECGraph.cpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//
#include "CTECGraph.hpp"

template <class Type>
const int CTECGraph<Type> :: MAXIMUM;

template <class Type>
void CTECGraph<Type> :: addVertex(const Type& value)
{
    assert(size() < MAXIMUM);
    int newVertexNumber = manyVertices;
    manyVertices++;
    for(int otherVertexNumber = 0; otherVertexNumber < manyVertices; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber] [newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber] [otherVertexNumber] = false;
    }
    labels[newVertexNumber] = value;
}
template <class Type>
void CTECGraph<Type> :: addEdge(int source, int target)
{
    assert(source < size() && target < size());
    adjacencyMatrix[source][target] = true;
}
template <class Type>
bool CTECGraph<Type> :: isEdge(int source, int target) const
{
    assert(source < size() && target < size());
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target];
    return isAnEdge;
    
}

