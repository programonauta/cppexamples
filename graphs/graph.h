#ifndef GRAPH_H
#define GRAPH_H

//#include <list>
#include <vector>

using namespace std;

typedef struct nGraph 
{
  int cLabel;
} nodeGraph;

class Graph
{
  private: 

  vector<nodeGraph> nodes;  
  int cLabel;   // Community Label

  // Pointer to an array containing adjacency lists
  vector<vector <int> > adj;

  // A function used by DFS
  void DFSUtil(int n, int cLabel, bool visited[]);
  
  public:
  Graph(); 
  Graph(int qtyNodes);   // Constructor
  void addNode();
  bool addEdge(int n, int m);
  void connectedComponents();

  int getClassLabel(int n);
  int getNumberNodes();
};



#endif
