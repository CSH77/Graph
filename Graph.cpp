#include <iostream>
#include "Graph.h"

using namespace std;

void Graph::graphInit(int numberOfVertex)
{
   for(int i = 0; i <= numberOfVertex; i++)
   {
      vertices.push_back(GraphNode(i));
   }
}

void Graph::addEdge(GraphNode& node, int toVertex)
{
   node.connectedList.push_back(toVertex);
}

void Graph::showGraphEdgeInfo(GraphNode& node)
{
   cout << "vertex " << node.vertexNumber << " is connected to: ";
   for(auto iter = node.connectedList.begin(); iter != node.connectedList.end(); iter++)
   {
      cout << *iter << " ";
   }
   cout << endl;
}

GraphNode& Graph::getVertex(int num)
{
   return vertices[num];
}

