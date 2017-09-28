#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

Point::Point(double x, double y)
{
    xcoord = x;
    ycoord = y;
}

double Point::getX()
{
    return xcoord;
}

double Point::getY()
{
    return ycoord;
}

void Point::setX(double newX)
{
    xcoord = newX;
}

void Point::setY(double newY)
{
    ycoord = newY;
}

void Point::display()
{
    cout << "X-coordinate: " << xcoord << endl;
    cout << "Y-coordinate: " << ycoord << endl;
}

int Point::counter()
{
    return 0;
}

static double Point::distance(Point& A, Point& B)
{
    double a, b;
    double dist;
    a = abs(A.getX() - B.getX());
    b = abs(A.getY() - B.getY());
    dist = sqrt(pow(a, 2) + pow(b, 2));
    return dist;
}

double Point::distance(Point& B)
{
    double a, b;
    double dist;
    a = abs(this.getX() - B.getX());
    b = abs(this.getY() - B.getY());
    dist = sqrt(pow(a, 2) + pow(b, 2));
    return dist;
}
