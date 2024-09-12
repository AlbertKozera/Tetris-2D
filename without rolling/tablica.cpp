#include <allegro.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "tablica.hpp"
using namespace std;


void Tablica::init()                                //Deklaracja bitmap kszta³tów
{
    _O_ = load_bmp( "_O_.bmp", default_palette );
    _O_DELETE = load_bmp( "_O_DELETE.bmp", default_palette );
    _I_0_ = load_bmp( "_I_0_.bmp", default_palette );
    _I_0_DELETE = load_bmp( "_I_0_DELETE.bmp", default_palette );
    _I_1_ = load_bmp( "_I_1_.bmp", default_palette );
    _I_1_DELETE = load_bmp( "_I_1_DELETE.bmp", default_palette );
    _J_0_ = load_bmp( "_J_0_.bmp", default_palette );
    _J_0_DELETE = load_bmp( "_J_0_DELETE.bmp", default_palette );
    _J_1_ = load_bmp( "_J_1_.bmp", default_palette );
    _J_1_DELETE = load_bmp( "_J_1_DELETE.bmp", default_palette );
    _J_2_ = load_bmp( "_J_2_.bmp", default_palette );
    _J_2_DELETE = load_bmp( "_J_2_DELETE.bmp", default_palette );
    _J_3_ = load_bmp( "_J_3_.bmp", default_palette );
    _J_3_DELETE = load_bmp( "_J_3_DELETE.bmp", default_palette );
    _L_0_ = load_bmp( "_L_0_.bmp", default_palette );
    _L_0_DELETE = load_bmp( "_L_0_DELETE.bmp", default_palette );
    _L_1_ = load_bmp( "_L_1_.bmp", default_palette );
    _L_1_DELETE = load_bmp( "_L_1_DELETE.bmp", default_palette );
    _L_2_ = load_bmp( "_L_2_.bmp", default_palette );
    _L_2_DELETE = load_bmp( "_L_2_DELETE.bmp", default_palette );
    _L_3_ = load_bmp( "_L_3_.bmp", default_palette );
    _L_3_DELETE = load_bmp( "_L_3_DELETE.bmp", default_palette );
    _S_0_ = load_bmp( "_S_0_.bmp", default_palette );
    _S_0_DELETE = load_bmp( "_S_0_DELETE.bmp", default_palette );
    _S_1_ = load_bmp( "_S_1_.bmp", default_palette );
    _S_1_DELETE = load_bmp( "_S_1_DELETE.bmp", default_palette );
    _T_0_ = load_bmp( "_T_0_.bmp", default_palette );
    _T_0_DELETE = load_bmp( "_T_0_DELETE.bmp", default_palette );
    _T_1_ = load_bmp( "_T_1_.bmp", default_palette );
    _T_1_DELETE = load_bmp( "_T_1_DELETE.bmp", default_palette );
    _T_2_ = load_bmp( "_T_2_.bmp", default_palette );
    _T_2_DELETE = load_bmp( "_T_2_DELETE.bmp", default_palette );
    _T_3_ = load_bmp( "_T_3_.bmp", default_palette );
    _T_3_DELETE = load_bmp( "_T_3_DELETE.bmp", default_palette );
    _Z_0_ = load_bmp( "_Z_0_.bmp", default_palette );
    _Z_0_DELETE = load_bmp( "_Z_0_DELETE.bmp", default_palette );
    _Z_1_ = load_bmp( "_Z_1_.bmp", default_palette );
    _Z_1_DELETE = load_bmp( "_Z_1_DELETE.bmp", default_palette );
    next_DELETE = load_bmp( "next_DELETE.bmp", default_palette );
    copy_screen=screen;


    if( !_O_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!1" );
        allegro_exit();
    }
    if( !_O_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!2" );
        allegro_exit();
    }
    if( !_I_0_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!3" );
        allegro_exit();
    }
    if( !_I_0_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!4" );
        allegro_exit();
    }
    if( !_I_1_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!5" );
        allegro_exit();
    }
    if( !_I_1_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!6" );
        allegro_exit();
    }
    if( !_J_0_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!7" );
        allegro_exit();
    }
    if( !_J_0_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!8" );
        allegro_exit();
    }
    if( !_J_1_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!9" );
        allegro_exit();
    }
    if( !_J_1_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!10" );
        allegro_exit();
    }
    if( !_J_2_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!11" );
        allegro_exit();
    }
    if( !_J_2_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!12" );
        allegro_exit();
    }
    if( !_J_3_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!13" );
        allegro_exit();
    }
    if( !_J_3_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!14" );
        allegro_exit();
    }
    if( !_L_0_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!15" );
        allegro_exit();
    }
    if( !_L_0_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!16" );
        allegro_exit();
    }
    if( !_L_1_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!17" );
        allegro_exit();
    }
    if( !_L_1_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!18" );
        allegro_exit();
    }
    if( !_L_2_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!19" );
        allegro_exit();
    }
    if( !_L_2_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!20" );
        allegro_exit();
    }
    if( !_L_3_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!21" );
        allegro_exit();
    }
    if( !_L_3_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!22" );
        allegro_exit();
    }
    if( !_S_0_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!23" );
        allegro_exit();
    }
    if( !_S_0_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!24" );
        allegro_exit();
    }
    if( !_S_1_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_S_1_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_0_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_0_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_1_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_1_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_2_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_2_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_3_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_T_3_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_Z_0_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_Z_0_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_Z_1_ )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !_Z_1_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
    if( !next_DELETE )
    {
        set_gfx_mode( GFX_TEXT, 0, 0, 0, 0 );
        allegro_message( "error load image!" );
        allegro_exit();
    }
}

