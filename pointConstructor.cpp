//
// Exemple of how to initialize variables with constructor
//
// Week 2, lecture 2.10
//

#include <iostream>
using namespace std;

class point {
public:
    point(double x=0.0, double y=0.0):x(x),y(y) {}; // Constructor

//private:
    double x, y;
    
};

/*
point operator+ (point& p1, point& p2) {
    point sum = {p1.x + p2.x, p1.y + p2.y};
    return sum;
}
*/
ostream& operator<< (ostream&out, const point& p) {
    out << "( " << p.x << ", " << p.y << " )";
    return out;
}


int main() {
    //point a = {3.5, 2.5}, b = {2.5, 4.5}, c;

    point a(5.1, 2.0), b;
    cout << "a = " << a << " b = " << b << endl;
//    cout << "sum = " << a + b << endl;
    return 0;
}

