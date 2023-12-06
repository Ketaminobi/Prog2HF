#ifndef NHF_DATUM_H
#define NHF_DATUM_H

class Datum {
    int ev;     ///< év
    int ho;     ///< hónap
    int nap;    ///< nap
public:
    /// Paraméter nélkül hívható konstruktor.
    /// Mai napot állítja be
    Datum();

    /// Adott napot beállító konstruktor
    /// @param ev - év
    /// @param hó - hónap
    /// @param nap - nap
    Datum(int ev, int ho, int nap) :ev(ev), ho(ho), nap(nap) {}

    /// Év lekérdezése
    /// @return ev
    int getEv() const { return ev;}

    /// Hónap lekérdezése
    /// @return honap
    int getHo() const { return ho;}

    /// Nap lekérdezése
    /// @return nap
    int getNap() const { return nap;}

    /// Két dátum egyezőségét vizsgálja
    /// @param d - jobb oldali operandus
    /// @return true, ha egyezik a két dátum
    bool operator==(const Datum& d) const {
        return ev == d.ev && ho == d.ho && nap == d.nap;
    }
};

#endif //NHF_DATUM_H
