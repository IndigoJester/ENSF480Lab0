#include <iostream>
#include <cmath>

using namespace std;

Rectangle::Rectangle (int x, int y, int z, int a, char* name): Square(x, y, z, name) {
    side_b = a;
}

int Rectangle::area() const {
    return side_a * side_b;
}

int Rectangle::perimeter() const {
    return side_a * 2 + side_b * 2;
}

void Rectangle::set_side_b(int b) {
    side_b = b;
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getX() << endl;
    cout << "Y-coordinate: " << origin.getY() << endl;
    cout << "Side a: " << side_a << endl;
    cout << "Side b: " << side_b << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}

Rectangle& Rectangle::operator=(const Rectangle& rhs) {
    if(this==&rhs)
        return *this;
    delete [] shapeName;
    shapeName = new char[strlen(rhs.shapeName)+1];
    if(shapeName == NULL){
        cerr << "Memory not available...";
        exit(1);
    }
    strcpy(shapeName, rhs.shapeName);
    origin = rhs.origin;
    side_a = rhs.side_a;
    side_b = rhs.side_b;
    return *this;
}
