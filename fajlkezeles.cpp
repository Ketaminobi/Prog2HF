#include "fajlkezeles.h"

void Diak_init(){
    std::ifstream fajl("Diakok.txt");
    if (!fajl.is_open())
        throw "Nem sikerult megnyitni.";
    fajl.close();
}
