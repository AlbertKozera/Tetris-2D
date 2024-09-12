#ifndef Tablica_hpp
#define Tablica_hpp

using namespace std;

class Tablica
{
public:
    Tablica()
    {
        x=koordy_x[rand()%8];           //Losowanie koordynatów startowych
        y=-107;                           // Startowy y-wysokosc kształtu
        losowanie = (rand() % 7) + 1;   //Losowanie kształtu
        srand( time( NULL ) );
        f_I_0_L=false;f_J_0_L=false;f_L_0_L=false;f_O_L=false;f_S_0_L=false;f_T_0_L=false;f_Z_0_L=false;
        f_I_0_P=false;f_J_0_P=false;f_L_0_P=false;f_O_P=false;f_S_0_P=false;f_T_0_P=false;f_Z_0_P=false;
        f_I_0_D=false;f_J_0_D=false;f_L_0_D=false;f_O_D=false;f_S_0_D=false;f_T_0_D=false;f_Z_0_D=false;
        tmp_0=0;tmp_1=0;tmp_2=0;tmp_3=0;tmp_4=0;tmp_5=0;tmp_6=0;tmp_7=0;tmp_8=0;tmp_9=0;tmp_10=0;tmp_11=0;
        tmp_12=0;tmp_13=0;tmp_14=0;tmp_15=0;tmp_16=0;tmp_17=0;tmp_18=0;tmp_19=0;tmp_20=0;tmp_21=0;tmp_22=0;
        f_wiersz_0=false;f_wiersz_1=false;f_wiersz_2=false;f_wiersz_3=false;f_wiersz_4=false;f_wiersz_5=false;f_wiersz_6=false;f_wiersz_7=false;f_wiersz_8=false;f_wiersz_9=false;f_wiersz_10=false;f_wiersz_11=false;
        f_wiersz_12=false;f_wiersz_13=false;f_wiersz_14=false;f_wiersz_15=false;f_wiersz_16=false;f_wiersz_17=false;f_wiersz_18=false;f_wiersz_19=false;f_wiersz_20=false;f_wiersz_21=false;f_wiersz_22=false;
    }
    BITMAP * _O_ = NULL;
    BITMAP * _O_DELETE = NULL;
    BITMAP * _I_0_ = NULL;
    BITMAP * _I_0_DELETE = NULL;
    BITMAP * _I_1_ = NULL;
    BITMAP * _I_1_DELETE = NULL;
    BITMAP * _J_0_ = NULL;
    BITMAP * _J_0_DELETE = NULL;
    BITMAP * _J_1_ = NULL;
    BITMAP * _J_1_DELETE = NULL;
    BITMAP * _J_2_ = NULL;
    BITMAP * _J_2_DELETE = NULL;
    BITMAP * _J_3_ = NULL;
    BITMAP * _J_3_DELETE = NULL;
    BITMAP * _L_0_ = NULL;
    BITMAP * _L_0_DELETE = NULL;
    BITMAP * _L_1_ = NULL;
    BITMAP * _L_1_DELETE = NULL;
    BITMAP * _L_2_ = NULL;
    BITMAP * _L_2_DELETE = NULL;
    BITMAP * _L_3_ = NULL;
    BITMAP * _L_3_DELETE = NULL;
    BITMAP * _S_0_ = NULL;
    BITMAP * _S_0_DELETE = NULL;
    BITMAP * _S_1_ = NULL;
    BITMAP * _S_1_DELETE = NULL;
    BITMAP * _T_0_ = NULL;
    BITMAP * _T_0_DELETE = NULL;
    BITMAP * _T_1_ = NULL;
    BITMAP * _T_1_DELETE = NULL;
    BITMAP * _T_2_ = NULL;
    BITMAP * _T_2_DELETE = NULL;
    BITMAP * _T_3_ = NULL;
    BITMAP * _T_3_DELETE = NULL;
    BITMAP * _Z_0_ = NULL;
    BITMAP * _Z_0_DELETE = NULL;
    BITMAP * _Z_1_ = NULL;
    BITMAP * _Z_1_DELETE = NULL;
    BITMAP * tmp_czyszczenie = NULL;
    BITMAP * tmp_rysowanie = NULL;
    BITMAP * next_DELETE = NULL;
    BITMAP * copy_screen = NULL;

