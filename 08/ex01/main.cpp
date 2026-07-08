#include <iostream>
#include <vector>
#include "Span.hpp"

int main()
{
    std::cout << "===== Subject Test =====" << std::endl;

    try
    {
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== Full Span Test =====" << std::endl;

    try
    {
        Span sp(2);

        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== Not Enough Numbers =====" << std::endl;

    try
    {
        Span sp(5);

        sp.addNumber(42);

        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== Range Test =====" << std::endl;

    try
    {
        Span sp(10);

        std::vector<int> values;

        for (int i = 0; i < 10; i++)
            values.push_back(i * 10);

        sp.addRange(values.begin(), values.end());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== 10000 Numbers Test =====" << std::endl;

    try
    {
        Span sp(10000);

        std::vector<int> values;

        for (int i = 0; i < 10000; i++)
            values.push_back(i);

        sp.addRange(values.begin(), values.end());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}