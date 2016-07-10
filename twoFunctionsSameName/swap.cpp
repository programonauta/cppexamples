// **************************
// Program to swap two values
// Now with some differences
// wrote in C++
//
// **************************

// <iostream> instead <stdio.h>
// and using namespace std
#include <iostream>
using namespace std;

// Now it's possible use two differents functions with
// same name
// To pass by reference, it's only use int&, double&
inline void swap(int& i, int& j) {
    // pay attention that it's not necessary use pointers
    int temp = i;
    i = j;
    j = temp;
}

// The double swap using the same function name
inline void swap(double& i, double& j) {
    double temp = i;
    i = j;
    j = temp;
}

int main() {
    int i, j;
    double k, l;

    i = 2;
    j = 3;
    k = 1.5;
    l = 4.6;

    cout << "i = " << i << " j = " << j << endl;
    cout << "k = " << k << " l = " << l << endl;
    cout << "----->>> Swapping\n";
    swap(i, j);
    swap(k, l);
    cout << "i = " << i << " j = " << j << endl;
    cout << "k = " << k << " l = " << l << endl;

}
