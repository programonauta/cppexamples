// Graph class represents a undirected graph
// using adjacency list representation

// Method to label connected components in an
// undirected graph
#include "graph.h"

// Insert a new node in the Graph
//
void Graph::addNode()
{
  nodeGraph n;
  vector<int> adjM;
  n.cLabel = -1; // label Communit -1 as default
  nodes.push_back(n);
  adj.resize(nodes.size());
}

Graph::Graph()
{
//  adj = new list<int>;
}

Graph::Graph(int qtyNodes)
{
  for (int i = 0; i < qtyNodes; i++)
    addNode();

  adj.resize(qtyNodes);
}

//
// Insert a new edge in the graph
// return false if any of nodes doesn't exist
//
bool Graph::addEdge(int n, int m)
{
  if (n < 0 || n >= nodes.size() || m < 0 || m >= nodes.size())
    return false;
  adj[n].push_back(m);
  adj[m].push_back(n);
  return true;
}

int Graph::getNumberNodes()
{
  return nodes.size();
}

int Graph::getClassLabel(int n)
{
  if (n < 0 || n >= nodes.size())
    return -2;

  return nodes[n].cLabel;
}

void Graph::DFSUtil(int n, int cLabel, bool visited[])
{
  // Mark the current node as visited and print it
  visited[n] = true;
  nodes[n].cLabel = cLabel;

  // Recur for all the vertices
  // adjacent to this vertex
  for(int i = 0; i < adj[n].size(); ++i)
  {
    int m = adj[n][i];
    if(!visited[m])
      DFSUtil(m, cLabel, visited);
  }
}

void Graph::connectedComponents()
{
  // Mark all the vertices as not visited
  bool *visited = new bool[nodes.size()];
  for(int n = 0; n < nodes.size(); n++)
    visited[n] = false;

  int classLabel = 0;
  for (int n=0; n<nodes.size(); n++)
  {
    if (visited[n] == false)
    {
      // print all reachable vertices
      // from v
      DFSUtil(n, classLabel, visited);

      classLabel++;
    }
  }
}


