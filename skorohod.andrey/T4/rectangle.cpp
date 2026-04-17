#include "rectangle.hpp"

Rectangle::Rectangle(Point& a, Point& b):
Vertex1_(a),
Vertex2_(b)
{}

double Rectangle::getArea() const
{
    return (Vertex2_.x - Vertex1_.x) * (Vertex2_.y - Vertex1_.y);
}

Point Rectangle::getCenter() const
{
    Point res {((Vertex2_.x + Vertex1_.x) / 2.0), ((Vertex2_.y + Vertex1_.y) / 2.0)};
    return res;
}

void Rectangle::move(double dx, double dy)
{
    Vertex1_.x += dx;
    Vertex2_.x += dx;
    Vertex1_.y += dy;
    Vertex2_.y += dy;
}

void Rectangle::scale(double k)
{
    Point center = getCenter();
    double dx = center.x - Vertex1_.x;
    double dy = center.y - Vertex1_.y;

    Vertex1_.x -= dx;
    Vertex2_.x -= dx;
    Vertex1_.y += dy;
    Vertex2_.y += dy;
}

std::string Rectangle::getName() const
{
    return "RECTANGLE";
}