void Tablica::gra()         //Wybór kszta³tów
{
    init();


    if(key[KEY_CAPSLOCK])
    {
        for(int i=0; i<=89; i++)
            plansza[i] = 0;
    }

    if(losowanie==1)
    {
        if(f_uzupelnienie==false)
        {
            __I__(x,y);
            f_uzupelnienie=true;
        }
        nastepny();
        tmp_x_R=500;
        tmp_x_L=140;
        tmp_y=470;
        tmp_czyszczenie=_I_0_DELETE;
        tmp_rysowanie=_I_0_;
        poruszanie(_I_0_DELETE,_I_0_);
        if(y>tmp_y || key[KEY_SPACE] || f_I_0_D==true)
        {
            cout<<1;
            losowanie = losowanie2;
            x=koordy_x[rand()%8];
            y=-107;
            f_uzupelnienie=false;
            f_next=false;
            f_I_0_D=false;
            usun_wiersz();
        }
    }
    if(losowanie==2)
    {
        if(f_uzupelnienie==false)
        {
            __T__(x,y);
            f_uzupelnienie=true;
        }
        nastepny();
        tmp_x_R=450;
        tmp_x_L=140;
        tmp_y=530;
        tmp_czyszczenie=_T_0_DELETE;
        tmp_rysowanie=_T_0_;
        poruszanie(_T_0_DELETE,_T_0_);
        if(y>tmp_y || key[KEY_SPACE] || f_T_0_D==true)
        {
            losowanie = losowanie2;
            x=koordy_x[rand()%8];
            y=-107;
            f_uzupelnienie=false;
            f_next=false;
            f_T_0_D=false;
            usun_wiersz();
        }
    }
    if(losowanie==3)
    {
        if(f_uzupelnienie==false)
        {
            __L__(x,y);
            f_uzupelnienie=true;
        }
        nastepny();
        tmp_x_R=470;
        tmp_x_L=140;
        tmp_y=500;
        tmp_czyszczenie=_L_0_DELETE;
        tmp_rysowanie=_L_0_;
        poruszanie(_L_0_DELETE,_L_0_);
        if(y>tmp_y || key[KEY_SPACE] || f_L_0_D==true)
        {
            losowanie = losowanie2;
            x=koordy_x[rand()%8];
            y=-107;
            f_uzupelnienie=false;
            f_next=false;
            f_L_0_D=false;
            usun_wiersz();
        }
    }
    if(losowanie==4)
    {
        if(f_uzupelnienie==false)
        {
            __J__(x,y);
            f_uzupelnienie=true;
        }
        nastepny();
        tmp_x_R=470;
        tmp_x_L=140;
        tmp_y=500;
        tmp_czyszczenie=_J_0_DELETE;
        tmp_rysowanie=_J_0_;
        poruszanie(_J_0_DELETE,_J_0_);
        if(y>tmp_y || key[KEY_SPACE] || f_J_0_D==true)
        {
            losowanie = losowanie2;
            x=koordy_x[rand()%8];
            y=-107;
            f_uzupelnienie=false;
            f_next=false;
            f_J_0_D=false;
            usun_wiersz();
        }
    }
    if(losowanie==5)
    {
        if(f_uzupelnienie==false)
        {
            __O__(x,y);
            f_uzupelnienie=true;
        }
        nastepny();
        tmp_x_R=470;
        tmp_x_L=140;
        tmp_y=530;
        tmp_czyszczenie=_O_DELETE;
        tmp_rysowanie=_O_;
        poruszanie(_O_DELETE,_O_);
        if(y>tmp_y || key[KEY_SPACE] || f_O_D==true)
        {
            losowanie = losowanie2;
            x=koordy_x[rand()%8];
            y=-107;
            f_uzupelnienie=false;
            f_next=false;
            f_O_D=false;
            usun_wiersz();
        }
    }
    if(losowanie==6)
    {
        if(f_uzupelnienie==false)
        {
            __S__(x,y);
            f_uzupelnienie=true;
        }
        nastepny();
        tmp_x_R=450;
        tmp_x_L=140;
        tmp_y=530;
        tmp_czyszczenie=_S_0_DELETE;
        tmp_rysowanie=_S_0_;
        poruszanie(_S_0_DELETE,_S_0_);
        if(y>tmp_y || key[KEY_SPACE] || f_S_0_D==true)
        {
            losowanie = losowanie2;
            x=koordy_x[rand()%8];
            y=-107;
            f_uzupelnienie=false;
            f_next=false;
            f_S_0_D=false;
            usun_wiersz();
        }
    }
    if(losowanie==7)
    {
        if(f_uzupelnienie==false)
        {
            __Z__(x,y);
            f_uzupelnienie=true;
        }
        nastepny();
        tmp_x_R=450;
        tmp_x_L=140;
        tmp_y=530;
        tmp_czyszczenie=_Z_0_DELETE;
        tmp_rysowanie=_Z_0_;
        poruszanie(_Z_0_DELETE,_Z_0_);
        if(y>tmp_y || key[KEY_SPACE] || f_Z_0_D==true)
        {
            losowanie = losowanie2;
            x=koordy_x[rand()%8];
            y=-107;
            f_uzupelnienie=false;
            f_next=false;
            f_Z_0_D=false;
            usun_wiersz();
        }
    }


}


void Tablica::poruszanie(BITMAP * czyszczenie, BITMAP * rysowanie)      //Poruszanie siê kszta³tami po planszy
{

    if(key[ KEY_RIGHT ])
    {
            kolizje(x,y);
            if(x<=tmp_x_R && (   (losowanie==1 && f_I_0_P==false) || (losowanie==2 && f_T_0_P==false) || (losowanie==3 && f_L_0_P==false) || (losowanie==4 && f_J_0_P==false) || (losowanie==5 && f_O_P==false) || (losowanie==6 && f_S_0_P==false) || (losowanie==7 && f_Z_0_P==false)   ))
            {
                if(losowanie==1)
                    __I__DELETE(x,y);
                if(losowanie==2)
                    __T__DELETE(x,y);
                if(losowanie==3)
                    __L__DELETE(x,y);
                if(losowanie==4)
                    __J__DELETE(x,y);
                if(losowanie==5)
                    __O__DELETE(x,y);
                if(losowanie==6)
                    __S__DELETE(x,y);
                if(losowanie==7)
                    __Z__DELETE(x,y);
                masked_blit( czyszczenie, screen, 0, 0, x, y, czyszczenie->w, czyszczenie->h );
                masked_blit( rysowanie, screen, 0, 0, x+=27, y, rysowanie->w, rysowanie->h ); /// +54x  +54y
                if(losowanie==1)
                    __I__(x,y);
                if(losowanie==2)
                    __T__(x,y);
                if(losowanie==3)
                    __L__(x,y);
                if(losowanie==4)
                    __J__(x,y);
                if(losowanie==5)
                    __O__(x,y);
                if(losowanie==6)
                    __S__(x,y);
                if(losowanie==7)
                    __Z__(x,y);
        }
    }
    if(key[ KEY_LEFT ] )
    {
        kolizje(x,y);
        if(x>=tmp_x_L && (   (losowanie==1 && f_I_0_L==false) || (losowanie==2 && f_T_0_L==false) || (losowanie==3 && f_L_0_L==false) || (losowanie==4 && f_J_0_L==false) || (losowanie==5 && f_O_L==false) || (losowanie==6 && f_S_0_L==false) || (losowanie==7 && f_Z_0_L==false)   ))
        {
            if(losowanie==1)
                __I__DELETE(x,y);
            if(losowanie==2)
                __T__DELETE(x,y);
            if(losowanie==3)
                __L__DELETE(x,y);
            if(losowanie==4)
                __J__DELETE(x,y);
            if(losowanie==5)
                __O__DELETE(x,y);
            if(losowanie==6)
                __S__DELETE(x,y);
            if(losowanie==7)
                __Z__DELETE(x,y);
            masked_blit( czyszczenie, screen, 0, 0, x, y, czyszczenie->w, czyszczenie->h );
            masked_blit( rysowanie, screen, 0, 0, x-=27, y, rysowanie->w, rysowanie->h ); /// +54x  +54y
            if(losowanie==1)
                __I__(x,y);
            if(losowanie==2)
                __T__(x,y);
            if(losowanie==3)
                __L__(x,y);
            if(losowanie==4)
                __J__(x,y);
            if(losowanie==5)
                __O__(x,y);
            if(losowanie==6)
                __S__(x,y);
            if(losowanie==7)
                __Z__(x,y);
        }

    }
    if(key[ KEY_DOWN ])
    {
        kolizje(x,y);
        if(y<tmp_y && (   (losowanie==1 && f_I_0_D==false) || (losowanie==2 && f_T_0_D==false) || (losowanie==3 && f_L_0_D==false) || (losowanie==4 && f_J_0_D==false) || (losowanie==5 && f_O_D==false) || (losowanie==6 && f_S_0_D==false) || (losowanie==7 && f_Z_0_D==false)   ))
        {
            if(losowanie==1)
                __I__DELETE(x,y);
            if(losowanie==2)
                __T__DELETE(x,y);
            if(losowanie==3)
                __L__DELETE(x,y);
            if(losowanie==4)
                __J__DELETE(x,y);
            if(losowanie==5)
                __O__DELETE(x,y);
            if(losowanie==6)
                __S__DELETE(x,y);
            if(losowanie==7)
                __Z__DELETE(x,y);
            masked_blit( czyszczenie, screen, 0, 0, x, y, czyszczenie->w, czyszczenie->h );
            masked_blit( rysowanie, screen, 0, 0, x, y+=27, rysowanie->w, rysowanie->h ); /// +54x  +54y
            if(losowanie==1)
                __I__(x,y);
            if(losowanie==2)
                __T__(x,y);
            if(losowanie==3)
                __L__(x,y);
            if(losowanie==4)
                __J__(x,y);
            if(losowanie==5)
                __O__(x,y);
            if(losowanie==6)
                __S__(x,y);
            if(losowanie==7)
                __Z__(x,y);
        }
    }

}

