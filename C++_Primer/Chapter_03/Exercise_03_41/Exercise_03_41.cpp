// Ex 3.41 - Initializes a vector from an array of int.
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    int v1[] = {1, 2, 3, 4};
    std::vector<int> v2(v1 + 1, std::end(v1) - 1);

    for (int i : v2)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
