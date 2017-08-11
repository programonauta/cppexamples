// C++ program to print connected components in
// an undirected graph
#include<iostream>
#include "graph.h"

using namespace std;
  
// Drive program to test above
int main()
{
  // Create a graph given in the above diagram
  Graph g(5); // 5 vertices numbered from 0 to 4
  g.addEdge(1, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 4);

  cout << "Following are connected components \n";
  g.connectedComponents();

  for (int i = 0; i < g.getNumberNodes(); i++)
  {
    cout << i << ", " << g.getClassLabel(i) << endl;
  }

  Graph g1;

  g1.addNode();
  g1.addNode();

  cout << g1.getNumberNodes() << "---" << endl;

  g1.addEdge(0,1);

  g1.connectedComponents();

  cout << "--------" << endl;

  for (int i = 0; i < g1.getNumberNodes(); i++)
  {
    cout << i << ", " << g1.getClassLabel(i) << endl;
  }

  return 0;
}
