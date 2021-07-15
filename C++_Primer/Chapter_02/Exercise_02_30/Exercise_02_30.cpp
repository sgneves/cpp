int main()
{
    int i = 0;
    const int v2 = 0; // v2 has a top-level const
    int v1 = v2; // v1 has no const qualifier
    int *p1 = &v1, &r1 = v1; // p1 and r1 have no const qualifier
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; /* p2 has a low-level const
                                                      p3 has top-level and low-level const
                                                      r2 has a low-level const */

    return 0;
}
