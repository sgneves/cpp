#include <string>
#include <vector>

int main()
{
    std::vector<std::string>::iterator iter;

    *iter++; // Legal. Increments iter and dereferences a copy of the previous value of iter
    (*iter)++; // Illegal. *iter is a string, cannot increment value
    *iter.empty(); // Illegal. iter had no member empty
    iter->empty(); // Legal. Checks if *iter is empty
    ++*iter; // Illegal, string have not increment.
    iter++->empty();

    return 0;
}
