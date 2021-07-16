// Ex 2.29 - const qualifier: Assignments.
int main()
{
    int i;
    const int ic = 0;
    int *p1, *const p2 = 0;
    const int *const p3 = 0;

    i = ic; // Legal
    p1 = p3; // Illegal. Pointer to const assigned to pointer to non const
    p1 = &ic; // Illegal. Address of const object assigned to pointer to non const
    p3 = &ic; // Illegal. p3 is a const object
    p2 = p1; // Illegal. p2 is a const object
    ic = *p3; // Illegal. ic is a const object

    return 0;
}
