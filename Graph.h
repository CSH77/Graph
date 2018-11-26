#ifndef Graph_h
#define Graph_h
#include <vector>
#include <set>

enum {A,B,C,D,E,F,G,H,I,J};

struct GraphNode
{
   int vertexNumber;
   std::vector<int> connectedList;

   GraphNode(int num = 0) : vertexNumber(num){}
};

class Graph
{
private:
   std::set<int> visitedList;

public:
   std::vector<GraphNode> vertices;

   void graphInit(int numberOfVertex);
   void addEdge(GraphNode& vertex, int toVertex);
   void showGraphEdgeInfo(GraphNode& vertex);
   GraphNode& getVertex(int num);

};

#endif
