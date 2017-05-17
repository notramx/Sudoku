#include "graphics.hpp"
#include "widgets.hpp"
#include "window.hpp"
#include <vector>
#include "time.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
using namespace genv;

class MyWindow : public Window
{
public :

  FunctorButton * kocka11;
    FunctorButton * kocka12;
    FunctorButton * kocka13;
    FunctorButton * kocka14;
    FunctorButton * kocka15;
    FunctorButton * kocka16;
    FunctorButton * kocka17;
    FunctorButton * kocka18;
    FunctorButton * kocka19;
    FunctorButton * kocka21;
    FunctorButton * kocka22;
    FunctorButton * kocka23;
    FunctorButton * kocka24;
    FunctorButton * kocka25;
    FunctorButton * kocka26;
    FunctorButton * kocka27;
    FunctorButton * kocka28;
    FunctorButton * kocka29;
    FunctorButton * kocka31;
    FunctorButton * kocka32;
    FunctorButton * kocka33;
    FunctorButton * kocka34;
    FunctorButton * kocka35;
    FunctorButton * kocka36;
    FunctorButton * kocka37;
    FunctorButton * kocka38;
    FunctorButton * kocka39;
    FunctorButton * kocka41;
    FunctorButton * kocka42;
    FunctorButton * kocka43;
    FunctorButton * kocka44;
    FunctorButton * kocka45;
    FunctorButton * kocka46;
    FunctorButton * kocka47;
    FunctorButton * kocka48;
    FunctorButton * kocka49;
    FunctorButton * kocka51;
    FunctorButton * kocka52;
    FunctorButton * kocka53;
    FunctorButton * kocka54;
    FunctorButton * kocka55;
    FunctorButton * kocka56;
    FunctorButton * kocka57;
    FunctorButton * kocka58;
    FunctorButton * kocka59;
    FunctorButton * kocka61;
    FunctorButton * kocka62;
    FunctorButton * kocka63;
    FunctorButton * kocka64;
    FunctorButton * kocka65;
    FunctorButton * kocka66;
    FunctorButton * kocka67;
    FunctorButton * kocka68;
    FunctorButton * kocka69;
    FunctorButton * kocka71;
    FunctorButton * kocka72;
    FunctorButton * kocka73;
    FunctorButton * kocka74;
    FunctorButton * kocka75;
    FunctorButton * kocka76;
    FunctorButton * kocka77;
    FunctorButton * kocka78;
    FunctorButton * kocka79;
    FunctorButton * kocka81;
    FunctorButton * kocka82;
    FunctorButton * kocka83;
    FunctorButton * kocka84;
    FunctorButton * kocka85;
    FunctorButton * kocka86;
    FunctorButton * kocka87;
    FunctorButton * kocka88;
    FunctorButton * kocka89;
    FunctorButton * kocka91;
    FunctorButton * kocka92;
    FunctorButton * kocka93;
    FunctorButton * kocka94;
    FunctorButton * kocka95;
    FunctorButton * kocka96;
    FunctorButton * kocka97;
    FunctorButton * kocka98;
    FunctorButton * kocka99;


    MyWindow() ;

    static void fv(Window *);
    void valami(){};

};


