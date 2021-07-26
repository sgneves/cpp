// Ex 6.38 - Function that returns a reference to an array.
#include <iostream>

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

// Returns a reference to to an array of five int elements
int (&arrPtr(int i))[5]
{
    return (i % 2) ? odd : even; // returns a pointer to the array
}

int main()
{
    auto& r1 = arrPtr(3);
    auto& r2 = arrPtr(4);

    std::cout << r1[0] << std::endl;
    std::cout << r2[0] << std::endl;

    return 0;
}
