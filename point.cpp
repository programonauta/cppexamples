//
// Exemple of how to use struct in C++
//
// Week 2, lecture 2.10
//

#include <iostream>
using namespace std;

class point {
public:
    double x, y;
};

point operator+ (point& p1, point& p2) {
    point sum = {p1.x + p2.x, p1.y + p2.y};
    return sum;
}

/*

  Usual signature for overloading ostream& operator<<(stream& out, 
       const my_type& v) 
  both arguments are passed by reference
  my_type is passed with a const modifier so as not 
  be modified.

 */
ostream& operator<< (ostream&out, const point& p) {
    out << "( " << p.x << ", " << p.y << " )";
    return out;
}

int main() {
    point a = {3.5, 2.5}, b = {2.5, 4.5}, c;

    cout << "a = " << a << " b = " << b << endl;
    cout << "sum = " << a + b << endl;
    return 0;
}

