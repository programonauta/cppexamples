//
// Header file of Point Class 
//

// Define POINT_H to inform compiler if Header is already included
#ifndef POINT_H
#define POINT_H

#include <math.h>
#include <vector>
using namespace std;

class Point {
  public:

    // coordinates of point
    vector<double> coord; 

    // Constructor
    Point(int dimen = 2);

    // Function to calculate distance to other point
    double dist(Point other); 

};

Point operator+ (Point& p1, Point& p2);

Point operator* (double m1, Point& p1);

ostream& operator<< (ostream&out, Point& p);

#endif