    int x;
    int y;
    bool f_uzupelnienie;
    bool f_next;
    bool f_I_0_L,f_J_0_L,f_L_0_L,f_O_L,f_S_0_L,f_T_0_L,f_Z_0_L;
    bool f_I_0_P,f_J_0_P,f_L_0_P,f_O_P,f_S_0_P,f_T_0_P,f_Z_0_P;
    bool f_I_0_D,f_J_0_D,f_L_0_D,f_O_D,f_S_0_D,f_T_0_D,f_Z_0_D;
    int tmp_0,tmp_1,tmp_2,tmp_3,tmp_4,tmp_5,tmp_6,tmp_7,tmp_8,tmp_9,tmp_10,tmp_11,tmp_12,tmp_13,tmp_14,tmp_15,tmp_16,tmp_17,tmp_18,tmp_19,tmp_20,tmp_21,tmp_22;
    bool f_wiersz_0,f_wiersz_1,f_wiersz_2,f_wiersz_3,f_wiersz_4,f_wiersz_5,f_wiersz_6,f_wiersz_7,f_wiersz_8,f_wiersz_9,f_wiersz_10,f_wiersz_11,f_wiersz_12,f_wiersz_13,
    f_wiersz_14,f_wiersz_15,f_wiersz_16,f_wiersz_17,f_wiersz_18,f_wiersz_19,f_wiersz_20,f_wiersz_21,f_wiersz_22;
    int tmp_x_R; // kolizja œciany prawej w zale¿noœci od wylosowanego klocka
    int tmp_x_L; // kolizja œciany lewej w zale¿noœci od wylosowanego klocka
    int tmp_y;   // kolizja œciany dolnej w zale¿noœci od wylosowanego klocka
    int losowanie;
    int losowanie2;
    int koordy_x[8] = {243, 270, 297, 324, 351, 378, 405, 432};
    long int plansza[390] =
                {///    1  2  3  4  5  6  7  8  9  10 11 12 13 14 15
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///-3
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///-2
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///-1
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///0
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///1
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///2
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///3
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///4
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///5
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///6
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///7
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///8
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///9
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///10
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///11
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///12
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///13
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///14
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///15
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///16
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///17
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///18
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///19
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///20
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///21
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,///22
                };
    void __Z__(int x, int y); // Tetrimino „Z” – tetrimino „O” po przesunięciu dwóch górnych elementów w lewo
    void __O__(int x, int y); // Tetrimino „O” – cztery elementy połączone w kwadrat
    void __S__(int x, int y); // Tetrimino „S” – tetrimino „O” po przesunięciu dwóch górnych elementów w prawo
    void __J__(int x, int y); // Tetrimino „J” – trzy elementy w rzędzie i jeden dołączony do prawego elementu od spodu
    void __I__(int x, int y); // Tetrimino „I” – cztery elementy w jednym szeregu
    void __L__(int x, int y); // Tetrimino „L” – trzy elementy w rzędzie i jeden dołączony do lewego elementu od spodu
    void __T__(int x, int y); // Tetrimino „T” – trzy elementy w rzędzie i jeden dołączony do środkowego elementu
    void __Z__DELETE(int x, int y);
    void __O__DELETE(int x, int y);
    void __S__DELETE(int x, int y);
    void __J__DELETE(int x, int y);
    void __I__DELETE(int x, int y);
    void __L__DELETE(int x, int y);
    void __T__DELETE(int x, int y);

    void init();
    void gra();
    void poruszanie(BITMAP * czyszczenie, BITMAP * rysowanie);
    void opadanie();
    int konwerter_pola(int x, int y);
    void nastepny();
    void poprzedni();
    void wyswietl_tablice();
    void kolizje(int x, int y);
    void usun_wiersz();
    void aktualizuj_wiersz(int n);
    void wyczysc_tablice();

    virtual ~Tablica()
    {
        destroy_bitmap(_O_);
        destroy_bitmap(_O_DELETE);
        destroy_bitmap(_I_0_);
        destroy_bitmap(_I_0_DELETE);
        destroy_bitmap(_I_1_);
        destroy_bitmap(_I_1_DELETE);
        destroy_bitmap(_J_0_);
        destroy_bitmap(_J_0_DELETE);
        destroy_bitmap(_J_1_);
        destroy_bitmap(_J_1_DELETE);
        destroy_bitmap(_J_2_);
        destroy_bitmap(_J_2_DELETE);
        destroy_bitmap(_J_3_);
        destroy_bitmap(_J_3_DELETE);
        destroy_bitmap(_L_0_);
        destroy_bitmap(_L_0_DELETE);
        destroy_bitmap(_L_1_);
        destroy_bitmap(_L_1_DELETE);
        destroy_bitmap(_L_2_);
        destroy_bitmap(_L_2_DELETE);
        destroy_bitmap(_L_3_);
        destroy_bitmap(_L_3_DELETE);
        destroy_bitmap(_S_0_);
        destroy_bitmap(_S_0_DELETE);
        destroy_bitmap(_S_1_);
        destroy_bitmap(_S_1_DELETE);
        destroy_bitmap(_T_0_);
        destroy_bitmap(_T_0_DELETE);
        destroy_bitmap(_T_1_);
        destroy_bitmap(_T_1_DELETE);
        destroy_bitmap(_T_2_);
        destroy_bitmap(_T_2_DELETE);
        destroy_bitmap(_T_3_);
        destroy_bitmap(_T_3_DELETE);
        destroy_bitmap(_Z_0_);
        destroy_bitmap(_Z_0_DELETE);
        destroy_bitmap(_Z_1_);
        destroy_bitmap(_Z_1_DELETE);
        destroy_bitmap(next_DELETE);
    }
};
#endif
