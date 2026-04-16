#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>

#include "point.hpp"

class Shape
{
    virtual double getArea() = 0; 
    virtual Point getCenter() = 0;
    virtual void move(double, double) = 0;
    virtual void scale(double) = 0;
    virtual std::string getName() = 0;
};

#endif