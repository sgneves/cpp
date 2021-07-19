// Ex 3.14 - Reads a sequence of int from cin and stores them in a vector.
#include <iostream>
#include <vector>

int main()
{
    int i;
    std::vector<int> v;

    std::cout << "Enter sequence of ints:" << std::endl;

    while (std::cin >> i)
        v.push_back(i);

    return 0;
}
