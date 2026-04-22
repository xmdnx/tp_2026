#ifndef COMPOSITE_SHAPE_HPP
#define COMPOSITE_SHAPE_HPP

#include <vector>
#include <string>
#include <memory>
#include "shape.hpp"

class CompositeShape : public Shape
{
    public:
    CompositeShape() = default;
    ~CompositeShape() = default;

    double getArea() const; 
    Point getCenter() const;
    void move(double, double);
    void scale(double);
    std::string getName() const;

    void addShape(std::unique_ptr<Shape>);

    private:
    std::vector<std::unique_ptr<Shape>> shapeContainer_;
};

#endif