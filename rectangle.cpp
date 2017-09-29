#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(int x, int y, int sidea, int sideb, char* rectangleName)
{
    Point a = Point(x, y);
    Shape(a, rectangleName);
    this->side_a = sidea;
    this->side_b = sideb;
}

double Rectangle::area()
{
    double a = side_a * side_b;
    return a;
}

double Rectangle::perimeter()
{
    double p = (2 * side_a) + (2 * side_b);
    return p;
}

Point Rectangle::getOrigin()
{
    return Shape::getOrigin();
}

void Rectangle::setOrigin(Point a)
{
    Shape::setOrigin(a);
}

void Rectangle::setSideA(int a)
{
    this->side_a = a;
}

int Rectangle::getSideA()
{
    return this->side_a;
}

void Rectangle::setSideB(int b)
{
    this->side_b = b;
}

int Rectangle::getSideB()
{
    return this->side_b;
}

void Rectangle::setRectangleName(char* name)
{
    Shape::setName(name);        //NOT SURE IF SUPER OR SHAPE OR SHAPE::
}

char* Rectangle::getRectangleName()
{
    return Shape::getName();
}

void Rectangle::display()
{
    cout << "Rectangle Name: " << this->getRectangleName() << endl;
    cout << "X-coordinate: " << Shape::getX() << endl;
    cout << "Y-coordinate: " << Shape::getY() << endl;
    cout << "Side A: " << this->side_a << endl;
    cout << "Side B: " << this->side_b << endl;
    cout << "Area: " << this->area() << endl;
    cout << "Perimeter: " << this->perimeter() << endl;
}
