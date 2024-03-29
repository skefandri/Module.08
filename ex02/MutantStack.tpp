#ifndef MUSTANTSTACK_TPP
#define MUSTANTSTACK_TPP
#include "MutantStack.hpp"

template<typename T>

MutantStack<T>::MutantStack():std::stack<T>(){}

template<typename T>

MutantStack<T>::MutantStack(const MutantStack&other):std::stack<T>(other)
{
    this = other;
}

template<typename T>

MutantStack<T>& MutantStack<T>::operator=(const MutantStack& src)
{
    if (*this != &src)
        *(std::stack<T>*)this=*(std::stack<T>*)&src;
    return *this;
}
template<typename T>

MutantStack<T>::~MutantStack(){}

template<typename T>

typename std::deque<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template<typename T>

typename  std::deque<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return this->c.rbegin();
}
template<typename T>

typename std::deque<T>::const_iterator MutantStack<T>::cbegin()
{
    return this->c.cbegin();
}

template<typename T>

typename std::deque<T>::const_reverse_iterator MutantStack<T>::crbegin()
{
    return this->c.crbegin();
}
template<typename T>

typename std::deque<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}
template<typename T>

typename  std::deque<T>::reverse_iterator MutantStack<T>::rend()
{
    return this->c.rend();
}
template<typename T>

typename std::deque<T>::const_iterator MutantStack<T>::cend()
{
    return this->c.cend();
}
template<typename T>

typename std::deque<T>::const_reverse_iterator MutantStack<T>::crend()
{
    return this->c.crend();
}

#endif