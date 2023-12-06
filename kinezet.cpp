#include "kinezet.h"
#include <cstring>


void kozepen(const char* szoveg){
    size_t hossz = 0;
    hossz = (48 - (sizeof(szoveg)/2));
    for(int hely = 0; hely < hossz/2; hely++)
        std::cout << " ";
    std::cout << szoveg;
}

void fejlec(const char *szoveg){
    system("cls");
    std::cout << "************************************************";
    std::cout << "\n************                        ************";
    std::cout << "\n************   Roxfort Adatbazisa   ************";
    std::cout << "\n************                        ************";
    std::cout << "\n************************************************";
    std::cout << "\n------------------------------------------------\n";
    kozepen(szoveg);
    std::cout << "\n------------------------------------------------\n";
}

void error(){
    std::cout << "\n  --------------------------------------------------------\n";
    std::cout << "\n        *********************************************";
    std::cout << "\n        *                    KEREM                  *";
    std::cout << "\n        *                      A                    *";
    std::cout << "\n        *                 LEHETOSEGEK               *";
    std::cout << "\n        *                    KOZUL                  *";
    std::cout << "\n        *                  VALASSZON                *";
    std::cout << "\n        *********************************************";
    std::cout << "\n  --------------------------------------------------------\n";
}

void udvozles(){
    std::cout << "\n  --------------------------------------------------------\n";
    std::cout << "\n        *********************************************";
    std::cout << "\n        *           KOSZONTI                        *";
    std::cout << "\n        *                   A                       *";
    std::cout << "\n        *                    ROXFORT                *";
    std::cout << "\n        *                         ADATBAZISA        *";
    std::cout << "\n        *********************************************";
    std::cout << "\n  --------------------------------------------------------\n";
}

void tavozas(){
    std::cout << "\n  --------------------------------------------------------\n";
    std::cout << "\n        *********************************************";
    std::cout << "\n        *         KOSZONJUK                         *";
    std::cout << "\n        *                HOGY                       *";
    std::cout << "\n        *                   MINKET                  *";
    std::cout << "\n        *                       VALASZTOTT          *";
    std::cout << "\n        *********************************************";
    std::cout << "\n  --------------------------------------------------------\n";
}
