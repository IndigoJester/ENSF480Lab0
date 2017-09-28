#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape(Point o, char* name)   // MY CONSTRUCTOR, THE OTHER IS MOUSSAVI'S
{
  this.setOrigin(o);
  this.setName(name);
}

Shape::Shape(const Shape& source):origin(source.origin), shapeName(new char[strlen(source.shapeName)+1])
{
  if(shapeName == NULL){
    cerr << "Memory not available...";
    exit(1);
  }
  strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs)
{
  if(this==&rhs){
    return *this;
  }
  delete [] shapeName;
  shapeName = new char[strlen(rhs.shapeName)+1];
  if(shapeName == NULL){
    cerr << "Memory not available...";
    exit(1);
  }
  strcpy(shapeName, rhs.shapeName);
  origin = rhs.origin;
  return *this;
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

double Shape::distance(Shape& other)
{
  double d = origin.distance(other);
  return d;
}

static double Shape::distance(Shape& the_shape, Shape& other)
{
  double d = origin.distance(the_shape, other);
  return d;
}

void Shape::move(double dx, double dy)
{
  origin.setX(dx);
  origin.setY(dy);
}
