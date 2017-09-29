#ifndef RECTANGLE_M
#define RECTANGLE_M

#include "Square.h"
#include <string.h>

    class Rectangle : public Square {
        // Private Data Members
        private:
            int side_b;

        // Public Data members
        public:
            Rectangle(int x, int y, int z, int a, char* name);
            Rectangle& operator=(const Rectangle& rhs);
            int area() const;
            int perimeter() const;
            void set_side_b(int b);
            //get and set
            void display() const;
        };

#include "Rectangle.cpp"

#endif
