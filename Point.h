// A 3-dimensional point class!
// Coordinates are double-precision floating point.
// Khoa Hoang
#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double __x, __y, __z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double __x, double __y, double __z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // Distance to function
    double distanceTo(Point &another_Point);

};

#endif // __POINT_H
