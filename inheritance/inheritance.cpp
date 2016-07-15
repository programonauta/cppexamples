//
// Inheritance example
// 
// Shape -> Rectangle -> Square
//

#include <iostream>
using namespace std;

// Base class

class Shape {
  protected:

  int width, height;

  public:
  
  Shape(int w, int h) {  
    width = w;
    height = h;
  }

  void setDimensions(int w, int h)  {
    width = w;
    height = h;
  }

};

// New class Rectangle based on Shape class

class Rectangle: public Shape {
  public:

    Rectangle (int w, int h) : Shape(w, h) {};
    
    int getArea() {
      return (width * height);
    }

};

class Triangle: public Shape {
  public:

    Triangle (int w, int h) : Shape(w, h) {};
    
    double getArea() {
      return ((double)width * (double)height/2);
    }

};

class Square: public Rectangle {
  public:

    Square (int side) : Rectangle (side, side) { };

};

int main() {

  Rectangle r(3, 4);
  Triangle t(3, 4);  
  Square s(3);


  cout << "Rectangle area: " << r.getArea() << endl;
  cout << "Triangle area: " << t.getArea() << endl;
  cout << "Square area: " << s.getArea() << endl;

  return 0;
}
