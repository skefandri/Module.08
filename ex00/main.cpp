#include "easyfind.hpp"

int main()
{
    std::vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(23);
    try{
        int k = easyfind(v, 3);
        std::cout << k << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<< e.what() << std::endl;
    }
}