// Ex 7.43 - Using a class that does not have a default constructor.
#include <iostream>

int main()
{
    struct NoDefault
    {
        NoDefault(int i) : var_nd(2 * i) {}
        int var_nd;
    };

    struct C
    {
        C() : var_c(1) {}
        NoDefault var_c;
    };

    C var;
    std::cout << var.var_c.var_nd << std::endl;

    return 0;
}
