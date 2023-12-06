#include "menu.h"
#include "kinezet.h"
#include <unistd.h>

void menu_belep(){
    system("cls");
    int opcio;
    do {
        fejlec("Belepes");
        std::cout << "\n\n";
        kozepen("1.Belepes\n");
        kozepen("2.Kilepes\n");
        std::cout << "=> ";
        std::cin >> opcio;
        switch (opcio) {
            case 1:
                system("cls");
                udvozles();
                sleep(2);
                menu_fo();
                break;
            case 2:
                system("cls");
                exit(1);
            default:
                system("cls");
                error();
                sleep(2);
        }
    } while(opcio != 2);
}

void menu_fo(){
    system("cls");
    int opcio;
    do{
        fejlec("Menu");
        kozepen("1.Hozzaadas\n");
        kozepen("2.Torles\n");
        kozepen("3.Kereses\n");
        kozepen("4.Listazas\n");
        kozepen("5.Kilepes\n");
        std::cout<< "=> ";
        std::cin >> opcio;
        switch(opcio){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                system("cls");
                tavozas();
                sleep(3
                      );
                exit(1);
            default:
                system("cls");
                error();
                sleep(2);
                break;
        }
    }while(opcio!=5);
}

void menu_hozzaad(){
    system("cls");
    int opcio;
    do{
        fejlec("Hozzaad");
        kozepen("1.Zene hozzaadasa\n");
        kozepen("2.Lemez hozzaadasa\n");
        kozepen("3.Visszalepes\n");
        std::cout << "=> ";
        std::cin >> opcio;
        switch(opcio){
            case 1:

                break;
            case 2:

                break;
            case 3:
                return;
            default:
                system("cls");
                error();
                sleep(2);
                break;
        }
    }while(opcio!=3);
}

void menu_kiiras(){
    system("cls"); //kepernyo tisztitasa
    int opcio;
    do{
        fejlec("Listazas");
        kozepen("1.Lemez zeneinek listazasa\n");
        kozepen("2.Minden listazasa\n");
        kozepen("3.Visszalepes\n");
        std::cout << "=> ";
        std::cin >> opcio;
        switch(opcio){
            case 1:
                system("cls");
                fejlec("Valasztas");
                std::cout << "\n";
                break;
            case 2:
                system("cls");
                fejlec("Minden");
                kozepen("Zenek\n");

                std::cout << "------------------------------------------------\n";
                kozepen("Lemezek\n");

                break;
            case 3:
                return;
            default:
                system("cls");
                error();
                sleep(2);
                break;
        }
    }while(opcio!=3);
}

void menu_torles(){
    system("cls");
    int opcio;
    do{
        fejlec("Torles");
        kozepen("1.Zene torlese\n");
        kozepen("2.Lemez torlese\n");
        kozepen("3.Visszalepes\n");
        std::cout << "=> ";
        std::cin >> opcio;
        switch(opcio){
            case 1:

                break;
            case 2:

                break;
            case 3:
                return;
            default:
                system("cls");
                error();
                sleep(2);
                break;
        }
    }while(opcio!=3);
}

void menu_kereses(){
    system("cls");
    int opcio;
    do{
        fejlec("Kereses");
        kozepen("1.Zene keresese\n");
        kozepen("2.Lemez keresese\n");
        kozepen("3.Visszalepes\n");
        std::cout << "=> ";
        std::cin >> opcio;
        switch(opcio){
            case 1:

                break;
            case 2:

                break;
            case 3:
                return;
            default:
                system("cls");
                error();
                sleep(2);
                break;
        }
    }while(opcio!=3);
}
