#ifndef EASYF IND_TPP
#define EASYFIND_TPP

#include<iostream>
#include<vector>

template <typename T>

int easyfind(T type, int k)
{
    std::vector<int>::iterator it = type.begin();

    for (; it != type.end() ; it++)
    {
        if (*it == k)
            return k;
    }
    throw std::runtime_error("Error: no occurrence is found");
    return 0;
}

#endif