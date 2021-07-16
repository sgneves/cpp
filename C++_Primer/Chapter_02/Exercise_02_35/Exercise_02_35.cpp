// Ex 2.35 - Compound yypes, const and auto.
int main()
{
    const int i = 42; // const int
    auto j = i; // int
    const auto &k = i; // const int &
    auto *p = &i; // const int *
    const auto j2 = i, &k2 = i; // const int and const int &

    return 0;
}
