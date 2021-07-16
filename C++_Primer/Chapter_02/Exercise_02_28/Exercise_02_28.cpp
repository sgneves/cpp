// Ex 2.28 - const qualifier: Definitions of pointers and references.
int main()
{
    int i, *const cp; // Illegal. cp requires an initializer
    int *p1, *const p2; // Illegal. p2 requires an initializer
    const int ic, &r = ic; // Illegal. ic requires an initializer
    const int *const p3; // Illegal. p3 requires an initializer
    const int* p; // Legal. p is a pointer to const

    return 0;
}
