// 
// Example: Square all elements
//

#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;

template<typename ForwardIterator>

void square(ForwardIterator first, ForwardIterator last) {
  for (; first != last; first++)
    *first = (*first) * (*first);
}

vector<int> w = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main() {
  square(w.begin(), w.end());
  
  // auto provide the exact type for i, depending on the type of w 
  for (auto i: w)
    cout << i << "\t";

  cout << endl;
}
