// Ex 3.26 - Compares two arrays for equality and two vectors for equality.
#include <iostream>
#include <iterator>
#include <vector>
using std::end;

int main()
{
    bool equal;
    int v1[] = {1, 2, 3};
    int v2[] = {1, 2, 3, 4};
    std::vector<int> v3 = {1, 2, 3, 4};
    std::vector<int> v4 = {1, 2, 3, 4};

    if ((end(v1) - v1) == end(v2) - v2)
    {
        equal = true;
        for (int* i = v1, *j = v2; i < end(v1); ++i, ++j)
            if (*i != *j)
                equal = false;
    }
    else
        equal = false;

    std::cout << "v1 and v2: " << equal << std::endl;
    std::cout << "v3 and v4: " << (v3 == v4) << std::endl;

    return 0;
}
