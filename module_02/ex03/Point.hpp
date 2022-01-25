#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	const Fixed	x;
	const Fixed y;
	public:
		Point();
		~Point();
		Point(const Point &a);
		Point(const float value_1, const float value_2);
		const Point &operator=(const Point &a);
		const Fixed getX() const;
		const Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif