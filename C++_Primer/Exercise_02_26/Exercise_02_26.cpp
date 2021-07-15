int main()
{
    const int buf; // Illegal. buf requires an initializer
    int cnt = 0;
    const int sz = cnt;
    ++cnt;
    ++sz; // sz is a const object

    return 0;
}
