// Ex 3.43 - Using a range for, subscripts or pointers with multidimensional arrays.
#include <iostream>
#include <iterator>
using std::end;
using std::endl;
using std::cout;

int main()
{
    int ia[3][4] = { // three elements; each element is an array of size 4
        {0, 1, 2, 3}, // initializers for the row indexed by 0
        {4, 5, 6, 7}, // initializers for the row indexed by 1
        {8, 9, 10, 11} // initializers for the row indexed by 2
    };

    // Using range for
    for (int (&i)[4] : ia)
    {
        for (int j : i)
            cout << j << " ";
        cout << endl;
    }

    // Using subscripts
    cout << endl;
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    // Using pointers
    cout << endl;
    for (int (*i)[4] = ia; i < end(ia); ++i)
    {
        for (int *j = *i; j < end(*i); ++j)
            cout << *j << " ";
        cout << endl;
    }

    return 0;
}
