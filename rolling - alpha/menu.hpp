#ifndef Menu_hpp
#define Menu_hpp
#include "tablica.hpp"
class Menu
{
public:
    Tablica *tablica;
    Menu()
    {
        f_glowna = false;           //Flaga sprawdzaj¹ca czy weszliœmy do okna_gry
        tablica = new Tablica();
        muzyka = true;              //Flaga sprawdza czy nacisneliœmy na przycisk zwi¹zany  z wyciszeniem dzwieku
    }


    BITMAP * black = NULL;          //Rysuje okno o rozmiarze 700x600
    BITMAP * start = NULL;          //Bitmapa menu g³ównego
    BITMAP * okno_gry = NULL;       //Bitmapa planszy gry
    BITMAP * on = NULL;
    BITMAP * mute = NULL;

    bool f_nowagra;  // flaga nowa gra
    bool f_exit;     // flaga exit
    bool muzyka;
    bool f_glowna;                      //Flaga sprawdzaj¹ca czy weszliœmy do okna_gry
    void rysuj_menu();
    void obsluga_myszy();               //Sprawdza czy nacisneliœmy odpowiedzni przycisk w meny g³ównym i wykonuje odpowiednie akcje
    void rozdzielczosc(int x, int y);   //Odpowiada za rozdzielczoœæ okna


    SAMPLE * sound;                     // Deklaracja dzwiêku


    virtual ~Menu(){
        destroy_bitmap(black);
        destroy_bitmap(start);
        destroy_bitmap(okno_gry);
        destroy_bitmap(on);
        destroy_bitmap(mute);
    }
};


#endif // menu
