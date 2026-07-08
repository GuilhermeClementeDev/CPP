#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int number);

    template <typename Iterator>
    void addRange(Iterator begin, Iterator end)
    {
        while (begin != end)
        {
            if (_numbers.size() >= _maxSize)
                throw std::runtime_error("Span is full");
            _numbers.push_back(*begin);
            ++begin;
        }
    }

    int shortestSpan() const;
    int longestSpan() const;
};

#endif