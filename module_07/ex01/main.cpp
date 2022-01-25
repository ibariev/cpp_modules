#include "iter.hpp"

int	main(void)
{
	int		arr1[5] = {8, 14, 96, -34, 0};
	double	arr2[] = {0.5, 3.14, 2.718, 2.512, -39.0, 100.16, -25.4};

	iter(arr1, 5, print_double);
	std::cout << std::endl;
	iter(arr2, 7, print_double);
}

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n(42) { return; }
// 		int	get( void ) const { return this->_n; }
// 	private:
// 		int	_n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template <typename T>
// void print( T const & x) { std::cout << x << std::endl; return; }

// int main()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];

// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );

// 	return 0;
// }