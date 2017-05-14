#include "graphics.hpp"
#include "widgets.hpp"
#include "examplecheckbox.hpp"
#include "statictext.hpp"
#include "texteditor.hpp"
#include "window.hpp"
#include "pushbutton.hpp"
#include <vector>

using namespace std;
using namespace genv;


///////////////////////////////////////////////////
class ValamiButton;
class MyWindow : public Window {
public:
    StaticText *tx1;
    TextEditor *ed1;
    PushButton *button;
    ValamiButton * vButton;
    FvPtrButton * fvptrbutton;
    FunctorButton * functorbutton;

    FunctorButton * t11;FunctorButton * t12;FunctorButton * t13;FunctorButton * t14;FunctorButton * t15;FunctorButton * t16;FunctorButton * t17;FunctorButton * t18;FunctorButton * t19;
    FunctorButton * t21;FunctorButton * t22;FunctorButton * t23;FunctorButton * t24;FunctorButton * t25;FunctorButton * t26;FunctorButton * t27;FunctorButton * t28;FunctorButton * t29;
    FunctorButton * t31;FunctorButton * t32;FunctorButton * t33;FunctorButton * t34;FunctorButton * t35;FunctorButton * t36;FunctorButton * t37;FunctorButton * t38;FunctorButton * t39;
    FunctorButton * t41;FunctorButton * t42;FunctorButton * t43;FunctorButton * t44;FunctorButton * t45;FunctorButton * t46;FunctorButton * t47;FunctorButton * t48;FunctorButton * t49;
    FunctorButton * t51;FunctorButton * t52;FunctorButton * t53;FunctorButton * t54;FunctorButton * t55;FunctorButton * t56;FunctorButton * t57;FunctorButton * t58;FunctorButton * t59;
    FunctorButton * t61;FunctorButton * t62;FunctorButton * t63;FunctorButton * t64;FunctorButton * t65;FunctorButton * t66;FunctorButton * t67;FunctorButton * t68;FunctorButton * t69;
    FunctorButton * t71;FunctorButton * t72;FunctorButton * t73;FunctorButton * t74;FunctorButton * t75;FunctorButton * t76;FunctorButton * t77;FunctorButton * t78;FunctorButton * t79;
    FunctorButton * t81;FunctorButton * t82;FunctorButton * t83;FunctorButton * t84;FunctorButton * t85;FunctorButton * t86;FunctorButton * t87;FunctorButton * t88;FunctorButton * t89;
    FunctorButton * t91;FunctorButton * t92;FunctorButton * t93;FunctorButton * t94;FunctorButton * t95;FunctorButton * t96;FunctorButton * t97;FunctorButton * t98;FunctorButton * t99;

    MyWindow() ;
    void esemeny(string mitortent) {
        if (mitortent == "egyenlo") {
            tx1->setText(ed1->value());
        }
    }
    static void fv(Window *);
    void valami() {
        tx1->setText("sikerult");
    }
};

class ValamiButton : public PushButton {
    MyWindow * mywparent;
public:
    ValamiButton(MyWindow * parent, int x, int y, int sx,
                int sy,int intervallum_tol, int intervallum_ig, std::string s)
                :PushButton(x, y, sx, sy,intervallum_tol, intervallum_ig, s) {
        mywparent = parent;
    }
    virtual void action() ;
};


