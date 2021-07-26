// Ex 6.23 - Prints a scalar and an array.
#include <iostream>
#include <iterator>
using std::endl;
using std::cout;

void print_scalar(const int &i) {
    cout << i << endl;
}

void print_array(const int *pbeg, const int *pend) {
    while (pbeg != pend)
        cout << *pbeg++ << " ";
    cout << endl;
}

int main()
{
    int i = 7;
    int v[] = {1, 2, 3};

    print_scalar(i);
    print_scalar(7);
    print_array(std::begin(v), std::end(v));

    return 0;
}
