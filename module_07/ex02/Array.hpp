#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <class T>
class Array
{
	T *				a;
	unsigned int	len;
	public:
		Array() { a = NULL; len = 0; }
		Array(unsigned int n) { a = new T[n]; len = n; }
		Array(const Array<T> & other) { a = NULL; *this = other;}
		~Array() { if ( a ) delete [] a; a = NULL; len = 0; }

		const Array<T> & operator=(const Array<T> & other) 
		{ 
			if ( a ) 
				delete [] a; 
			a = new T[other.size()];
			len = other.size();
			for (unsigned int i = 0; i < other.size(); i++) 
				a[i] = other.a[i]; 
			return (*this);
		}

		T & operator[](unsigned int idx) const
		{
			if ( idx >= len)
				throw std::exception();
			return ( a[idx] );
		}

		unsigned int size() const { return (len); }
};

#endif