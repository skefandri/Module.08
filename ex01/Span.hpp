#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include<exception>
#include <algorithm>
#include <vector>

class Span
{
    private:
        std::vector<int> v;
        unsigned int Ssize;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span&);
        Span& operator=(const Span&);
        ~Span();

        void addNumber(int element);
        int shortestSpan();
        int longestSpan();
        void addRange(std::vector<int>::iterator &begin, std::vector<int>::iterator &end);
};

#endif