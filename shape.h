#ifndef SHAPE_M
#define SHAPE_M

class Shape
{
private:
  Point origin;
  char* shapeName;
public:
  Shape(Point o, char* name);
  ~Shape() {delete [] shapeName};
  Point getOrigin() const;
  char* getName() const;
  void display() const;
  double distance (Shape& other);
  static double distance (Shape& the_shape, Shape& other);
  void move (double dx, double dy);
};

#endif
