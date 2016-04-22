//
// Example of how to use template
//
// Week 2, lecture 2.1
//

#include<iostream>
using namespace std;
#include <vector>



//-=-=-=-=-=-=-=-=-=-=-
//
// Ideas
// -----
// data is not mutable, usa a const
// s with default 0
//
// I can call this function with:
//
// sum(scores, 92)
// sum(scores, 92,58) -> In this case s starts with 58
//
// You could use a default falue for size variable
//
//-=-=-=-=-=-=-=-=-=-=-


template <class T>
T sum(T data[], int size, T s = 0) {
    for (int i = 0; i < size; ++i)
	s+= data[i]; // += must work for T
    return s;
}

template <class T>
T display(T data[], int size) {
    for (int i = 0; i<size; ++i)
	cout << "Value(" << i << ") = " << data[i] << endl;
    return 0;
}

int main() {

    cout << "template for sum()" << endl;
    int a[] = {1, 2, 3};
    double b[] = {2.1, 2.2, 2.3};
    cout << sum(a,3) << endl;
    cout << sum(b,3) << endl;

    a[1] = 5;
    b[1] = 5.5;
    cout << sum(a,3) << endl;
    cout << sum(b,3) << endl;

    display(a, 3);
    display(b, 3);
    
}
