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

point operator+ (point& p1, point& p2) {
  point sum = {p1.x + p2.x, p1.y + p2.y};
  return sum;
}

point operator* (double m1, point& p1) {
  point mult = {m1 * p1.x, m1 * p1.y};
  return mult;
}

int main() {
  double m = 0.5;
  point a = {3.2, 2.4}, b = {2.9, 4.1}, c;

  cout << "a = " << a << " b = " << b << endl;
  cout << "sum = " << a + b << endl;
  cout << "mult = " << m * a << endl;
  cout << "mult = " << 0.2 * a << endl;
  return 0;
}

