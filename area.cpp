//
// Created by Khoa on 2/7/16.
//
#include <Point.h>
#include "area.h"
#include <cmath>

// Function to calculate the area of a 3D triangle
double const computeArea(Point::Point() &a, Point &b, Point &c){

    // Calculate half perimeter s = (a+b+c)/2
    double s = (a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a))/2.0;

    // Calculate area
    return sqrt (s* (s - a.distanceTo(b)) * (s - b.distanceTo(c)) * (s -c.distanceTo(a)));
}

