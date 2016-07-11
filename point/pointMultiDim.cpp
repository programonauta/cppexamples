//
// An example how to deal with multidimensional point using class
//
//

#include <iostream>
using namespace std;

class point {
public:

  // coordinates of point
  // Must be a pointer to pointer, because the dimension is dynamic
  //
  double* coord;
  int dimension;

  point(int dimen = 2) {

    // Could not accept dimension less then 1, don't return an error, but set default
    if (dimen < 1)
      dimen= 2;

    dimension = dimen;

    coord = new double[dimension];
    for (int i = 0; i < dimension; ++i)
      coord[i] = 0.0; 


  }; // Constructor

};

point operator+ (point& p1, point& p2) {

  int majorDim = (p1.dimension > p2.dimension ? p1.dimension : p2.dimension);
  point sum(majorDim); // Create a variable coordinates 0s with greater dimension

  for (int i=0; i < majorDim; i++) {
    if ((i+1) <= p1.dimension)
      sum.coord[i] += p1.coord[i];
    if ((i+1) <= p2.dimension)
      sum.coord[i] += p2.coord[i];
  }
  return sum;
}

point operator* (double m1, point& p1) {

  point prod(p1.dimension); // Create a variable coordinates 0s 

  for (int i=0; i < p1.dimension; i++) 
      prod.coord[i] = m1 * p1.coord[i];
  return prod;
}

ostream& operator<< (ostream&out, const point& p) {
    out << "(";
    for (int i = 0; i < p.dimension - 1; ++i)
        out <<  p.coord[i] << ", ";

    out << p.coord[p.dimension - 1] << ")";
    return out;
}


int main() {

    point a(5), b(6);

    for (int i = 0; i < 5; ++i) {
      a.coord[i] = 3.5 + i;
      b.coord[i] = 8.5 + (double)i / 10;
    }

    b.coord[5] = 12.34;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl; 
    cout << "sum = " << a + b << endl;

    a = 0.5 * a;
    b = 0.5 * b;
    cout << "Half a,b = " << a << ", " << b << endl;
    return 0;
}

