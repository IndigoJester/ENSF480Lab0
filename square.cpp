#include <iostream>
#include <cmath>
#include "shape.cpp"
#include "square.h"

using namespace std;

Square::Square(int x, int y, int sidea, char* squareName)
{
    Point a = Point(x, y);
    Shape(a, squareName);
    this->side_a = sidea;
}

double Square::area() const
{
    double a = pow(this->side_a, 2);
    return a;
}

double Square::perimeter() const
{
    double p = this->side_a * 4;
    return p;
}

Point Square::getOrigin() const
{
    Point o = Shape::getOrigin();
    return o;
}

void Square::setOrigin(Point a)
{
    Shape::setOrigin(a);
}

void Square::setSideA(int a)
{
    this->side_a = a;
}

int Square::getSideA() const
{
    return side_a;
}

char* Square::getSquareName() const
{
    return Shape::getName();
}

void setSquareName(char* name)
{
    Shape::setName(name);
}

void Square::display() const
{
    cout << "Square Name: " << this->getSquareName() << endl;
    cout << "X-coordinate: " << Shape::getX() << endl;
    cout << "Y-coordinate: " << Shape::getY() << endl;
    cout << "Side A: " << this->side_a << endl;
    cout << "Area: " << this->area() << endl;
    cout << "Perimeter: " << this->perimeter() << endl;
}
