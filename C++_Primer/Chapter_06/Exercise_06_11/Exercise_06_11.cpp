// Ex 6.11 - Resets a variable.
#include <iostream>

void reset(int &i) {
    i = 0;
}

int main()
{
    int i = 1;

    reset(i);
    std::cout << "i = " << i << std::endl;

    return 0;
}
