#include <iostream>
#include <vector>
using iter = std::vector<int>::const_iterator;

void print(iter i, iter end) {
    if (i != end) {
        std::cout << *i << " ";
        print(++i, end);
    }
    return;
}

int main()
{
    std::vector<int> v = {1, 2, 3};
    print(v.begin(), v.end());

    return 0;
}
