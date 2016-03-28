/* Convert this program to C++
 * change to C++ io
 * change to one line comments
 * change defines of constants to const
 * change array to vector<>
 * inline any short funcion
 */

// Now all the comments changed to on line
// To change to C++ io, just put #include <iostream>
//           and change printf to cout <<
// To change defines to const:
//           const int <Name>


// <iostream> and using namespace std instead <stdio.h>
#include <iostream>
using namespace std;

// <vector> to use vectors
#include <vector>

// const instead #define
const int  N = 100;

// inserted an inline function
inline void sum(int*p, int n, vector<int> &d) {
    int i;
    *p = 0;
    for (i=0; i < n; ++i)
	*p = *p + d[i];
}

int main() {
    int i;
    int accum = 0;

    // define vector instead data[N]
    vector<int> data(N);
    for (i = 0; i < N; i++)
	data[i] = i;

    sum(&accum, N, data);
    cout << "sum is " << accum << endl;
    return 0;
}
