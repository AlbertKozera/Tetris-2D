#include <allegro.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "menu.hpp"
#include "tablica.hpp"

BITMAP * bufor = NULL;
volatile long speed1;
volatile long speed2;

class Engine
{
public:
    Menu *menu;
    Engine()
    {
        menu = new Menu();
    }

    void init()
    {
        allegro_init();
        set_window_title("Tetris 2D");
        ///
        install_timer();
        install_keyboard();
        install_mouse();

        install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, "");
        /* add other initializations here */

        menu->rozdzielczosc(700,600);
        //enable_hardware_cursor();
        //select_mouse_cursor(MOUSE_CURSOR_BUSY);
        show_mouse( screen );
        unscare_mouse();
        menu->rysuj_menu();

        LOCK_VARIABLE( speed1 );                                  // --->
        LOCK_VARIABLE( speed2 );                                  // --->
        LOCK_FUNCTION( increment_speed1 );                        // --->
        LOCK_FUNCTION( increment_speed2 );                        // ---> alokacja pamieci zmiennych, funkcji
    }

    ~Engine()
    {
        destroy_bitmap(bufor);
    }
    Engine(const Engine&);                  //
    Engine& operator=(const Engine&);       //  ---> singleton
    static Engine *m_instanceSingleton;     //
};

void deinit()                 //Timer odpowiada za poruszanie na boki i na dó³
{
    clear_keybuf();
    /* add other deinitializations here */
}

void increment_speed1()                 //Timer odpowiada za spadanie kszta³tu
{
    speed1++;
}
END_OF_FUNCTION( increment_speed1 );
void increment_speed2()
{
    speed2++;
}
END_OF_FUNCTION( increment_speed2 );

int main()
{
    Engine silnik;
    Menu menu;
    Tablica tablica;
    silnik.init();
    srand( time( NULL ) );
    SAMPLE * sound = NULL;
    sound = load_sample("tetris.wav");
    play_sample(sound, 0, 127, 1000, true);     //Odtwarza dzwiêk o podanej g³oœnoœci podziale na g³oœniki i ile razy w pêtli
    bufor = create_bitmap( 350, 50 );
    tablica.wyswietl_tablice();
    while(!key[KEY_ESC])
    {
        while(menu.f_glowna==false)
        {
            clear_to_color( bufor, makecol( 0, 0, 0 ) );
            textprintf_ex( bufor, font, 5, 5, makecol( 200, 200, 200 ), - 1, "Myszka x = %d | y = %d | klawisz = %d ", mouse_x, mouse_y, mouse_b );
            blit( bufor, screen, 0, 0, 0, 580, 315, 20 );
            /* put your code here */
            menu.obsluga_myszy();
        }

        install_int_ex( increment_speed1, MSEC_TO_TIMER( 50 ) );
        install_int_ex( increment_speed2, SECS_TO_TIMER( 1 ) );

        while( menu.f_glowna == true )
        {
            if(mouse_x>=650 && mouse_x<=700 && mouse_y>=550 && mouse_y<=600 && menu.f_exit==true)  /// powrót
            {
                if(mouse_b == 1)
                {
                    menu.rysuj_menu();
                    menu.f_glowna = false;
                    menu.f_nowagra=false;
                    menu.f_exit=false;
                }
            }
            //clear_to_color( bufor, makecol( 0, 0, 0 ) );
            //textprintf_ex( bufor, font, 5, 5, makecol( 200, 200, 200 ), - 1, "Myszka x = %d | y = %d | klawisz = %d ", mouse_x, mouse_y, mouse_b );
            //blit( bufor, screen, 0, 0, 0, 580, 315, 20 );
            menu.obsluga_myszy();

            while( speed1 > 0 )
            {
                tablica.gra();
                speed1--;
            }
            while( speed2 > 0 )
            {
                //tablica.opadanie();
                speed2--;
            }
        }
    }

    //deinit();
    return 0;
}
END_OF_MAIN()