MyWindow::MyWindow() {
        button = new MessageButton(this, 510, 10, 60, 60,1,9,"oda", "egyenlo");
        tx1 = new StaticText(575,20,100,40,1,9,"pipa");
        ed1 = new TextEditor(510,100,100,40,1,9,"editor");
        vButton = new ValamiButton(this, 510,200,100,40,1,9,"vbut");
        fvptrbutton = new FvPtrButton(this, 510,250,100,40,1,9,"fvptr",MyWindow::fv);
        functorbutton = new FunctorButton(510,300,100,40,1,9,"functor",
                                         [this](){this->valami();});
        widgets.push_back(tx1);
        widgets.push_back(ed1);
        widgets.push_back(button);
        widgets.push_back(vButton);
        widgets.push_back(fvptrbutton);
       widgets.push_back(functorbutton );

     t11 = new FunctorButton(30,30,40,40,1,9,"1",[this](){this->valami();});
     t12 = new FunctorButton(75,30,40,40,1,9,"9",[this](){this->valami();});
     t13 = new FunctorButton(120,30,40,40,1,9,"",[this](){this->valami();});
     t14 = new FunctorButton(170,30,40,40,1,9,"",[this](){this->valami();});
     t15 = new FunctorButton(215,30,40,40,1,9,"",[this](){this->valami();});
     t16 = new FunctorButton(260,30,40,40,1,9,"",[this](){this->valami();});
     t17 = new FunctorButton(310,30,40,40,1,9,"",[this](){this->valami();});
     t18 = new FunctorButton(355,30,40,40,1,9,"",[this](){this->valami();});
     t19 = new FunctorButton(400,30,40,40,1,9,"",[this](){this->valami();});

     t21 = new FunctorButton(30,75,40,40,1,9,"",[this](){this->valami();});
     t22 = new FunctorButton(75,75,40,40,1,9,"",[this](){this->valami();});
     t23 = new FunctorButton(120,75,40,40,1,9,"",[this](){this->valami();});
     t24 = new FunctorButton(170,75,40,40,1,9,"",[this](){this->valami();});
     t25 = new FunctorButton(215,75,40,40,1,9,"",[this](){this->valami();});
     t26 = new FunctorButton(260,75,40,40,1,9,"",[this](){this->valami();});
     t27 = new FunctorButton(310,75,40,40,1,9,"",[this](){this->valami();});
     t28 = new FunctorButton(355,75,40,40,1,9,"",[this](){this->valami();});
     t29 = new FunctorButton(400,75,40,40,1,9,"",[this](){this->valami();});

     t31 = new FunctorButton(30,120,40,40,1,9,"",[this](){this->valami();});
     t32 = new FunctorButton(75,120,40,40,1,9,"",[this](){this->valami();});
     t33 = new FunctorButton(120,120,40,40,1,9,"",[this](){this->valami();});
     t34 = new FunctorButton(170,120,40,40,1,9,"",[this](){this->valami();});
     t35 = new FunctorButton(215,120,40,40,1,9,"",[this](){this->valami();});
     t36 = new FunctorButton(260,120,40,40,1,9,"",[this](){this->valami();});
     t37 = new FunctorButton(310,120,40,40,1,9,"",[this](){this->valami();});
     t38 = new FunctorButton(355,120,40,40,1,9,"",[this](){this->valami();});
     t39 = new FunctorButton(400,120,40,40,1,9,"",[this](){this->valami();});

     t41 = new FunctorButton(30,170,40,40,1,9,"",[this](){this->valami();});
     t42 = new FunctorButton(75,170,40,40,1,9,"",[this](){this->valami();});
     t43 = new FunctorButton(120,170,40,40,1,9,"",[this](){this->valami();});
     t44 = new FunctorButton(170,170,40,40,1,9,"",[this](){this->valami();});
     t45 = new FunctorButton(215,170,40,40,1,9,"",[this](){this->valami();});
     t46 = new FunctorButton(260,170,40,40,1,9,"",[this](){this->valami();});
     t47 = new FunctorButton(310,170,40,40,1,9,"",[this](){this->valami();});
     t48 = new FunctorButton(355,170,40,40,1,9,"",[this](){this->valami();});
     t49 = new FunctorButton(400,170,40,40,1,9,"",[this](){this->valami();});

     t51 = new FunctorButton(30,215,40,40,1,9,"",[this](){this->valami();});
     t52 = new FunctorButton(75,215,40,40,1,9,"",[this](){this->valami();});
     t53 = new FunctorButton(120,215,40,40,1,9,"",[this](){this->valami();});
     t54 = new FunctorButton(170,215,40,40,1,9,"",[this](){this->valami();});
     t55 = new FunctorButton(215,215,40,40,1,9,"",[this](){this->valami();});
     t56 = new FunctorButton(260,215,40,40,1,9,"",[this](){this->valami();});
     t57 = new FunctorButton(310,215,40,40,1,9,"",[this](){this->valami();});
     t58 = new FunctorButton(355,215,40,40,1,9,"",[this](){this->valami();});
     t59 = new FunctorButton(400,215,40,40,1,9,"",[this](){this->valami();});

     t61 = new FunctorButton(30,260,40,40,1,9,"",[this](){this->valami();});
     t62 = new FunctorButton(75,260,40,40,1,9,"",[this](){this->valami();});
     t63 = new FunctorButton(120,260,40,40,1,9,"",[this](){this->valami();});
     t64 = new FunctorButton(170,260,40,40,1,9,"",[this](){this->valami();});
     t65 = new FunctorButton(215,260,40,40,1,9,"",[this](){this->valami();});
     t66 = new FunctorButton(260,260,40,40,1,9,"",[this](){this->valami();});
     t67 = new FunctorButton(310,260,40,40,1,9,"",[this](){this->valami();});
     t68 = new FunctorButton(355,260,40,40,1,9,"",[this](){this->valami();});
     t69 = new FunctorButton(400,260,40,40,1,9,"",[this](){this->valami();});

     t71 = new FunctorButton(30,310,40,40,1,9,"",[this](){this->valami();});
     t72 = new FunctorButton(75,310,40,40,1,9,"",[this](){this->valami();});
     t73 = new FunctorButton(120,310,40,40,1,9,"",[this](){this->valami();});
     t74 = new FunctorButton(170,310,40,40,1,9,"",[this](){this->valami();});
     t75 = new FunctorButton(215,310,40,40,1,9,"",[this](){this->valami();});
     t76 = new FunctorButton(260,310,40,40,1,9,"",[this](){this->valami();});
     t77 = new FunctorButton(310,310,40,40,1,9,"",[this](){this->valami();});
     t78 = new FunctorButton(355,310,40,40,1,9,"",[this](){this->valami();});
     t79 = new FunctorButton(400,310,40,40,1,9,"",[this](){this->valami();});

     t81 = new FunctorButton(30,355,40,40,1,9,"",[this](){this->valami();});
     t82 = new FunctorButton(75,355,40,40,1,9,"",[this](){this->valami();});
     t83 = new FunctorButton(120,355,40,40,1,9,"",[this](){this->valami();});
     t84 = new FunctorButton(170,355,40,40,1,9,"",[this](){this->valami();});
     t85 = new FunctorButton(215,355,40,40,1,9,"",[this](){this->valami();});
     t86 = new FunctorButton(260,355,40,40,1,9,"",[this](){this->valami();});
     t87 = new FunctorButton(310,355,40,40,1,9,"",[this](){this->valami();});
     t88 = new FunctorButton(355,355,40,40,1,9,"",[this](){this->valami();});
     t89 = new FunctorButton(400,355,40,40,1,9,"",[this](){this->valami();});

     t91 = new FunctorButton(30,400,40,40,1,9,"",[this](){this->valami();});
     t92 = new FunctorButton(75,400,40,40,1,9,"",[this](){this->valami();});
     t93 = new FunctorButton(120,400,40,40,1,9,"",[this](){this->valami();});
     t94 = new FunctorButton(170,400,40,40,1,9,"",[this](){this->valami();});
     t95 = new FunctorButton(215,400,40,40,1,9,"",[this](){this->valami();});
     t96 = new FunctorButton(260,400,40,40,1,9,"",[this](){this->valami();});
     t97 = new FunctorButton(310,400,40,40,1,9,"",[this](){this->valami();});
     t98 = new FunctorButton(355,400,40,40,1,9,"",[this](){this->valami();});
     t99 = new FunctorButton(400,400,40,40,1,9,"",[this](){this->valami();});

     widgets.push_back(t11); widgets.push_back(t12); widgets.push_back(t13); widgets.push_back(t14); widgets.push_back(t15); widgets.push_back(t16); widgets.push_back(t17); widgets.push_back(t18); widgets.push_back(t19);
     widgets.push_back(t21); widgets.push_back(t22); widgets.push_back(t23); widgets.push_back(t24); widgets.push_back(t25); widgets.push_back(t26); widgets.push_back(t27); widgets.push_back(t28); widgets.push_back(t29);
     widgets.push_back(t31); widgets.push_back(t32); widgets.push_back(t33); widgets.push_back(t34); widgets.push_back(t35); widgets.push_back(t36); widgets.push_back(t37); widgets.push_back(t38); widgets.push_back(t39);
     widgets.push_back(t41); widgets.push_back(t42); widgets.push_back(t43); widgets.push_back(t44); widgets.push_back(t45); widgets.push_back(t46); widgets.push_back(t47); widgets.push_back(t48); widgets.push_back(t49);
     widgets.push_back(t51); widgets.push_back(t52); widgets.push_back(t53); widgets.push_back(t54); widgets.push_back(t55); widgets.push_back(t56); widgets.push_back(t57); widgets.push_back(t58); widgets.push_back(t59);
     widgets.push_back(t61); widgets.push_back(t62); widgets.push_back(t63); widgets.push_back(t64); widgets.push_back(t65); widgets.push_back(t66); widgets.push_back(t67); widgets.push_back(t68); widgets.push_back(t69);
     widgets.push_back(t71); widgets.push_back(t72); widgets.push_back(t73); widgets.push_back(t74); widgets.push_back(t75); widgets.push_back(t76); widgets.push_back(t77); widgets.push_back(t78); widgets.push_back(t79);
     widgets.push_back(t81); widgets.push_back(t82); widgets.push_back(t83); widgets.push_back(t84); widgets.push_back(t85); widgets.push_back(t86); widgets.push_back(t87); widgets.push_back(t88); widgets.push_back(t89);
     widgets.push_back(t91); widgets.push_back(t92); widgets.push_back(t93); widgets.push_back(t94); widgets.push_back(t95); widgets.push_back(t96); widgets.push_back(t97); widgets.push_back(t98); widgets.push_back(t99);


}


void MyWindow::fv(Window *w) {
    MyWindow * mw = dynamic_cast<MyWindow*>(w);
    if (mw) {
        mw->valami();
    }
}

void ValamiButton::action() {
    mywparent->valami();
}
int main()
{
    gout.open(700,550);
    MyWindow *mywindow = new MyWindow;
    mywindow->event_loop();
    return 0;
}
