// Khoa Hoang

#include "Point.h"
#include <cmath>

// Default constructor
Point::Point() {
    __x = 0.0;
    __y = 0.0;
    __z = 0.0;
}

// Constructor
Point::Point(double x, double y, double z) {
__x = x;
__y = y;
__z = z;
}


// Destructor
Point::~Point() { }

// Mutator method
void Point::setX(double newX) {
    __x = newX;
}

void Point::setY(double newY) {
    __y = newY;
}

void Point::setX(double newZ) {
    __z = newZ;
}

// Accessor
double Point::getX() const {
    return __x;
}

double Point::getY() const {
    return __y;
}

double Point::getZ() const {
    return __z;
}

// distanceTo function

double Point::distanceTo(Point &another_Point) {
    return sqrt ( sqr(__x - another_Point.__x) + sqr(__y - another_Point.__y) + sqr(__z - another_Point.__z))
}