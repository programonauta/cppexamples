//
// Main source code using Point class and inheritance
// Will be created a Point class with some others attributes
//
#include "point.h"
#include <iostream> 
using namespace std;

class PointAtt : public Point {
  
  public:

    int attribute;
    
    PointAtt(int a, int d) : Point (d) {
      attribute = a;
    };

};


int main() {

    Point a(5), b(6);

    PointAtt c(4, 2);

    a.coord = {0, 4};
    b.coord = {3, 4};
    c.coord = {1, 1};

    cout << "Distance btw " << a << " and " << b << ": " << a.dist(b) << endl;

    cout << endl << "Point c " << c << " Atribute c: " << c.attribute << endl;
    
    return 0;
}


