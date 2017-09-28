#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape(Point o, char* name)
{
  this.setOrigin(o);
  this.setName(name);
}

Point Shape::getOrigin()
{
  return origin;
}

void Shape::setOrigin(Point s)
{
  origin = s;
}

char* Shape::getName()
{
  return shapeName;
}

void Shape::setName(char* n)
{
  shapeName = n;
}

void Shape::display()
{
  cout << "Shape Name: " << shapeName << endl;
  cout << "X-coordinate: " << xcoord << endl;
  cout << "Y-coordinate: " << ycoord << endl;
}
