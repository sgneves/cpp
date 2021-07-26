// Ex 6.25 - Concatenates two command-line arguments and prints the result.
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cout << "Usage: Exercise_06_25 s1 s2" << std::endl;
        return -1;
    }

    std::string s1 = argv[1], s2 = argv[2];

    std::cout << s1 + s2 << std::endl;

    return 0;
}
