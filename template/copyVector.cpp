//
// Example of how to use two templates
//
// Week 2, lecture 2.2
//

#include <iostream>
using namespace std;
#include <vector>


//
// Pay attention on the safe casting 'static_cast'
//
/*
  . More types means worrying about convertions and more signatures
  . static_cast operators are considered safe

  . The old cast operator (type) is deprecated 

 */
template <class T1, class T2>
void copy(const T1 source[], T2 destination[], int size) {
    for (int i = 0; i < size; ++i)
	destination[i] = static_cast<T2>(source[i]);
}

template <class T>
T display(T data[], int size) {
    for (int i = 0; i<size; ++i)
	cout << "Value(" << i << ") = " << data[i] << endl;
    return 0;
}

int main() {
    cout << "using two templates" << endl;

    int a[] = {1, 2, 3};
    double b[3];

    copy(a, b, 3);

    display(b, 3);

    double c[] = {3.9, 4.5, 6.7};
    copy (c, a, 3);

    display(a, 3);
}