void Tablica::opadanie()        //Odpowiada za opadanie kszta³tów
{
    kolizje(x,y);
    if(y<tmp_y && (   (losowanie==1 && f_I_0_D==false) || (losowanie==2 && f_T_0_D==false) || (losowanie==3 && f_L_0_D==false) || (losowanie==4 && f_J_0_D==false) || (losowanie==5 && f_O_D==false) || (losowanie==6 && f_S_0_D==false) || (losowanie==7 && f_Z_0_D==false)   ))
    {
        if(losowanie==1)
            __I__DELETE(x,y);
        if(losowanie==2)
            __T__DELETE(x,y);
        if(losowanie==3)
            __L__DELETE(x,y);
        if(losowanie==4)
            __J__DELETE(x,y);
        if(losowanie==5)
            __O__DELETE(x,y);
        if(losowanie==6)
            __S__DELETE(x,y);
        if(losowanie==7)
            __Z__DELETE(x,y);
        masked_blit( tmp_czyszczenie, screen, 0, 0, x, y, tmp_czyszczenie->w, tmp_czyszczenie->h );
        masked_blit( tmp_rysowanie, screen, 0, 0, x, y+=27, tmp_rysowanie->w, tmp_rysowanie->h ); /// +54x  +54y
        if(losowanie==1)
            __I__(x,y);
        if(losowanie==2)
            __T__(x,y);
        if(losowanie==3)
            __L__(x,y);
        if(losowanie==4)
            __J__(x,y);
        if(losowanie==5)
            __O__(x,y);
        if(losowanie==6)
            __S__(x,y);
        if(losowanie==7)
            __Z__(x,y);
    }
}

void Tablica::nastepny()
{
    if(f_next==false)
    {
        losowanie2 = (rand() % 7) + 1;
        if(losowanie2==1)
        {
            masked_blit( next_DELETE, screen, 0, 0, 570, 139, next_DELETE->w, next_DELETE->h );
            masked_blit( _I_0_, screen, 0, 0, 607, 139, _I_0_->w, _I_0_->h );
        }
        if(losowanie2==2)
        {
            masked_blit( next_DELETE, screen, 0, 0, 570, 139, next_DELETE->w, next_DELETE->h );
            masked_blit( _T_0_, screen, 0, 0, 580, 139, _T_0_->w, _T_0_->h );
        }
        if(losowanie2==3)
        {
            masked_blit( next_DELETE, screen, 0, 0, 570, 139, next_DELETE->w, next_DELETE->h );
            masked_blit( _L_0_, screen, 0, 0, 607, 139, _L_0_->w, _L_0_->h );
        }
        if(losowanie2==4)
        {
            masked_blit( next_DELETE, screen, 0, 0, 570, 139, next_DELETE->w, next_DELETE->h );
            masked_blit( _J_0_, screen, 0, 0, 580, 139, _J_0_->w, _J_0_->h );
        }
        if(losowanie2==5)
        {
            masked_blit( next_DELETE, screen, 0, 0, 570, 139, next_DELETE->w, next_DELETE->h );
            masked_blit( _O_, screen, 0, 0, 594, 139, _O_->w, _O_->h );
        }
        if(losowanie2==6)
        {
            masked_blit( next_DELETE, screen, 0, 0, 570, 139, next_DELETE->w, next_DELETE->h );
            masked_blit( _S_0_, screen, 0, 0, 580, 139, _S_0_->w, _S_0_->h );
        }
        if(losowanie2==7)
        {
            masked_blit( next_DELETE, screen, 0, 0, 570, 139, next_DELETE->w, next_DELETE->h );
            masked_blit( _Z_0_, screen, 0, 0, 580, 139, _Z_0_->w, _Z_0_->h );
        }
        f_next=true;
    }
}

void Tablica::aktualizuj_wiersz(int n)
{
    for(int i=n; i>=0; i--)
    {
        plansza[i+15] = plansza[i];
        plansza[i]=0;
    }
}

