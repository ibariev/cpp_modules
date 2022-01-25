#include "Point.hpp"

Fixed	 vector_product(Point const v1, Point const v2, Point const p)
{
	Fixed	v1_x = v1.getX();
	Fixed	v1_y = v1.getY();
	Fixed	v2_x = v2.getX();
	Fixed	v2_y = v2.getY();
	Fixed	p_x = p.getX();
	Fixed	p_y = p.getY();
	Fixed	res;

	res = (v2_x - v1_x)*(p_y - v1_y) - (v2_y - v1_y)*(p_x - v1_x);
	return (res);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A, B, C;

	A = vector_product(a, b, point); // AB x AP
	B = vector_product(b, c, point); // BC x BP
	C = vector_product(c, a, point); // CA x CP

	if (A > 0 && B > 0 && C > 0)
		return (true);
	else if (A < 0 && B < 0 && C < 0)
		return (true);
	else
		return (false);
}