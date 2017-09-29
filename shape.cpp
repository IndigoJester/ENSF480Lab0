#include <iostream>
#include <cmath>

using namespace std;

Shape::Shape (int x, int y, char* name): origin(Point(x, y)), shapeName(new char[20]) {
    strcpy(shapeName, name);
}

Shape::Shape (const Shape& source): origin(source.origin), shapeName(new
char[strlen(source.shapeName)+1]) {
    if(shapeName == NULL){
        cerr << "Memory not available...";
        exit(1);
    }
    strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs) {
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
    return *this;
}

Point Shape::getOrigin() const {
    return origin;
}

char* Shape::getName() const {
    return shapeName;
}

void Shape::display() const{
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getX() << endl;
    cout << "Y-coordinate: " << origin.getY() << endl;
}

double Shape::distance(Shape& other) const {
    return origin.distance(other.getOrigin());
}

double Shape::distance(Shape& the_shape, Shape& other) {
    return Point::distance(the_shape.getOrigin(), other.getOrigin());
}

void Shape::move (double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}
