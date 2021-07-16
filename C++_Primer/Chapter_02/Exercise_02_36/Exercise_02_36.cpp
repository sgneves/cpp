// Ex 2.36 - decltype type specifier.
int main()
{
    int a = 3, b = 4; // a and b are int
    decltype(a) c = a; // c is an int
    decltype((b)) d = a; // d is an int &

    ++c;
    ++d;

    // All variables are equal to 4
    return 0;
}
