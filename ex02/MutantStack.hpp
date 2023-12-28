#ifndef MUSTANTSTACK_HPP
#define MUSTANTSTACK_HPP

#include<iostream>
#include<exception>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
        typedef typename std::deque<T>::iterator iterator;
        typedef typename  std::deque<T>::reverse_iterator reverse_iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;

        MutantStack();
        MutantStack(const MutantStack&);
        MutantStack& operator=(const MutantStack&);
        ~MutantStack();
        typename std::deque<T>::iterator begin();
        reverse_iterator rbegin();
        const_iterator cbegin();
        typename std::deque<T>::const_reverse_iterator  crbegin();

        iterator end();
        reverse_iterator rend();
        const_iterator cend();
        typename std::deque<T>::const_reverse_iterator  crend();
};

#include "MutantStack.tpp"

#endif