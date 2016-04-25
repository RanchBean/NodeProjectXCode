//
//  CTECGraph.hpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//
#ifndef CTECGraph_hpp
#define CTECGraph_hpp
#include <stdio.h>
#include <set>

template <class Type>
class CTECGraph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    Type labels[MAXIMUM];
    int manyVertices;
public:
    CTECGraph<Type>();
    ~CTECGraph<Type>();
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    Type& operator [] (int vertex);
    Type operator[](int vertex) const;
    int size();
    bool isEdge(int source, int target)const;
    std::set<int> neighbors(int vertex)const;
    
};
#endif /* CTECGraph_hpp */
