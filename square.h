#ifndef SQUARE_M
#define SQUARE_M

class Square : public Shape
{
public:
    // ADD SIDE_A data member
    int side_a;
public:
    Square(int a, int b, int c, char* squareName);
    double area() const;
    double perimeter() const;
    Point getOrigin() const;
    void setOrigin(Point a);
    void setSideA(int a);
    int getSideA() const;
    void setSquareName(char* name);
    char* getSquareName() const;
    void display() const;
}
