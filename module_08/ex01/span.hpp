#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>

class Span
{
	std::vector<int>	vct;
	unsigned int		N;
	public:
		Span();
		Span(const Span & other);
		Span(unsigned int _N);
		~Span();

		const Span & operator=(const Span & other);
		void addNumber(int nbr);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

	class impossible_to_add : public std::exception
	{
		public:
			const char * what() const throw();
	};

	class no_span : public std::exception
	{
		public:
			const char * what() const throw();
	};
};

#endif