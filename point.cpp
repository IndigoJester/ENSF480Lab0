#include <iostream>
#include <cmath>
#include "point.h"

Point::Point(int x, int y)
{
  xcoord = x;
  ycoord = y;
}

int Point::getX()
{
  return xcoord;
}

int Point::getY()
{
  return ycoord;
}

void Point::setX(int newX)
{
  xcoord = newX;
}

void Point::setY(int newY)
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

double Point::distance(Point A, Point B)
{
  int a, b;
  double dist;
  a = abs(A.getX() - B.getX());
  b = abs(A.getY() - B.getY());
  dist = sqrt(pow(a, 2) + pow(b, 2));
  return dist;
}

double Point::distance(Point B)
{
  int a, b;
  double dist;
  a = abs(this.getX() - B.getX());
  b = abs(this.getY() - B.getY());
  dist = sqrt(pow(a, 2) + pow(b, 2));
  return dist;
}
