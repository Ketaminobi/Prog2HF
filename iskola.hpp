#ifndef ISKOLA_HPP
#define ISKOLA_HPP
#include <iostream>
#include "datum.h"

class Diak{
public:
    std::string d_nev;
    Datum szul;
    std::string d_haz;
    int jegyek[13];
    double atlag;
    bool vegzett;
    int eves;
    int pontok;

    /// @param - parameter nelkuli konstruktor
    Diak();

    /// Konstuktor ami beallitja az attributumokat
    /// @param nev - Diak neve
    /// @param szul - Diak szuletesi datuma
    /// @param haz - Diak melyik hazhoz tartozik
    /// @param atlag - Diak tanulmanyi atlaga
    /// @param vegzett - Diak vegzett-e
    /// @param eves - Diak hanyad eves
    /// @param pontok - Diak altal gyujtott pontok szama
    Diak(std::string nev, Datum szul, std::string haz, double atlag, bool vegzett, int eves, int pontok):d_nev(nev),
    szul(szul), d_haz(haz), atlag(atlag), vegzett(vegzett), eves(eves), pontok(pontok) {}

    const std::string getNev() const {return d_nev;};

    Datum getSzul() const {return szul;};


};

class Haz{
public:
    std::string h_nev;
    size_t db;
    static const size_t maxdb = 500;
    Diak diakok[maxdb];
    int pontok;

    /// @param - parameter nelkuli konstruktor
    Haz();

    std::string getNev() const {return h_nev;};
};

class Iskola{
public:
    std::string i_nev;
    Haz hazak[4];

    /// @param - parameter nelkuli konstruktor
    Iskola();
};




#endif
