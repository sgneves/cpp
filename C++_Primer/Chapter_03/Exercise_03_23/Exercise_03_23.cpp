#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    for (int i = 1; i <= 10; i++)
        v.push_back(i);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        *i *= 2;
        std::cout << " " << *i;
    }
    std::cout << std::endl;

    return 0;
}
