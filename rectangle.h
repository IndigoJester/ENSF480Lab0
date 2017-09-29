#ifndef RECTANGLE_M
#define RECTANGLE_M

class Rectangle : public Shape
{
public:
    // ADD SIDE_A data member
    int side_a, side_b;
public:
    Square(int x, int y, int sidea, int sideb, char* rectangleName);
    double area() const;
    double perimeter() const;
    Point getOrigin() const;
    void setOrigin(Point a);
    void setSideA(int a);
    int getSideA() const;
    void setSideB(int b);
    int getSideB() const;
    void setRectangleName(char* name);
    char* getRectangleName() const;
    void display() const;
};

#endif
