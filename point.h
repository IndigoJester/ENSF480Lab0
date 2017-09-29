#ifndef POINT_M
#define POINT_M

    class Point {
        // Private Data Members
        private:
            int xcoord, ycoord, ID;
            static int currentID;

        // Public Data members
        public:
            Point(int x, int y);
            int getX() const;
            int getY() const;
            int getID() const;
            void setX(int newX);
            void setY(int newY);
            void display() const;
            static int counter();
            static double distance(Point A, Point B);
            double distance(Point B) const;
        };

#include "Point.cpp"

#endif