MyWindow::MyWindow()
{

     int d[9][9];
    int elem;



    for ( int i=0; i<9; i++)
    {

        for (int j=0; j<9; j++)
        {

           d[i][j]= rand()%9  + 1;

            {
                if(i!=0)
                {
                if(j!=0)
                {
                    if(
                        d[i-1][j]==d[i][j]||
                        d[i-2][j]==d[i][j]||
                        d[i-3][j]==d[i][j]||
                        d[i-4][j]==d[i][j]||
                        d[i-5][j]==d[i][j]||
                        d[i-6][j]==d[i][j]||
                        d[i-7][j]==d[i][j]||
                        d[i-8][j]==d[i][j]||
                        d[i][j-1]==d[i][j]||
                        d[i][j-2]==d[i][j]||
                        d[i][j-3]==d[i][j]||
                        d[i][j-4]==d[i][j]||
                        d[i][j-5]==d[i][j]||
                        d[i][j-6]==d[i][j]||
                        d[i][j-7]==d[i][j]||
                        d[i][j-8]==d[i][j]
                    )
                    {
                        d[i][j] =rand()%9  + 1;

                    }
                }
            }
        }
    }}

    kocka11 = new FunctorButton(30,30,40,40,1,9,d[0][0],[this]()
    {
        this->valami();
    });
    kocka12 = new FunctorButton(75,30,40,40,1,9,d[0][1],[this]()
    {
        this->valami();
    });
    kocka13 = new FunctorButton(120,30,40,40,1,9,d[0][2],[this]()
    {
        this->valami();
    });
    kocka14 = new FunctorButton(170,30,40,40,1,9,d[0][3],[this]()
    {
        this->valami();
    });
    kocka15 = new FunctorButton(215,30,40,40,1,9,d[0][4],[this]()
    {
        this->valami();
    });
    kocka16 = new FunctorButton(260,30,40,40,1,9,d[0][5],[this]()
    {
        this->valami();
    });
    kocka17 = new FunctorButton(310,30,40,40,1,9,d[0][6],[this]()
    {
        this->valami();
    });
    kocka18 = new FunctorButton(355,30,40,40,1,9,d[0][7],[this]()
    {
        this->valami();
    });
    kocka19 = new FunctorButton(400,30,40,40,1,9,d[0][8],[this]()
    {
        this->valami();
    });

    kocka21 = new FunctorButton(30,75,40,40,1,9,d[1][0],[this]()
    {
        this->valami();
    });
    kocka22 = new FunctorButton(75,75,40,40,1,9,d[1][1],[this]()
    {
        this->valami();
    });
    kocka23 = new FunctorButton(120,75,40,40,1,9,d[1][2],[this]()
    {
        this->valami();
    });
    kocka24 = new FunctorButton(170,75,40,40,1,9,d[1][3],[this]()
    {
        this->valami();
    });
    kocka25 = new FunctorButton(215,75,40,40,1,9,d[1][4],[this]()
    {
        this->valami();
    });
    kocka26 = new FunctorButton(260,75,40,40,1,9,d[1][5],[this]()
    {
        this->valami();
    });
    kocka27 = new FunctorButton(310,75,40,40,1,9,d[1][6],[this]()
    {
        this->valami();
    });
    kocka28 = new FunctorButton(355,75,40,40,1,9,d[1][7],[this]()
    {
        this->valami();
    });
    kocka29 = new FunctorButton(400,75,40,40,1,9,d[1][8],[this]()
    {
        this->valami();
    });

    kocka31 = new FunctorButton(30,120,40,40,1,9,d[2][0],[this]()
    {
        this->valami();
    });
    kocka32 = new FunctorButton(75,120,40,40,1,9,d[2][1],[this]()
    {
        this->valami();
    });
    kocka33 = new FunctorButton(120,120,40,40,1,9,d[2][2],[this]()
    {
        this->valami();
    });
    kocka34 = new FunctorButton(170,120,40,40,1,9,d[2][3],[this]()
    {
        this->valami();
    });
    kocka35 = new FunctorButton(215,120,40,40,1,9,d[2][4],[this]()
    {
        this->valami();
    });
    kocka36 = new FunctorButton(260,120,40,40,1,9,d[2][5],[this]()
    {
        this->valami();
    });
    kocka37 = new FunctorButton(310,120,40,40,1,9,d[2][6],[this]()
    {
        this->valami();
    });
    kocka38 = new FunctorButton(355,120,40,40,1,9,d[2][7],[this]()
    {
        this->valami();
    });
    kocka39 = new FunctorButton(400,120,40,40,1,9,d[2][8],[this]()
    {
        this->valami();
    });

    kocka41 = new FunctorButton(30,170,40,40,1,9,d[3][0],[this]()
    {
        this->valami();
    });
    kocka42 = new FunctorButton(75,170,40,40,1,9,d[3][1],[this]()
    {
        this->valami();
    });
    kocka43 = new FunctorButton(120,170,40,40,1,9,d[3][2],[this]()
    {
        this->valami();
    });
    kocka44 = new FunctorButton(170,170,40,40,1,9,d[3][3],[this]()
    {
        this->valami();
    });
    kocka45 = new FunctorButton(215,170,40,40,1,9,d[3][4],[this]()
    {
        this->valami();
    });
    kocka46 = new FunctorButton(260,170,40,40,1,9,d[3][5],[this]()
    {
        this->valami();
    });
    kocka47 = new FunctorButton(310,170,40,40,1,9,d[3][6],[this]()
    {
        this->valami();
    });
    kocka48 = new FunctorButton(355,170,40,40,1,9,d[3][7],[this]()
    {
        this->valami();
    });
    kocka49 = new FunctorButton(400,170,40,40,1,9,d[3][8],[this]()
    {
        this->valami();
    });

    kocka51 = new FunctorButton(30,215,40,40,1,9,d[4][0],[this]()
    {
        this->valami();
    });
    kocka52 = new FunctorButton(75,215,40,40,1,9,d[4][1],[this]()
    {
        this->valami();
    });
    kocka53 = new FunctorButton(120,215,40,40,1,9,d[4][2],[this]()
    {
        this->valami();
    });
    kocka54 = new FunctorButton(170,215,40,40,1,9,d[4][3],[this]()
    {
        this->valami();
    });
    kocka55 = new FunctorButton(215,215,40,40,1,9,d[4][4],[this]()
    {
        this->valami();
    });
    kocka56 = new FunctorButton(260,215,40,40,1,9,d[4][5],[this]()
    {
        this->valami();
    });
    kocka57 = new FunctorButton(310,215,40,40,1,9,d[4][6],[this]()
    {
        this->valami();
    });
    kocka58 = new FunctorButton(355,215,40,40,1,9,d[4][7],[this]()
    {
        this->valami();
    });
    kocka59 = new FunctorButton(400,215,40,40,1,9,d[4][8],[this]()
    {
        this->valami();
    });

    kocka61 = new FunctorButton(30,260,40,40,1,9,d[5][0],[this]()
    {
        this->valami();
    });
    kocka62 = new FunctorButton(75,260,40,40,1,9,d[5][1],[this]()
    {
        this->valami();
    });
    kocka63 = new FunctorButton(120,260,40,40,1,9,d[5][2],[this]()
    {
        this->valami();
    });
    kocka64 = new FunctorButton(170,260,40,40,1,9,d[5][3],[this]()
    {
        this->valami();
    });
    kocka65 = new FunctorButton(215,260,40,40,1,9,d[5][4],[this]()
    {
        this->valami();
    });
    kocka66 = new FunctorButton(260,260,40,40,1,9,d[5][5],[this]()
    {
        this->valami();
    });
    kocka67 = new FunctorButton(310,260,40,40,1,9,d[5][6],[this]()
    {
        this->valami();
    });
    kocka68 = new FunctorButton(355,260,40,40,1,9,d[5][7],[this]()
    {
        this->valami();
    });
    kocka69 = new FunctorButton(400,260,40,40,1,9,d[5][8],[this]()
    {
        this->valami();
    });

    kocka71 = new FunctorButton(30,310,40,40,1,9,d[6][0],[this]()
    {
        this->valami();
    });
    kocka72 = new FunctorButton(75,310,40,40,1,9,d[6][1],[this]()
    {
        this->valami();
    });
    kocka73 = new FunctorButton(120,310,40,40,1,9,d[6][2],[this]()
    {
        this->valami();
    });
    kocka74 = new FunctorButton(170,310,40,40,1,9,d[6][3],[this]()
    {
        this->valami();
    });
    kocka75 = new FunctorButton(215,310,40,40,1,9,d[6][4],[this]()
    {
        this->valami();
    });
    kocka76 = new FunctorButton(260,310,40,40,1,9,d[6][5],[this]()
    {
        this->valami();
    });
    kocka77 = new FunctorButton(310,310,40,40,1,9,d[6][6],[this]()
    {
        this->valami();
    });
    kocka78 = new FunctorButton(355,310,40,40,1,9,d[6][7],[this]()
    {
        this->valami();
    });
    kocka79 = new FunctorButton(400,310,40,40,1,9,d[6][8],[this]()
    {
        this->valami();
    });

    kocka81 = new FunctorButton(30,355,40,40,1,9,d[7][0],[this]()
    {
        this->valami();
    });
    kocka82 = new FunctorButton(75,355,40,40,1,9,d[7][1],[this]()
    {
        this->valami();
    });
    kocka83 = new FunctorButton(120,355,40,40,1,9,d[7][2],[this]()
    {
        this->valami();
    });
    kocka84 = new FunctorButton(170,355,40,40,1,9,d[7][3],[this]()
    {
        this->valami();
    });
    kocka85 = new FunctorButton(215,355,40,40,1,9,d[7][4],[this]()
    {
        this->valami();
    });
    kocka86 = new FunctorButton(260,355,40,40,1,9,d[7][5],[this]()
    {
        this->valami();
    });
    kocka87 = new FunctorButton(310,355,40,40,1,9,d[7][6],[this]()
    {
        this->valami();
    });
    kocka88 = new FunctorButton(355,355,40,40,1,9,d[7][7],[this]()
    {
        this->valami();
    });
    kocka89 = new FunctorButton(400,355,40,40,1,9,d[7][8],[this]()
    {
        this->valami();
    });

    kocka91 = new FunctorButton(30,400,40,40,1,9,d[8][0],[this]()
    {
        this->valami();
    });
    kocka92 = new FunctorButton(75,400,40,40,1,9,d[8][1],[this]()
    {
        this->valami();
    });
    kocka93 = new FunctorButton(120,400,40,40,1,9,d[8][2],[this]()
    {
        this->valami();
    });
    kocka94 = new FunctorButton(170,400,40,40,1,9,d[8][3],[this]()
    {
        this->valami();
    });
    kocka95 = new FunctorButton(215,400,40,40,1,9,d[8][4],[this]()
    {
        this->valami();
    });
    kocka96 = new FunctorButton(260,400,40,40,1,9,d[8][5],[this]()
    {
        this->valami();
    });
    kocka97 = new FunctorButton(310,400,40,40,1,9,d[8][6],[this]()
    {
        this->valami();
    });
    kocka98 = new FunctorButton(355,400,40,40,1,9,d[8][7],[this]()
    {
        this->valami();
    });
    kocka99 = new FunctorButton(400,400,40,40,1,9,d[8][8],[this]()
    {
        this->valami();
    });



    widgets.push_back(kocka11);
    widgets.push_back(kocka12);
    widgets.push_back(kocka13);
    widgets.push_back(kocka14);
    widgets.push_back(kocka15);
    widgets.push_back(kocka16);
    widgets.push_back(kocka17);
    widgets.push_back(kocka18);
    widgets.push_back(kocka19);
    widgets.push_back(kocka21);
    widgets.push_back(kocka22);
    widgets.push_back(kocka23);
    widgets.push_back(kocka24);
    widgets.push_back(kocka25);
    widgets.push_back(kocka26);
    widgets.push_back(kocka27);
    widgets.push_back(kocka28);
    widgets.push_back(kocka29);
    widgets.push_back(kocka31);
    widgets.push_back(kocka32);
    widgets.push_back(kocka33);
    widgets.push_back(kocka34);
    widgets.push_back(kocka35);
    widgets.push_back(kocka36);
    widgets.push_back(kocka37);
    widgets.push_back(kocka38);
    widgets.push_back(kocka39);
    widgets.push_back(kocka41);
    widgets.push_back(kocka42);
    widgets.push_back(kocka43);
    widgets.push_back(kocka44);
    widgets.push_back(kocka45);
    widgets.push_back(kocka46);
    widgets.push_back(kocka47);
    widgets.push_back(kocka48);
    widgets.push_back(kocka49);
    widgets.push_back(kocka51);
    widgets.push_back(kocka52);
    widgets.push_back(kocka53);
    widgets.push_back(kocka54);
    widgets.push_back(kocka55);
    widgets.push_back(kocka56);
    widgets.push_back(kocka57);
    widgets.push_back(kocka58);
    widgets.push_back(kocka59);
    widgets.push_back(kocka61);
    widgets.push_back(kocka62);
    widgets.push_back(kocka63);
    widgets.push_back(kocka64);
    widgets.push_back(kocka65);
    widgets.push_back(kocka66);
    widgets.push_back(kocka67);
    widgets.push_back(kocka68);
    widgets.push_back(kocka69);
    widgets.push_back(kocka71);
    widgets.push_back(kocka72);
    widgets.push_back(kocka73);
    widgets.push_back(kocka74);
    widgets.push_back(kocka75);
    widgets.push_back(kocka76);
    widgets.push_back(kocka77);
    widgets.push_back(kocka78);
    widgets.push_back(kocka79);
    widgets.push_back(kocka81);
    widgets.push_back(kocka82);
    widgets.push_back(kocka83);
    widgets.push_back(kocka84);
    widgets.push_back(kocka85);
    widgets.push_back(kocka86);
    widgets.push_back(kocka87);
    widgets.push_back(kocka88);
    widgets.push_back(kocka89);
    widgets.push_back(kocka91);
    widgets.push_back(kocka92);
    widgets.push_back(kocka93);
    widgets.push_back(kocka94);
    widgets.push_back(kocka95);
    widgets.push_back(kocka96);
    widgets.push_back(kocka97);
    widgets.push_back(kocka98);
    widgets.push_back(kocka99);


}


void MyWindow::fv(Window *w)
{
    MyWindow * mw = dynamic_cast<MyWindow*>(w);
    if (mw)
    {
        mw->valami();
    }
}


void indulas1()
{
     gout.open(500,500);
}
void indulas2()
{
     MyWindow *mywindow = new MyWindow;
    mywindow->event_loop();
}
int main()
{
    srand(time(NULL));
    indulas1();
    indulas2();
    return 0;
}
