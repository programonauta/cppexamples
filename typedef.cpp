//
// typedef example
//
// Week 2 - Lecture 2.8

#include <iostream>
using namespace std;

typedef enum days{SUN, MON, TUE, WED, THU, FRI, SAT} days;
inline days operator++ (days d) {
    return static_cast<days>((static_cast<int>(d) + 1) % 7);
}

// overloading operator <<
// With this you can modify the behavior of << operator for new type

ostream& operator<< (ostream& out, const days& d) {
    switch (d) {
    case SUN: out << "SUN"; break;
    case MON: out << "MON"; break;
    case TUE: out << "TUE"; break;
    case WED: out << "WED"; break;
    case THU: out << "THU"; break;
    case FRI: out << "FRI"; break;
    case SAT: out << "SAT"; break;
    }

    return out;
}

template <class T>
T display(T data[], int size) {
    for (int i = 0; i<size; ++i)
	cout <<"Value (" << i << ") = " << data[i] << endl;
    return 0;
}

int main() {

    days d = SAT, e;

    e = ++d;

    cout << "Days of Week" << endl;
    cout << d << '\t' << e << endl;

    return 0;
    
}