void Tablica::usun_wiersz()
{
    if(plansza[60]==1 && plansza[61]==1 && plansza[62]==1 && plansza[63]==1 && plansza[64]==1 && plansza[65]==1 && plansza[66]==1 && plansza[67]==1 && plansza[68]==1 && plansza[69]==1 && plansza[70]==1 && plansza[71]==1 && plansza[72]==1 && plansza[73]==1 && plansza[74]==1)
    {
        f_wiersz_1=true; /// zaskoczyl if, wiersz 1 do kasacji
    }

    if(plansza[75]==1 && plansza[76]==1 && plansza[77]==1 && plansza[78]==1 && plansza[79]==1 && plansza[80]==1 && plansza[81]==1 && plansza[82]==1 && plansza[83]==1 && plansza[84]==1 && plansza[85]==1 && plansza[86]==1 && plansza[87]==1 && plansza[88]==1 && plansza[89]==1)
    {
        f_wiersz_2=true; /// zaskoczyl if, wiersz 2 do kasacji
    }
    if(plansza[90]==1 && plansza[91]==1 && plansza[92]==1 && plansza[93]==1 && plansza[94]==1 && plansza[95]==1 && plansza[96]==1 && plansza[97]==1 && plansza[98]==1 && plansza[99]==1 && plansza[100]==1 && plansza[101]==1 && plansza[102]==1 && plansza[103]==1 && plansza[104]==1)
    {
        f_wiersz_3=true; /// zaskoczyl if, wiersz 3 do kasacji
    }
    if(plansza[105]==1 && plansza[106]==1 && plansza[107]==1 && plansza[108]==1 && plansza[109]==1 && plansza[110]==1 && plansza[111]==1 && plansza[112]==1 && plansza[113]==1 && plansza[114]==1 && plansza[115]==1 && plansza[116]==1 && plansza[117]==1 && plansza[118]==1 && plansza[119]==1)
    {
        f_wiersz_4=true; /// zaskoczyl if, wiersz 4 do kasacji
    }
    if(plansza[120]==1 && plansza[121]==1 && plansza[122]==1 && plansza[123]==1 && plansza[124]==1 && plansza[125]==1 && plansza[126]==1 && plansza[127]==1 && plansza[128]==1 && plansza[129]==1 && plansza[130]==1 && plansza[131]==1 && plansza[132]==1 && plansza[133]==1 && plansza[134]==1)
    {
        f_wiersz_5=true; /// zaskoczyl if, wiersz 5 do kasacji
    }
    if(plansza[135]==1 && plansza[136]==1 && plansza[137]==1 && plansza[138]==1 && plansza[139]==1 && plansza[140]==1 && plansza[141]==1 && plansza[142]==1 && plansza[143]==1 && plansza[144]==1 && plansza[145]==1 && plansza[146]==1 && plansza[147]==1 && plansza[148]==1 && plansza[149]==1)
    {
        f_wiersz_6=true; /// zaskoczyl if, wiersz 6 do kasacji
    }
    if(plansza[150]==1 && plansza[151]==1 && plansza[152]==1 && plansza[153]==1 && plansza[154]==1 && plansza[155]==1 && plansza[156]==1 && plansza[157]==1 && plansza[158]==1 && plansza[159]==1 && plansza[160]==1 && plansza[161]==1 && plansza[162]==1 && plansza[163]==1 && plansza[164]==1)
    {
        f_wiersz_7=true; /// zaskoczyl if, wiersz 7 do kasacji
    }
    if(plansza[165]==1 && plansza[166]==1 && plansza[167]==1 && plansza[168]==1 && plansza[169]==1 && plansza[170]==1 && plansza[171]==1 && plansza[172]==1 && plansza[173]==1 && plansza[174]==1 && plansza[175]==1 && plansza[176]==1 && plansza[177]==1 && plansza[178]==1 && plansza[179]==1)
    {
        f_wiersz_8=true; /// zaskoczyl if, wiersz 8 do kasacji
    }
    if(plansza[180]==1 && plansza[181]==1 && plansza[182]==1 && plansza[183]==1 && plansza[184]==1 && plansza[185]==1 && plansza[186]==1 && plansza[187]==1 && plansza[188]==1 && plansza[189]==1 && plansza[190]==1 && plansza[191]==1 && plansza[192]==1 && plansza[193]==1 && plansza[194]==1)
    {
        f_wiersz_9=true; /// zaskoczyl if, wiersz 9 do kasacji
    }
    if(plansza[195]==1 && plansza[196]==1 && plansza[197]==1 && plansza[198]==1 && plansza[199]==1 && plansza[200]==1 && plansza[201]==1 && plansza[202]==1 && plansza[203]==1 && plansza[204]==1 && plansza[205]==1 && plansza[206]==1 && plansza[207]==1 && plansza[208]==1 && plansza[209]==1)
    {
        f_wiersz_10=true; /// zaskoczyl if, wiersz 10 do kasacji
    }
    if(plansza[210]==1 && plansza[211]==1 && plansza[212]==1 && plansza[213]==1 && plansza[214]==1 && plansza[215]==1 && plansza[216]==1 && plansza[217]==1 && plansza[218]==1 && plansza[219]==1 && plansza[220]==1 && plansza[221]==1 && plansza[222]==1 && plansza[223]==1 && plansza[224]==1)
    {
        f_wiersz_11=true; /// zaskoczyl if, wiersz 11 do kasacji
    }
    if(plansza[225]==1 && plansza[226]==1 && plansza[227]==1 && plansza[228]==1 && plansza[229]==1 && plansza[230]==1 && plansza[231]==1 && plansza[232]==1 && plansza[233]==1 && plansza[234]==1 && plansza[235]==1 && plansza[236]==1 && plansza[237]==1 && plansza[238]==1 && plansza[239]==1)
    {
        f_wiersz_12=true; /// zaskoczyl if, wiersz 12 do kasacji
    }
    if(plansza[240]==1 && plansza[241]==1 && plansza[242]==1 && plansza[243]==1 && plansza[244]==1 && plansza[245]==1 && plansza[246]==1 && plansza[247]==1 && plansza[248]==1 && plansza[249]==1 && plansza[250]==1 && plansza[251]==1 && plansza[252]==1 && plansza[253]==1 && plansza[254]==1)
    {
        f_wiersz_13=true; /// zaskoczyl if, wiersz 13 do kasacji
    }
    if(plansza[255]==1 && plansza[256]==1 && plansza[257]==1 && plansza[258]==1 && plansza[259]==1 && plansza[260]==1 && plansza[261]==1 && plansza[262]==1 && plansza[263]==1 && plansza[264]==1 && plansza[265]==1 && plansza[266]==1 && plansza[267]==1 && plansza[268]==1 && plansza[269]==1)
    {
        f_wiersz_14=true; /// zaskoczyl if, wiersz 14 do kasacji
    }
    if(plansza[270]==1 && plansza[271]==1 && plansza[272]==1 && plansza[273]==1 && plansza[274]==1 && plansza[275]==1 && plansza[276]==1 && plansza[277]==1 && plansza[278]==1 && plansza[279]==1 && plansza[280]==1 && plansza[281]==1 && plansza[282]==1 && plansza[283]==1 && plansza[284]==1)
    {
        f_wiersz_15=true; /// zaskoczyl if, wiersz 15 do kasacji
    }
    if(plansza[285]==1 && plansza[286]==1 && plansza[287]==1 && plansza[288]==1 && plansza[289]==1 && plansza[290]==1 && plansza[291]==1 && plansza[292]==1 && plansza[293]==1 && plansza[294]==1 && plansza[295]==1 && plansza[296]==1 && plansza[297]==1 && plansza[298]==1 && plansza[299]==1)
    {
        f_wiersz_16=true; /// zaskoczyl if, wiersz 16 do kasacji
    }
    if(plansza[300]==1 && plansza[301]==1 && plansza[302]==1 && plansza[303]==1 && plansza[304]==1 && plansza[305]==1 && plansza[306]==1 && plansza[307]==1 && plansza[308]==1 && plansza[309]==1 && plansza[310]==1 && plansza[311]==1 && plansza[312]==1 && plansza[313]==1 && plansza[314]==1)
    {
        f_wiersz_17=true; /// zaskoczyl if, wiersz 17 do kasacji
    }
    if(plansza[315]==1 && plansza[316]==1 && plansza[317]==1 && plansza[318]==1 && plansza[319]==1 && plansza[320]==1 && plansza[321]==1 && plansza[322]==1 && plansza[323]==1 && plansza[324]==1 && plansza[325]==1 && plansza[326]==1 && plansza[327]==1 && plansza[328]==1 && plansza[329]==1)
    {
        f_wiersz_18=true; /// zaskoczyl if, wiersz 18 do kasacji
    }
    if(plansza[330]==1 && plansza[331]==1 && plansza[332]==1 && plansza[333]==1 && plansza[334]==1 && plansza[335]==1 && plansza[336]==1 && plansza[337]==1 && plansza[338]==1 && plansza[339]==1 && plansza[340]==1 && plansza[341]==1 && plansza[342]==1 && plansza[343]==1 && plansza[344]==1)
    {
        f_wiersz_19=true; /// zaskoczyl if, wiersz 19 do kasacji
    }
    if(plansza[345]==1 && plansza[346]==1 && plansza[347]==1 && plansza[348]==1 && plansza[349]==1 && plansza[350]==1 && plansza[351]==1 && plansza[352]==1 && plansza[353]==1 && plansza[354]==1 && plansza[355]==1 && plansza[356]==1 && plansza[357]==1 && plansza[358]==1 && plansza[359]==1)
    {
        f_wiersz_20=true; /// zaskoczyl if, wiersz 20 do kasacji
    }
    if(plansza[360]==1 && plansza[361]==1 && plansza[362]==1 && plansza[363]==1 && plansza[364]==1 && plansza[365]==1 && plansza[366]==1 && plansza[367]==1 && plansza[368]==1 && plansza[369]==1 && plansza[370]==1 && plansza[371]==1 && plansza[372]==1 && plansza[373]==1 && plansza[374]==1)
    {
        f_wiersz_21=true; /// zaskoczyl if, wiersz 21 do kasacji
    }
    if(plansza[375]==1 && plansza[376]==1 && plansza[377]==1 && plansza[378]==1 && plansza[379]==1 && plansza[380]==1 && plansza[381]==1 && plansza[382]==1 && plansza[383]==1 && plansza[384]==1 && plansza[385]==1 && plansza[386]==1 && plansza[387]==1 && plansza[388]==1 && plansza[389]==1)
    {
        f_wiersz_22=true; /// zaskoczyl if, wiersz 22 do kasacji
    }


    if(f_wiersz_1==true)
    {
        aktualizuj_wiersz(59);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, -2 );
        f_wiersz_1=false;
    }
    if(f_wiersz_2==true)
    {
        aktualizuj_wiersz(74);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 25 );
        f_wiersz_2=false;
    }
    if(f_wiersz_3==true)
    {
        aktualizuj_wiersz(89);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 52 );
        f_wiersz_3=false;
    }
    if(f_wiersz_4==true)
    {
        aktualizuj_wiersz(104);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 79 );
        f_wiersz_4=false;
    }
    if(f_wiersz_5==true)
    {
        aktualizuj_wiersz(119);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 106 );
        f_wiersz_5=false;
    }
    if(f_wiersz_6==true)
    {
        aktualizuj_wiersz(134);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 133 );
        f_wiersz_6=false;
    }
    if(f_wiersz_7==true)
    {
        aktualizuj_wiersz(149);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 160 );
        f_wiersz_7=false;
    }
    if(f_wiersz_8==true)
    {
        aktualizuj_wiersz(164);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 187 );
        f_wiersz_8=false;
    }
    if(f_wiersz_9==true)
    {
        aktualizuj_wiersz(179);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 214 );
        f_wiersz_9=false;
    }
    if(f_wiersz_10==true)
    {
        aktualizuj_wiersz(194);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 241 );
        f_wiersz_10=false;
    }
    if(f_wiersz_11==true)
    {
        aktualizuj_wiersz(209);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 268 );
        f_wiersz_11=false;
    }
    if(f_wiersz_12==true)
    {
        aktualizuj_wiersz(224);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 295 );
        f_wiersz_12=false;
    }
    if(f_wiersz_13==true)
    {
        aktualizuj_wiersz(239);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 322 );
        f_wiersz_13=false;
    }
    if(f_wiersz_14==true)
    {
        aktualizuj_wiersz(254);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 349 );
        f_wiersz_14=false;
    }
    if(f_wiersz_15==true)
    {
        aktualizuj_wiersz(269);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 376 );
        f_wiersz_15=false;
    }
    if(f_wiersz_16==true)
    {
        aktualizuj_wiersz(284);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 403 );
        f_wiersz_16=false;
    }
    if(f_wiersz_17==true)
    {
        aktualizuj_wiersz(299);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 430 );
        f_wiersz_17=false;
    }
    if(f_wiersz_18==true)
    {
        aktualizuj_wiersz(314);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 457 );
        f_wiersz_18=false;
    }
    if(f_wiersz_19==true)
    {
        aktualizuj_wiersz(329);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 484 );
        f_wiersz_19=false;
    }
    if(f_wiersz_20==true)
    {
        aktualizuj_wiersz(344);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 511 );
        f_wiersz_20=false;
    }
    if(f_wiersz_21==true)
    {
        aktualizuj_wiersz(359);
        masked_blit( copy_screen, screen, 135, 1, 135, 28, 408, 538 );
        f_wiersz_21=false;
    }
    if(f_wiersz_22==true)
    {
        aktualizuj_wiersz(374);
        masked_blit( copy_screen, screen, 133, 1, 133, 28, 408, 565 );
        f_wiersz_22=false;
    }
}

