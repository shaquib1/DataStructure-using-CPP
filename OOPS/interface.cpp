

#include<iostream>
using namespace std;
// parent class
class Shape 
{
  public:
  // pure virtual function providing interface framework.
  virtual int getArea() = 0;
  void setWidth(int w) {
    width = w;
  }
  void setHeight(int h) {
   height = h;
  }
  protected:
  int width;
  int height;
};
// child classes for implementation
class Rectangle: public Shape {
  public:
  int getArea() { 
   return (width * height); 
  }
};
// child classes for implementation
class Triangle: public Shape {
  public:
  int getArea() { 
    return (width * height)/2; 
  }
};
int main()
{
  Rectangle Rect;
  Triangle Tri;
  Rect.setWidth();
  Rect.setHeight(4);
  // display the area of the object.
  cout << "Total Rectangle area: " << Rect.getArea() << endl;

  Tri.setWidth(8);
  Tri.setHeight(4);

  // Print the area of the object.
  cout << "Total Triangle area: " << Tri.getArea() << endl;
  return 0;
}