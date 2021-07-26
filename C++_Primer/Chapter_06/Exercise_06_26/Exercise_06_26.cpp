// Ex 6.26 - Print the values of the arguments passed to the main.
#include <iostream>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
        std::cout << "argv[" << i << "] = " << argv[i] << std::endl;

    return 0;
}
