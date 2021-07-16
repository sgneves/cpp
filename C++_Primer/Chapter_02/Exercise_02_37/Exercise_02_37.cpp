// Ex 2.37 - decltype type specifier.
int main()
{
    int a = 3, b = 4; // a and b are int
    decltype(a) c = a; // c is an int
    decltype(a = b) d = a; // d is an int &

    return 0;
}
