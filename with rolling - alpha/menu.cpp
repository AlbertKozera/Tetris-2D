#include <allegro.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "menu.hpp"
#include "tablica.hpp"



void Menu::rysuj_menu()
{
    install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, "A");
    black = create_bitmap( 700, 600 );
    clear_to_color( black, makecol( 0, 0, 0 ) );
    blit( black, screen, 0, 0, 0, 0, 700, 600 );

    start = load_bmp( "start.bmp", default_palette );
    if( !start )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    on = load_bmp( "on.bmp", default_palette );
    if( !on )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    blit( start, screen, 0, 0, 0, 0, start->w, start->h );
    blit( on, screen, 0, 0, 645, 5, on->w, on->h );
}

void Menu::obsluga_myszy()
{

    if(mouse_x>=648 && mouse_x<=695 && mouse_y>=10 && mouse_y<=52 && muzyka==true)
    {
        if(mouse_b == 1)
        {
            muzyka=false;
            mute = load_bmp( "mute.bmp", default_palette );
            set_volume_per_voice( 10 );
            if( !mute )
            {
                set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
                allegro_message( "error load image!" );
                allegro_exit();
            }
            blit( mute, screen, 0, 0, 645, 5, mute->w, mute->h );
        }
    }
    if(mouse_x>=648 && mouse_x<=695 && mouse_y>=10 && mouse_y<=52 && muzyka==false)
    {
        if(mouse_b == 2)
        {
            muzyka=true;
            on = load_bmp( "on.bmp", default_palette );
            set_volume_per_voice( 1 );
            if( !on )
            {
                set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
                allegro_message( "error load image!" );
                allegro_exit();
            }
            blit( on, screen, 0, 0, 645, 5, on->w, on->h );
        }
    }
    if(mouse_x>=160 && mouse_x<=560 && mouse_y>=220 && mouse_y<=270 && f_nowagra==false)  /// nowa gra
    {
        if(mouse_b == 1)
        {
            f_nowagra=true;
            f_exit=true;
            okno_gry = load_bmp( "okno_gry.bmp", default_palette );
            if( !okno_gry )
            {
                set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
                allegro_message( "error load image!" );
                allegro_exit();
            }
            blit( okno_gry, screen, 0, 0, 0, 0, okno_gry->w, okno_gry->h );
            f_glowna=true;
        }
    }
    if(mouse_x>=160 && mouse_x<=560 && mouse_y>=310 && mouse_y<=360 && f_nowagra==false && f_exit==false)  /// exit
    {
        if(mouse_b == 1)
            exit(0);
    }
    if(mouse_x>=650 && mouse_x<=700 && mouse_y>=550 && mouse_y<=600 && f_exit==true)  /// powrót
    {
        if(mouse_b == 1)
        {
            rysuj_menu();
            f_glowna = false;
            f_nowagra=false;
            f_exit=false;
        }
    }
}

void Menu::rozdzielczosc(int x, int y)
{
    int depth, res;
    depth = desktop_color_depth();
    if( depth == 0 )
        depth = 32;
    set_color_depth( depth );
    res = set_gfx_mode( GFX_AUTODETECT_WINDOWED, x, y, 0, 0);
    if( res != 0 )
    {
        allegro_message( allegro_error );
        exit( - 1 );
    }
}





