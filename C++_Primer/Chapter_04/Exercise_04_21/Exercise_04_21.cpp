// Ex 4.21 - Doubles the elements in a vector<int> that have odd value.
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};

    for (auto &i : v)
    {
        i = ((i % 2) ? 2 * i : i);
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
