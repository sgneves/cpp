// Ex 6.27 - Sums a variable number of parameters.
#include <initializer_list>
#include <iostream>

int sum(std::initializer_list<int> v) {
    int sum = 0;
    for (auto &i : v)
        sum += i;
    return sum;
}

int main()
{
    std::cout << "The sum is " << sum({1, 2, 3, 4, 5}) << std::endl;

    return 0;
}
