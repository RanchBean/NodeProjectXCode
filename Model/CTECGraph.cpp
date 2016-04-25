//
//  CTECGraph.cpp
//  NodeProjectXCode
//
//  Created by Throndsen, Ethan on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECGraph.hpp"
#define CTECGraph_hpp
#include <stdio.h>

template <class Type>
class CTECGraph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    Type labels[MAXIMUM];
    int manyVertices;
public:
    CTECGraph();
    ~CTECGraph();
    
    
};
