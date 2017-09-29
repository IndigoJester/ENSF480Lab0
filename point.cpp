#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

static int currentID = 1001;
static int counter = 0;

Point::Point (int x, int y) {
    xcoord = x;
    ycoord = y;
    ID = currentID;
    counter++;
}

int Point::getX () const {
    return xcoord;
}

int Point::getY () const {
    return ycoord;
}

int Point::getID () const {
    return ID;
}

void Point::setX (int newX) {
    xcoord = newX;
}

void Point::setY (int newY) {
    ycoord = newY;
}

void Point::display () const {
    cout << "X-coordinate: " << xcoord << endl;
    cout << "Y-coordinate: " << ycoord << endl;
}

int Point::counter () const {
    return counter;
}

double Point::distance (Point A, Point B) {
    int a, b;
    double dist;
    a = abs(A.getX() - B.getX());
    b = abs(A.getY() - B.getY());
    dist = sqrt(pow(a, 2) + pow(b, 2));
    return dist;
}

double Point::distance (Point B) const {
    int a, b;
    double dist;
    a = abs(this->getX() - B.getX());
    b = abs(this->getY() - B.getY());
    dist = sqrt(pow(a, 2) + pow(b, 2));
    return dist;
}
