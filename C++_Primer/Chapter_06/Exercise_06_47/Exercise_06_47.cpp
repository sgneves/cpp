// Ex 6.47 - Based on Ex 6.33 but uses NDEBUG preprocessor variable.
#include <iostream>
#include <vector>
using iter = std::vector<int>::const_iterator;

void print(iter i, iter end) {
    if (i != end) {
        std::cout << *i << " ";
        print(++i, end);
    }
    #ifndef NDEBUG
        std::cout << __func__ << " in " << __FILE__ << " was called" << std::endl;
    #endif // !NDEBUG

    return;
}

int main()
{
    std::vector<int> v = {1, 2, 3};

    print(v.begin(), v.end());

    return 0;
}
