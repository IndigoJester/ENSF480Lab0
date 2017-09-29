#include <iostream>
#include <cmath>

using namespace std;

Square::Square (int x, int y, int z, char* name): Shape(x, y, name) {
    side_a = z;
}

int Square::area() const {
    return side_a * side_a;
}

int Square::perimeter() const {
    return side_a * 4;
}

void Square::set_side_a(int a) {
    side_a = a;
}

void Square::display() const {
    cout << "Square Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getX() << endl;
    cout << "Y-coordinate: " << origin.getY() << endl;
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
