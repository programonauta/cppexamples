//
// Main source code using Point class
//
#include "point.h"
#include <iostream> 
using namespace std;


int main() {

    Point a(5), b(6);

    vector<Point> items;

    for (int i = 0; i < 5; ++i) {
      a.coord[i] = 3.5 + i;
      b.coord[i] = 8.5 + (double)i / 10;
    }

    b.coord[5] = 12.34;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl; 
    Point wwd = a + b;
    cout << "sum = " << wwd << endl;

    a = 0.5 * a;
    b = 0.5 * b;
    cout << "Half a, b = " << a << ", " << b << endl;

    Point x(2), y(2);
    x.coord = {0, 4};
    y.coord = {3, 0};

    cout << "Distance btw " << x << " and " << y << ": " << x.dist(y) << endl;

    Point r(3), s(3), t(3);
    r.coord = {2, 2, 2};
    s.coord = {3, 3, 3};

    cout << "Distance btw " << r << " and " << s << ": " << r.dist(s) << endl;

    items.resize(2);

    for (int i = 0; i < 2; ++i)
      for (int j = 0; j < items[i].coord.size(); ++j)
        cout << "Item [" << i << "] [" << j << "] = " << items[i].coord[j] << endl;

    cout << "Initialize with vector" << endl;

    Point w({0.51, 10.45, 20.35});

    cout << "Point w " << w << endl;

    return 0;
}


