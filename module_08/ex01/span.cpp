#include "span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(const Span & other)
{
	*this = other;
}

Span::Span(unsigned int _N)
{
	this->N = _N;
}

Span::~Span()
{
	return ;
}

const Span & Span::operator=(const Span & other)
{
	this->vct = other.vct;
	this->N = other.N;
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (this->vct.size() == N)
		throw impossible_to_add();
	this->vct.push_back(nbr);
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if ( std::distance(start, end) + vct.size() > this->N )
		throw impossible_to_add();
	
	vct.insert( vct.end(), start, end );
}

unsigned int Span::shortestSpan() const
{
	std::vector<int>			temp;
	std::vector<int>::iterator	it;
	int							min;
	
	if (this->vct.size() < 2)
		throw no_span();
	
	temp = vct;
	std::sort( temp.begin(), temp.end() );
	min = *(temp.begin() + 1) - *temp.begin();
	for ( it = temp.begin(); (it + 1) != temp.end(); it++ )
	{
		if ( *(it + 1) - *it < min )
			min = *(it + 1) - *it;
	}
	return (min);
}

unsigned int Span::longestSpan() const
{
	int	max, min;
	
	if (this->vct.size() < 2)
		throw no_span();

	max = *std::max_element( vct.begin(), vct.end() );
	min = *std::min_element( vct.begin(), vct.end() );
	return (max - min);
}

const char * Span::impossible_to_add::what() const throw()
{
	return ("Impossible to add a number, container is full");
}

const char * Span::no_span::what() const throw()
{
	return ("Impossible to find span, not enough numbers");
}