void Tablica::__O__(int x, int y)           //Zape³nia jedynkami tablice
{
    plansza[konwerter_pola(x,y)-1]=1;
    plansza[konwerter_pola(x,y)]=1;
    plansza[konwerter_pola(x,y)+14]=1;
    plansza[konwerter_pola(x,y)+15]=1;
    //wyswietl_tablice();
    //cout<<konwerter_pola(x,y)<<"\n";
}

void Tablica::__O__DELETE(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=0;
    plansza[konwerter_pola(x,y)]=0;
    plansza[konwerter_pola(x,y)+14]=0;
    plansza[konwerter_pola(x,y)+15]=0;
}

void Tablica::__S__(int x, int y)
{
    plansza[konwerter_pola(x,y)]=1;
    plansza[konwerter_pola(x,y)+1]=1;
    plansza[konwerter_pola(x,y)+15]=1;
    plansza[konwerter_pola(x,y)+14]=1;
    //wyswietl_tablice();
    //cout<<konwerter_pola(x,y)<<"\n";
}

void Tablica::__S__DELETE(int x, int y)
{
    plansza[konwerter_pola(x,y)]=0;
    plansza[konwerter_pola(x,y)+1]=0;
    plansza[konwerter_pola(x,y)+15]=0;
    plansza[konwerter_pola(x,y)+14]=0;
}

void Tablica::__Z__(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=1;
    plansza[konwerter_pola(x,y)]=1;
    plansza[konwerter_pola(x,y)+15]=1;
    plansza[konwerter_pola(x,y)+16]=1;
    //wyswietl_tablice();
    //cout<<konwerter_pola(x,y)<<"\n";
}

void Tablica::__Z__DELETE(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=0;
    plansza[konwerter_pola(x,y)]=0;
    plansza[konwerter_pola(x,y)+15]=0;
    plansza[konwerter_pola(x,y)+16]=0;
}

void Tablica::__I__(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=1;
    plansza[konwerter_pola(x,y)+14]=1;
    plansza[konwerter_pola(x,y)+29]=1;
    plansza[konwerter_pola(x,y)+44]=1;
    // wyswietl_tablice();
    //cout<<konwerter_pola(x,y)<<"\n";
}

void Tablica::__I__DELETE(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=0;
    plansza[konwerter_pola(x,y)+14]=0;
    plansza[konwerter_pola(x,y)+29]=0;
    plansza[konwerter_pola(x,y)+44]=0;
}

void Tablica::__L__(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=1;
    plansza[konwerter_pola(x,y)+14]=1;
    plansza[konwerter_pola(x,y)+29]=1;
    plansza[konwerter_pola(x,y)+30]=1;
    // wyswietl_tablice();
    //cout<<konwerter_pola(x,y)<<"\n";
}

void Tablica::__L__DELETE(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=0;
    plansza[konwerter_pola(x,y)+14]=0;
    plansza[konwerter_pola(x,y)+29]=0;
    plansza[konwerter_pola(x,y)+30]=0;
}

void Tablica::__T__(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=1;
    plansza[konwerter_pola(x,y)]=1;
    plansza[konwerter_pola(x,y)+1]=1;
    plansza[konwerter_pola(x,y)+15]=1;
    //wyswietl_tablice();
    //cout<<konwerter_pola(x,y)<<"\n";
}

void Tablica::__T__DELETE(int x, int y)
{
    plansza[konwerter_pola(x,y)-1]=0;
    plansza[konwerter_pola(x,y)]=0;
    plansza[konwerter_pola(x,y)+1]=0;
    plansza[konwerter_pola(x,y)+15]=0;
}

void Tablica::__J__(int x, int y)
{
    plansza[konwerter_pola(x,y)]=1;
    plansza[konwerter_pola(x,y)+15]=1;
    plansza[konwerter_pola(x,y)+30]=1;
    plansza[konwerter_pola(x,y)+29]=1;
    //wyswietl_tablice();
    //cout<<konwerter_pola(x,y)<<"\n";
}

void Tablica::__J__DELETE(int x, int y)
{
    plansza[konwerter_pola(x,y)]=0;
    plansza[konwerter_pola(x,y)+15]=0;
    plansza[konwerter_pola(x,y)+30]=0;
    plansza[konwerter_pola(x,y)+29]=0;
}

void Tablica::kolizje(int x,int y)
{
    /// Kolizje w lewo
    if( plansza[konwerter_pola(x,y)-2]==0 && plansza[konwerter_pola(x,y)+13]==0 )
        f_O_L=false;
    else
        f_O_L=true;

    if( plansza[konwerter_pola(x,y)-1]==0 && plansza[konwerter_pola(x,y)+13]==0 )
        f_S_0_L=false;
    else
        f_S_0_L=true;

    if( plansza[konwerter_pola(x,y)-2]==0 && plansza[konwerter_pola(x,y)+14]==0 )
        f_Z_0_L=false;
    else
        f_Z_0_L=true;

    if( plansza[konwerter_pola(x,y)-2]==0 && plansza[konwerter_pola(x,y)+13]==0 && plansza[konwerter_pola(x,y)+28]==0 && plansza[konwerter_pola(x,y)+43]==0 )
        f_I_0_L=false;
    else
        f_I_0_L=true;

    if( plansza[konwerter_pola(x,y)-2]==0 && plansza[konwerter_pola(x,y)+13]==0 && plansza[konwerter_pola(x,y)+28]==0 )
        f_L_0_L=false;
    else
        f_L_0_L=true;

    if( plansza[konwerter_pola(x,y)-2]==0 && plansza[konwerter_pola(x,y)+14]==0 )
        f_T_0_L=false;
    else
        f_T_0_L=true;

    if( plansza[konwerter_pola(x,y)-1]==0 && plansza[konwerter_pola(x,y)+14]==0 && plansza[konwerter_pola(x,y)+28]==0 )
        f_J_0_L=false;
    else
        f_J_0_L=true;



    /// Kolizje w prawo
    if( plansza[konwerter_pola(x,y)+1]==0 && plansza[konwerter_pola(x,y)+16]==0 )
        f_O_P=false;
    else
        f_O_P=true;

    if( plansza[konwerter_pola(x,y)+2]==0 && plansza[konwerter_pola(x,y)+16]==0 )
        f_S_0_P=false;
    else
        f_S_0_P=true;

    if( plansza[konwerter_pola(x,y)+1]==0 && plansza[konwerter_pola(x,y)+17]==0 )
        f_Z_0_P=false;
    else
        f_Z_0_P=true;

    if( plansza[konwerter_pola(x,y)]==0 && plansza[konwerter_pola(x,y)+15]==0 && plansza[konwerter_pola(x,y)+30]==0 && plansza[konwerter_pola(x,y)+45]==0 )
        f_I_0_P=false;
    else
        f_I_0_P=true;

    if( plansza[konwerter_pola(x,y)]==0 && plansza[konwerter_pola(x,y)+15]==0 && plansza[konwerter_pola(x,y)+31]==0 )
        f_L_0_P=false;
    else
        f_L_0_P=true;

    if( plansza[konwerter_pola(x,y)+2]==0 && plansza[konwerter_pola(x,y)+16]==0 )
        f_T_0_P=false;
    else
        f_T_0_P=true;

    if( plansza[konwerter_pola(x,y)+1]==0 && plansza[konwerter_pola(x,y)+16]==0 && plansza[konwerter_pola(x,y)+31]==0 )
        f_J_0_P=false;
    else
        f_J_0_P=true;




    /// Kolizje w dół
    if( plansza[konwerter_pola(x,y)+29]==0 && plansza[konwerter_pola(x,y)+30]==0 )
        f_O_D=false;
    else
        f_O_D=true;

    if( plansza[konwerter_pola(x,y)+16]==0 && plansza[konwerter_pola(x,y)+29]==0 && plansza[konwerter_pola(x,y)+30]==0 )
        f_S_0_D=false;
    else
        f_S_0_D=true;

    if( plansza[konwerter_pola(x,y)+14]==0 && plansza[konwerter_pola(x,y)+30]==0 && plansza[konwerter_pola(x,y)+31]==0 )
        f_Z_0_D=false;
    else
        f_Z_0_D=true;

    if( plansza[konwerter_pola(x,y)+59]==0 )
        f_I_0_D=false;
    else
        f_I_0_D=true;

    if( plansza[konwerter_pola(x,y)+44]==0 && plansza[konwerter_pola(x,y)+45]==0 )
        f_L_0_D=false;
    else
        f_L_0_D=true;

    if( plansza[konwerter_pola(x,y)+14]==0 && plansza[konwerter_pola(x,y)+16]==0 && plansza[konwerter_pola(x,y)+30]==0 )
        f_T_0_D=false;
    else
        f_T_0_D=true;

    if( plansza[konwerter_pola(x,y)+44]==0 && plansza[konwerter_pola(x,y)+45]==0 )
        f_J_0_D=false;
    else
        f_J_0_D=true;

}

