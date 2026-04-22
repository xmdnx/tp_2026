#include "compositeShape.hpp"

double CompositeShape::getArea() const
{
    int sumArea = 0;
    for (auto &i : shapeContainer_)
    {
        sumArea += i->getArea();
    }
    return sumArea;
} 

Point CompositeShape::getCenter() const
{
    
}

void CompositeShape::move(double dx, double dy)
{
    for (auto &i : shapeContainer_)
    {
        i->move(dx, dy);
    }
}

void CompositeShape::scale(double k)
{
    double dx, dy;
    Point center_composite = getCenter();
    Point center_i;
    for (auto &i : shapeContainer_)
    {
        center_i = i->getCenter();
        dx = (center_i.x - center_composite.x) * k;
        dy = (center_i.y - center_composite.y) * k;
        i->move(dx, dy);
        i->scale(k);
    }
}

std::string CompositeShape::getName() const
{
    return "COMPOSITE";
}