int fact(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; ++i)
        fact *= i;

    return fact;
}
