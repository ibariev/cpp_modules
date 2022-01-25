#include "Point.hpp"

int	main(void)
{
	Point	a(-1.42, -1.21);
	Point	b(1.6, -1.36);
	Point	c(0.05, 1.12);
	Point	point1(0.21, -0.42);  // Inside
	Point	point2(2.4, 4.2);     // Outside
	Point	point3(-1.42, -1.21); // In a vertex
	Point	point4(0.09, -1.285); // On the edge

	std::cout << bsp(a, b, c, point1) << std::endl;
	std::cout << bsp(a, b, c, point2) << std::endl;
	std::cout << bsp(a, b, c, point3) << std::endl;
	std::cout << bsp(a, b, c, point4) << std::endl;
}