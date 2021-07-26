// Ex 6.7 - Returns the number of times it has been called.
#include <iostream>

int count()
{
    static int ctr = 0;
    return ++ctr;
}

int main()
{
    for (int i = 1; i <= 10; ++i)
        std::cout << count() << " ";
    std::cout << std::endl;

    return 0;
}
