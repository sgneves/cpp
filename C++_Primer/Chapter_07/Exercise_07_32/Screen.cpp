#include <iostream>
#include "Screen.h"

void Screen::display_aux(std::ostream &os) const {
    for (pos i = 0; i < contents.size(); ++i) {
        os << contents[i];
        if (i > 0 && (i + 1) % width == 0)
            os << std::endl;
    }
}
