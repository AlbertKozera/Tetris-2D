#ifndef Menu_hpp
#define Menu_hpp
#include "tablica.hpp"
class Menu
{
public:
    Tablica *tablica;
    Menu()
    {
        f_glowna = false;           //Flaga sprawdzaj�ca czy weszli�my do okna_gry
        tablica = new Tablica();
        muzyka = true;              //Flaga sprawdza czy nacisneli�my na przycisk zwi�zany  z wyciszeniem dzwieku
    }


    BITMAP * black = NULL;          //Rysuje okno o rozmiarze 700x600
    BITMAP * start = NULL;          //Bitmapa menu g��wnego
    BITMAP * okno_gry = NULL;       //Bitmapa planszy gry
    BITMAP * on = NULL;
    BITMAP * mute = NULL;

    bool f_nowagra;  // flaga nowa gra
    bool f_exit;     // flaga exit
    bool muzyka;
    bool f_glowna;                      //Flaga sprawdzaj�ca czy weszli�my do okna_gry
    void rysuj_menu();
    void obsluga_myszy();               //Sprawdza czy nacisneli�my odpowiedzni przycisk w meny g��wnym i wykonuje odpowiednie akcje
    void rozdzielczosc(int x, int y);   //Odpowiada za rozdzielczo�� okna


    SAMPLE * sound;                     // Deklaracja dzwi�ku


    virtual ~Menu(){
        destroy_bitmap(black);
        destroy_bitmap(start);
        destroy_bitmap(okno_gry);
        destroy_bitmap(on);
        destroy_bitmap(mute);
    }
};


#endif // menu
