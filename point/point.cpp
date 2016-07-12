//
// Pointer class implementation
//

#include "point.h"
#include <iostream>
using namespace std;

// Constructor
Point::Point(int dimen) {

  // Could not accept dimension less then 1, don't return an error, but set default
  if (dimen < 1)
    dimen= 2;

  dimension = dimen;

  coord.resize(dimen);
  for (int i = 0; i < dimension; ++i)
    coord[i] = 0.0; 

} // Constructor

// Function to calculate distance to other point
double Point::dist(Point other) {
  double sum = 0;
  for (int i = 0; i < dimension; ++i)
    sum += pow(coord[i] - other.coord[i], 2);
  return sqrt(sum);
}


Point operator+ (Point& p1, Point& p2) {

  int majorDim = (p1.dimension > p2.dimension ? p1.dimension : p2.dimension);
  Point sum(majorDim); // Create a variable coordinates 0s with greater dimension

  for (int i=0; i < majorDim; i++) {
    if ((i+1) <= p1.dimension)
      sum.coord[i] += p1.coord[i];
    if ((i+1) <= p2.dimension)
      sum.coord[i] += p2.coord[i];
  }
  return sum;
}

Point operator* (double m1, Point& p1) {

  Point prod(p1.dimension); // Create a variable coordinates 0s 

  for (int i=0; i < p1.dimension; i++) 
      prod.coord[i] = m1 * p1.coord[i];
  return prod;
}

ostream& operator<< (ostream&out, Point& p) {
    out << "(";
    for (int i = 0; i < p.dimension - 1; ++i)
        out <<  p.coord[i] << ", ";

    out << p.coord[p.dimension - 1] << ")";
    return out;
}