void Tablica::wyczysc_tablice()
{
    for(int i=0; i<390; i++)
    {
        plansza[i]=0;
    }
}

void Tablica::wyswietl_tablice()
{
    system( "cls" );
    int tmp=-3;
    for(int i=0; i<390; i++)
    {
        if(i%15==0 && i!=0)
        {
            cout<<" | "<<tmp<<"\n";
            tmp++;
        }
        cout<<plansza[i]<<". ";
    }
    cout<<" | "<<tmp<<"\n";
    cout<<"______________________________________________\n";
    cout<<"1  2  3  4  5  6  7  8  9  10 11 12 13 14 15\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

int Tablica::konwerter_pola(int x, int y)
{
    if(y>=-107 && y<=-82)
    {
        if(x>=135 && x<=160)
            return 1;
        if(x>=162 && x<=187)
            return 2;
        if(x>=189 && x<=214)
            return 3;
        if(x>=216 && x<=241)
            return 4;
        if(x>=243 && x<=268)
            return 5;
        if(x>=270 && x<=295)
            return 6;
        if(x>=297 && x<=322)
            return 7;
        if(x>=324 && x<=349)
            return 8;
        if(x>=351 && x<=376)
            return 9;
        if(x>=378 && x<=403)
            return 10;
        if(x>=405 && x<=430)
            return 11;
        if(x>=432 && x<=457)
            return 12;
        if(x>=459 && x<=484)
            return 13;
        if(x>=486 && x<=511)
            return 14;
        if(x>=513 && x<=538)
            return 15;
    }
    if(y>=-80 && y<=-55)
    {
        if(x>=135 && x<=160)
            return 16;
        if(x>=162 && x<=187)
            return 17;
        if(x>=189 && x<=214)
            return 18;
        if(x>=216 && x<=241)
            return 19;
        if(x>=243 && x<=268)
            return 20;
        if(x>=270 && x<=295)
            return 21;
        if(x>=297 && x<=322)
            return 22;
        if(x>=324 && x<=349)
            return 23;
        if(x>=351 && x<=376)
            return 24;
        if(x>=378 && x<=403)
            return 25;
        if(x>=405 && x<=430)
            return 26;
        if(x>=432 && x<=457)
            return 27;
        if(x>=459 && x<=484)
            return 28;
        if(x>=486 && x<=511)
            return 29;
        if(x>=513 && x<=538)
            return 30;
    }
    if(y>=-53 && y<=-28)
    {
        if(x>=135 && x<=160)
            return 31;
        if(x>=162 && x<=187)
            return 32;
        if(x>=189 && x<=214)
            return 33;
        if(x>=216 && x<=241)
            return 34;
        if(x>=243 && x<=268)
            return 35;
        if(x>=270 && x<=295)
            return 36;
        if(x>=297 && x<=322)
            return 37;
        if(x>=324 && x<=349)
            return 38;
        if(x>=351 && x<=376)
            return 39;
        if(x>=378 && x<=403)
            return 40;
        if(x>=405 && x<=430)
            return 41;
        if(x>=432 && x<=457)
            return 42;
        if(x>=459 && x<=484)
            return 43;
        if(x>=486 && x<=511)
            return 44;
        if(x>=513 && x<=538)
            return 45;
    }
    if(y>=-26 && y<=-1)
    {
        if(x>=135 && x<=160)
            return 46;
        if(x>=162 && x<=187)
            return 47;
        if(x>=189 && x<=214)
            return 48;
        if(x>=216 && x<=241)
            return 49;
        if(x>=243 && x<=268)
            return 50;
        if(x>=270 && x<=295)
            return 51;
        if(x>=297 && x<=322)
            return 52;
        if(x>=324 && x<=349)
            return 53;
        if(x>=351 && x<=376)
            return 54;
        if(x>=378 && x<=403)
            return 55;
        if(x>=405 && x<=430)
            return 56;
        if(x>=432 && x<=457)
            return 57;
        if(x>=459 && x<=484)
            return 58;
        if(x>=486 && x<=511)
            return 59;
        if(x>=513 && x<=538)
            return 60;
    }
    if(y>=1 && y<=26)
    {
        if(x>=135 && x<=160)
            return 61;
        if(x>=162 && x<=187)
            return 62;
        if(x>=189 && x<=214)
            return 63;
        if(x>=216 && x<=241)
            return 64;
        if(x>=243 && x<=268)
            return 65;
        if(x>=270 && x<=295)
            return 66;
        if(x>=297 && x<=322)
            return 67;
        if(x>=324 && x<=349)
            return 68;
        if(x>=351 && x<=376)
            return 69;
        if(x>=378 && x<=403)
            return 70;
        if(x>=405 && x<=430)
            return 71;
        if(x>=432 && x<=457)
            return 72;
        if(x>=459 && x<=484)
            return 73;
        if(x>=486 && x<=511)
            return 74;
        if(x>=513 && x<=538)
            return 75;
    }
    if(y>=28 && y<=53)
    {
        if(x>=135 && x<=160)
            return 76;
        if(x>=162 && x<=187)
            return 77;
        if(x>=189 && x<=214)
            return 78;
        if(x>=216 && x<=241)
            return 79;
        if(x>=243 && x<=268)
            return 80;
        if(x>=270 && x<=295)
            return 81;
        if(x>=297 && x<=322)
            return 82;
        if(x>=324 && x<=349)
            return 83;
        if(x>=351 && x<=376)
            return 84;
        if(x>=378 && x<=403)
            return 85;
        if(x>=405 && x<=430)
            return 86;
        if(x>=432 && x<=457)
            return 87;
        if(x>=459 && x<=484)
            return 88;
        if(x>=486 && x<=511)
            return 89;
        if(x>=513 && x<=538)
            return 90;
    }
    if(y>=55 && y<=80)
    {
        if(x>=135 && x<=160)
            return 91;
        if(x>=162 && x<=187)
            return 92;
        if(x>=189 && x<=214)
            return 93;
        if(x>=216 && x<=241)
            return 94;
        if(x>=243 && x<=268)
            return 95;
        if(x>=270 && x<=295)
            return 96;
        if(x>=297 && x<=322)
            return 97;
        if(x>=324 && x<=349)
            return 98;
        if(x>=351 && x<=376)
            return 99;
        if(x>=378 && x<=403)
            return 100;
        if(x>=405 && x<=430)
            return 101;
        if(x>=432 && x<=457)
            return 102;
        if(x>=459 && x<=484)
            return 103;
        if(x>=486 && x<=511)
            return 104;
        if(x>=513 && x<=538)
            return 105;
    }
    if(y>=82 && y<=107)
    {
        if(x>=135 && x<=160)
            return 106;
        if(x>=162 && x<=187)
            return 107;
        if(x>=189 && x<=214)
            return 108;
        if(x>=216 && x<=241)
            return 109;
        if(x>=243 && x<=268)
            return 110;
        if(x>=270 && x<=295)
            return 111;
        if(x>=297 && x<=322)
            return 112;
        if(x>=324 && x<=349)
            return 113;
        if(x>=351 && x<=376)
            return 114;
        if(x>=378 && x<=403)
            return 115;
        if(x>=405 && x<=430)
            return 116;
        if(x>=432 && x<=457)
            return 117;
        if(x>=459 && x<=484)
            return 118;
        if(x>=486 && x<=511)
            return 119;
        if(x>=513 && x<=538)
            return 120;
    }
    if(y>=109 && y<=134)
    {
        if(x>=135 && x<=160)
            return 121;
        if(x>=162 && x<=187)
            return 122;
        if(x>=189 && x<=214)
            return 123;
        if(x>=216 && x<=241)
            return 124;
        if(x>=243 && x<=268)
            return 125;
        if(x>=270 && x<=295)
            return 126;
        if(x>=297 && x<=322)
            return 127;
        if(x>=324 && x<=349)
            return 128;
        if(x>=351 && x<=376)
            return 129;
        if(x>=378 && x<=403)
            return 130;
        if(x>=405 && x<=430)
            return 131;
        if(x>=432 && x<=457)
            return 132;
        if(x>=459 && x<=484)
            return 133;
        if(x>=486 && x<=511)
            return 134;
        if(x>=513 && x<=538)
            return 135;
    }
    if(y>=136 && y<=161)
    {
        if(x>=135 && x<=160)
            return 136;
        if(x>=162 && x<=187)
            return 137;
        if(x>=189 && x<=214)
            return 138;
        if(x>=216 && x<=241)
            return 139;
        if(x>=243 && x<=268)
            return 140;
        if(x>=270 && x<=295)
            return 141;
        if(x>=297 && x<=322)
            return 142;
        if(x>=324 && x<=349)
            return 143;
        if(x>=351 && x<=376)
            return 144;
        if(x>=378 && x<=403)
            return 145;
        if(x>=405 && x<=430)
            return 146;
        if(x>=432 && x<=457)
            return 147;
        if(x>=459 && x<=484)
            return 148;
        if(x>=486 && x<=511)
            return 149;
        if(x>=513 && x<=538)
            return 150;
    }
    if(y>=163 && y<=188)
    {
        if(x>=135 && x<=160)
            return 151;
        if(x>=162 && x<=187)
            return 152;
        if(x>=189 && x<=214)
            return 153;
        if(x>=216 && x<=241)
            return 154;
        if(x>=243 && x<=268)
            return 155;
        if(x>=270 && x<=295)
            return 156;
        if(x>=297 && x<=322)
            return 157;
        if(x>=324 && x<=349)
            return 158;
        if(x>=351 && x<=376)
            return 159;
        if(x>=378 && x<=403)
            return 160;
        if(x>=405 && x<=430)
            return 161;
        if(x>=432 && x<=457)
            return 162;
        if(x>=459 && x<=484)
            return 163;
        if(x>=486 && x<=511)
            return 164;
        if(x>=513 && x<=538)
            return 165;
    }
    if(y>=190 && y<=215)
    {
        if(x>=135 && x<=160)
            return 166;
        if(x>=162 && x<=187)
            return 167;
        if(x>=189 && x<=214)
            return 168;
        if(x>=216 && x<=241)
            return 169;
        if(x>=243 && x<=268)
            return 170;
        if(x>=270 && x<=295)
            return 171;
        if(x>=297 && x<=322)
            return 172;
        if(x>=324 && x<=349)
            return 173;
        if(x>=351 && x<=376)
            return 174;
        if(x>=378 && x<=403)
            return 175;
        if(x>=405 && x<=430)
            return 176;
        if(x>=432 && x<=457)
            return 177;
        if(x>=459 && x<=484)
            return 178;
        if(x>=486 && x<=511)
            return 179;
        if(x>=513 && x<=538)
            return 180;
    }
    if(y>=217 && y<=242)
    {
        if(x>=135 && x<=160)
            return 181;
        if(x>=162 && x<=187)
            return 182;
        if(x>=189 && x<=214)
            return 183;
        if(x>=216 && x<=241)
            return 184;
        if(x>=243 && x<=268)
            return 185;
        if(x>=270 && x<=295)
            return 186;
        if(x>=297 && x<=322)
            return 187;
        if(x>=324 && x<=349)
            return 188;
        if(x>=351 && x<=376)
            return 189;
        if(x>=378 && x<=403)
            return 190;
        if(x>=405 && x<=430)
            return 191;
        if(x>=432 && x<=457)
            return 192;
        if(x>=459 && x<=484)
            return 193;
        if(x>=486 && x<=511)
            return 194;
        if(x>=513 && x<=538)
            return 195;
    }
    if(y>=244 && y<=269)
    {
        if(x>=135 && x<=160)
            return 196;
        if(x>=162 && x<=187)
            return 197;
        if(x>=189 && x<=214)
            return 198;
        if(x>=216 && x<=241)
            return 199;
        if(x>=243 && x<=268)
            return 200;
        if(x>=270 && x<=295)
            return 201;
        if(x>=297 && x<=322)
            return 202;
        if(x>=324 && x<=349)
            return 203;
        if(x>=351 && x<=376)
            return 204;
        if(x>=378 && x<=403)
            return 205;
        if(x>=405 && x<=430)
            return 206;
        if(x>=432 && x<=457)
            return 207;
        if(x>=459 && x<=484)
            return 208;
        if(x>=486 && x<=511)
            return 209;
        if(x>=513 && x<=538)
            return 210;
    }
    if(y>=271 && y<=296)
    {
        if(x>=135 && x<=160)
            return 211;
        if(x>=162 && x<=187)
            return 212;
        if(x>=189 && x<=214)
            return 213;
        if(x>=216 && x<=241)
            return 214;
        if(x>=243 && x<=268)
            return 215;
        if(x>=270 && x<=295)
            return 216;
        if(x>=297 && x<=322)
            return 217;
        if(x>=324 && x<=349)
            return 218;
        if(x>=351 && x<=376)
            return 219;
        if(x>=378 && x<=403)
            return 220;
        if(x>=405 && x<=430)
            return 221;
        if(x>=432 && x<=457)
            return 222;
        if(x>=459 && x<=484)
            return 223;
        if(x>=486 && x<=511)
            return 224;
        if(x>=513 && x<=538)
            return 225;
    }
    if(y>=298 && y<=323)
    {
        if(x>=135 && x<=160)
            return 226;
        if(x>=162 && x<=187)
            return 227;
        if(x>=189 && x<=214)
            return 228;
        if(x>=216 && x<=241)
            return 229;
        if(x>=243 && x<=268)
            return 230;
        if(x>=270 && x<=295)
            return 231;
        if(x>=297 && x<=322)
            return 232;
        if(x>=324 && x<=349)
            return 233;
        if(x>=351 && x<=376)
            return 234;
        if(x>=378 && x<=403)
            return 235;
        if(x>=405 && x<=430)
            return 236;
        if(x>=432 && x<=457)
            return 237;
        if(x>=459 && x<=484)
            return 238;
        if(x>=486 && x<=511)
            return 239;
        if(x>=513 && x<=538)
            return 240;
    }
    if(y>=325 && y<=350)
    {
        if(x>=135 && x<=160)
            return 241;
        if(x>=162 && x<=187)
            return 242;
        if(x>=189 && x<=214)
            return 243;
        if(x>=216 && x<=241)
            return 244;
        if(x>=243 && x<=268)
            return 245;
        if(x>=270 && x<=295)
            return 246;
        if(x>=297 && x<=322)
            return 247;
        if(x>=324 && x<=349)
            return 248;
        if(x>=351 && x<=376)
            return 249;
        if(x>=378 && x<=403)
            return 250;
        if(x>=405 && x<=430)
            return 251;
        if(x>=432 && x<=457)
            return 252;
        if(x>=459 && x<=484)
            return 253;
        if(x>=486 && x<=511)
            return 254;
        if(x>=513 && x<=538)
            return 255;
    }
    if(y>=352 && y<=377)
    {
        if(x>=135 && x<=160)
            return 256;
        if(x>=162 && x<=187)
            return 257;
        if(x>=189 && x<=214)
            return 258;
        if(x>=216 && x<=241)
            return 259;
        if(x>=243 && x<=268)
            return 260;
        if(x>=270 && x<=295)
            return 261;
        if(x>=297 && x<=322)
            return 262;
        if(x>=324 && x<=349)
            return 263;
        if(x>=351 && x<=376)
            return 264;
        if(x>=378 && x<=403)
            return 265;
        if(x>=405 && x<=430)
            return 266;
        if(x>=432 && x<=457)
            return 267;
        if(x>=459 && x<=484)
            return 268;
        if(x>=486 && x<=511)
            return 269;
        if(x>=513 && x<=538)
            return 270;
    }
    if(y>=379 && y<=404)
    {
        if(x>=135 && x<=160)
            return 271;
        if(x>=162 && x<=187)
            return 272;
        if(x>=189 && x<=214)
            return 273;
        if(x>=216 && x<=241)
            return 274;
        if(x>=243 && x<=268)
            return 275;
        if(x>=270 && x<=295)
            return 276;
        if(x>=297 && x<=322)
            return 277;
        if(x>=324 && x<=349)
            return 278;
        if(x>=351 && x<=376)
            return 279;
        if(x>=378 && x<=403)
            return 280;
        if(x>=405 && x<=430)
            return 281;
        if(x>=432 && x<=457)
            return 282;
        if(x>=459 && x<=484)
            return 283;
        if(x>=486 && x<=511)
            return 284;
        if(x>=513 && x<=538)
            return 285;
    }
    if(y>=406 && y<=431)
    {
        if(x>=135 && x<=160)
            return 286;
        if(x>=162 && x<=187)
            return 287;
        if(x>=189 && x<=214)
            return 288;
        if(x>=216 && x<=241)
            return 289;
        if(x>=243 && x<=268)
            return 290;
        if(x>=270 && x<=295)
            return 291;
        if(x>=297 && x<=322)
            return 292;
        if(x>=324 && x<=349)
            return 293;
        if(x>=351 && x<=376)
            return 294;
        if(x>=378 && x<=403)
            return 295;
        if(x>=405 && x<=430)
            return 296;
        if(x>=432 && x<=457)
            return 297;
        if(x>=459 && x<=484)
            return 298;
        if(x>=486 && x<=511)
            return 299;
        if(x>=513 && x<=538)
            return 300;
    }
    if(y>=433 && y<=458)
    {
        if(x>=135 && x<=160)
            return 301;
        if(x>=162 && x<=187)
            return 302;
        if(x>=189 && x<=214)
            return 303;
        if(x>=216 && x<=241)
            return 304;
        if(x>=243 && x<=268)
            return 305;
        if(x>=270 && x<=295)
            return 306;
        if(x>=297 && x<=322)
            return 307;
        if(x>=324 && x<=349)
            return 308;
        if(x>=351 && x<=376)
            return 309;
        if(x>=378 && x<=403)
            return 310;
        if(x>=405 && x<=430)
            return 311;
        if(x>=432 && x<=457)
            return 312;
        if(x>=459 && x<=484)
            return 313;
        if(x>=486 && x<=511)
            return 314;
        if(x>=513 && x<=538)
            return 315;
    }
    if(y>=460 && y<=485)
    {
        if(x>=135 && x<=160)
            return 316;
        if(x>=162 && x<=187)
            return 317;
        if(x>=189 && x<=214)
            return 318;
        if(x>=216 && x<=241)
            return 319;
        if(x>=243 && x<=268)
            return 320;
        if(x>=270 && x<=295)
            return 321;
        if(x>=297 && x<=322)
            return 322;
        if(x>=324 && x<=349)
            return 323;
        if(x>=351 && x<=376)
            return 324;
        if(x>=378 && x<=403)
            return 325;
        if(x>=405 && x<=430)
            return 326;
        if(x>=432 && x<=457)
            return 327;
        if(x>=459 && x<=484)
            return 328;
        if(x>=486 && x<=511)
            return 329;
        if(x>=513 && x<=538)
            return 330;
    }
    if(y>=487 && y<=512)
    {
        if(x>=135 && x<=160)
            return 331;
        if(x>=162 && x<=187)
            return 332;
        if(x>=189 && x<=214)
            return 333;
        if(x>=216 && x<=241)
            return 334;
        if(x>=243 && x<=268)
            return 335;
        if(x>=270 && x<=295)
            return 336;
        if(x>=297 && x<=322)
            return 337;
        if(x>=324 && x<=349)
            return 338;
        if(x>=351 && x<=376)
            return 339;
        if(x>=378 && x<=403)
            return 340;
        if(x>=405 && x<=430)
            return 341;
        if(x>=432 && x<=457)
            return 342;
        if(x>=459 && x<=484)
            return 343;
        if(x>=486 && x<=511)
            return 344;
        if(x>=513 && x<=538)
            return 345;
    }
    if(y>=514 && y<=539)
    {
        if(x>=135 && x<=160)
            return 346;
        if(x>=162 && x<=187)
            return 347;
        if(x>=189 && x<=214)
            return 348;
        if(x>=216 && x<=241)
            return 349;
        if(x>=243 && x<=268)
            return 350;
        if(x>=270 && x<=295)
            return 351;
        if(x>=297 && x<=322)
            return 352;
        if(x>=324 && x<=349)
            return 353;
        if(x>=351 && x<=376)
            return 354;
        if(x>=378 && x<=403)
            return 355;
        if(x>=405 && x<=430)
            return 356;
        if(x>=432 && x<=457)
            return 357;
        if(x>=459 && x<=484)
            return 358;
        if(x>=486 && x<=511)
            return 359;
        if(x>=513 && x<=538)
            return 360;
    }
    if(y>=541 && y<=566)
    {
        if(x>=135 && x<=160)
            return 361; ///360
        if(x>=162 && x<=187)
            return 362;
        if(x>=189 && x<=214)
            return 363;
        if(x>=216 && x<=241)
            return 364;
        if(x>=243 && x<=268)
            return 365;
        if(x>=270 && x<=295)
            return 366;
        if(x>=297 && x<=322)
            return 367;
        if(x>=324 && x<=349)
            return 368;
        if(x>=351 && x<=376)
            return 369;
        if(x>=378 && x<=403)
            return 370;
        if(x>=405 && x<=430)
            return 371;
        if(x>=432 && x<=457)
            return 372;
        if(x>=459 && x<=484)
            return 373;
        if(x>=486 && x<=511)
            return 374;
        if(x>=513 && x<=538)
            return 375; ///374
    }
    if(y>=568 && y<=593)
    {
        if(x>=135 && x<=160)
            return 376;
        if(x>=162 && x<=187)
            return 377;
        if(x>=189 && x<=214)
            return 378;
        if(x>=216 && x<=241)
            return 379;
        if(x>=243 && x<=268)
            return 380;
        if(x>=270 && x<=295)
            return 381;
        if(x>=297 && x<=322)
            return 382;
        if(x>=324 && x<=349)
            return 383;
        if(x>=351 && x<=376)
            return 384;
        if(x>=378 && x<=403)
            return 385;
        if(x>=405 && x<=430)
            return 386;
        if(x>=432 && x<=457)
            return 387;
        if(x>=459 && x<=484)
            return 388;
        if(x>=486 && x<=511)
            return 389;
        if(x>=513 && x<=538)
            return 390;
    }
}

