#include "Span.hpp"

Span::Span():Ssize(0){}

Span::Span(unsigned int N):Ssize(N)
{}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator=(const Span& src)
{
    if (this != &src)
    {
        this->v = src.v;
        this->Ssize = src.Ssize;
    }
    return *this;
}

Span::~Span(){}

void Span::addNumber(int element)
{
    if (v.size() < Ssize)
        v.push_back(element);
    else
        throw std::runtime_error("Span is full. Cannot add more elements.");
}

int Span::shortestSpan()
{
    if (v.size() < 2)
        throw std::runtime_error("Not enough numbers to calculate span");
    std::sort(v.begin(), v.end());
    int minSpan = INT_MAX;
    std::vector<int>::iterator it = v.begin();
    for(; it != v.end(); it++)
    {
        int span = *(it + 1) - *it;
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (v.size() < 2)
        throw std::runtime_error("Not enough numbers to calculate span");
    std::sort(v.begin(), v.end());
    return v.back() - v.front();
}

void Span::addRange(std::vector<int>::iterator &begin, std::vector<int>::iterator &end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++)
        addNumber(*it);
}
