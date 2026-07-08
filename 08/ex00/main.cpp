#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 30);
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        easyfind(vec, 100);
        std::cout << "100 found." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Vector: " << e.what() << std::endl;
    }

    std::list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);

    try
    {
        std::list<int>::iterator it = easyfind(lst, 4);
        std::cout << "Found in list: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        easyfind(lst, 42);
        std::cout << "42 found." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "List: " << e.what() << std::endl;
    }

    return 0;
}