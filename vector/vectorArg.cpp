#include <iostream>
#include <vector>

//
// Example passing a string vector as a parameter
//

using namespace std;

int incVec (vector<string> & v)
{
  
  v.push_back("item 0");
  v.push_back("item 1");

  return 0;
}

int main (int argc, char* argv[])
{
  vector<string> names;
  
  int x = incVec(names);
  int s = names.size();

  cout << "Size of vector: " << s << "\n";

  for (int i = 0; i < s; i++)
    cout << names[i] << "\n";

}
