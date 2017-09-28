#ifndef POINT_M
#define POINT_M

class Point
{
private:
    double xcoord, ycoord, ID;   //Private data members
    public: // Public Data members
    Point(int x, int y);
    double getX() const;
    double getY() const;
    void setX(double newX);
    void setY(double newY);
    void display() const;
    int counter() const;
    double distance(Point& A, Point& B) const;
    double distance(Point& B) const;
};

#endif
