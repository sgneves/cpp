int main()
{
    int i = -1, &r = 0; // Illegal. Literal assigned to reference to non const
    const int i2 = i, &r = i;
    int *const p2 = &i2; // Illegal. Address of const object assigned to pointer to non const
    const int i = -1, &r = 0;
    const int *const p3 = &i2;
    const int *p1 = &i2;
    const int &const r2; // Illegal. A reference is not an object; it cannot have top-level const

    return 0;
}
