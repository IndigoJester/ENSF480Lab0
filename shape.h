#ifndef SHAPE_M
#define SHAPE_M

#include "Point.h"
#include <string.h>

    class Shape {
        // Private Data Members
        protected:
            Point origin;
            char* shapeName;

        // Public Data members
        public:
            Shape(int x, int y, char* name);
            ~Shape() {delete [] shapeName;};
            Shape(const Shape& source);
            Shape& operator=(const Shape& rhs);
            Point getOrigin() const;
            char* getName() const;
            void display() const;
            double distance(Shape& other) const;
            static double distance(Shape& the_shape, Shape& other);
            void move (double dx, double dy);
        };

#include "Shape.cpp"

#endif
