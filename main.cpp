#include <iostream>
#include <string>
#include "iskola.hpp"
#include "fajlkezeles.h"
#include "menu.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Hiba{
public:
    /// @param - Hibak jelzese
    Hiba(const string&) {}
};


int main() {
    Iskola_init();
    Diak_init();
    //menu_belep();
    return 0;
}
