// Ex 7.31 - Class declarations and pointers to classes.
int main()
{
    class X {
        class Y;
        Y* Y1;
    };

    class Y {
        X X1;
    };

    return 0;
}
