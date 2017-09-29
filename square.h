#ifndef SQUARE_M
#define SQUARE_M

#include "Shape.h"
#include <string.h>

    class Square : public Shape {
        // Private Data Members
        protected:
            int side_a;

        // Public Data members
        public:
            Square(int x, int y, int z, char* name);
            int area() const;
            int perimeter() const;
            void set_side_a(int a);
            //get and set
            void display() const;
        };

#include "Square.cpp"

#endif
