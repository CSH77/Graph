#include <iostream>
#include "Graph.h"

using namespace std;
int main()
{
    Graph graphObj;
    graphObj.graphInit(10);

    //add edge
    graphObj.addEdge(graphObj.getVertex(A), 2);
    graphObj.addEdge(graphObj.getVertex(A), 3);
    graphObj.addEdge(graphObj.getVertex(A), 4);

    int vertexNumber = 10;
    for(int i = 0; i <= 10; i++ )
    {
        graphObj.showGraphEdgeInfo(graphObj.getVertex(i));
    }

    return 0;
}



