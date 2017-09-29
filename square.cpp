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

double Square::area()
{
    double a = pow(this->side_a, 2);
    return a;
}

double Square::perimeter()
{
    double p = this->side_a * 4;
    return p;
}

Point Square::getOrigin()
{
    Point o = super.getOrigin();
    return o;
}

void Square::setOrigin(Point a)
{
    super.setOrigin(a);
}

void Square::setSideA(int a)
{
    this->side_a = a;
}

int Square::getSideA()
{
    return side_a;
}

char* Square::getSquareName()
{
    return super.getName();
}

void setSquareName(char* name)
{
    super.setName(name);
}

void Square::display()
{
    cout << "Square Name: " << this->getSquareName() << endl;
    cout << "X-coordinate: " << super.getX() << endl;
    cout << "Y-coordinate: " << super.getY() << endl;
    cout << "Side A: " << this->side_a << endl;
    cout << "Area: " << this->area() << endl;
    cout << "Perimeter: " << this->perimeter() << endl;
}
