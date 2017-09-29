#ifndef CIRCLE_M
#define CIRCLE_M

class Circle : public Shape
{
public:
    int radius;
public:
    Circle(int x, int y, int radii, char* circleName);
    double area() const;
    double perimeter() const;
    Point getOrigin() const;
    void setOrigin(Point a);
    void setRadius(int a);
    int getRadius() const;
    void setCircleName(char* name);
    char* getCircleName() const;
    void display() const;
};

#endif
