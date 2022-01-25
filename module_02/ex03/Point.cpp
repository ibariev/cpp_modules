#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	return ;
}

Point::~Point()
{
	return ;
}

Point::Point(const Point &a) : x(a.x), y(a.y)
{
	return ;
}

Point::Point(const float value_1, const float value_2): x(value_1), y(value_2)
{
	return ;
}

const Point &Point::operator=(const Point &a)
{
	(void) a;
	return (*this);
}

const Fixed Point::getX() const
{
	return (this->x);
}

const Fixed Point::getY() const
{
	return (this->y);
}
