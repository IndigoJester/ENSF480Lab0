#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

Circle::Circle(int x, int y, int radii, char* circleName)
{
    Point orig (x, y);
    Shape(orig, circleName);
    this->radius = radii;
}

double Circle::area() const
{
    return (M_PI * (pow(radius, 2)));
}

double Circle::perimeter() const
{
    return (2 * M_PI * radius);
}

Point Circle::getOrigin()
{
    return Shape::getOrigin();
}

void Circle::setOrigin(Point a)
{
    Shape::setOrigin(a);
}

void Circle::setRadius(int a)
{
    this->radius = a;
}

int Circle::getRadius()
{
    return this->radius;
}

void setCircleName(char* name)
{
    Shape::setName(name);
}

char* Circle::getCircleName()
{
    return Shape::getName();
}

void Circle::display()
{
    cout << "Circle Name: " << this->getCircleName() << endl;
    cout << "X-coordinate: " << Shape::getX() << endl;
    cout << "Y-coordinate: " << Shape::getY() << endl;
    cout << "Radius: " << this->radius << endl;
    cout << "Area: " << this->area() << endl;
    cout << "Perimeter: " << this->perimeter() << endl;
}
