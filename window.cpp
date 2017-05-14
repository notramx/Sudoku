#include "window.hpp"
#include <sstream>
using namespace genv;
using namespace std;

void Window::event_loop() {
    event ev;
    int focus = -1;
    while(gin >> ev )       {
        if (ev.type == ev_key && ev.keycode == key_tab) {
            if(focus!=-1) {
                widgets[focus]->unfocus();
            }
            do {
                focus++;
                if (focus>=widgets.size()) focus =0;
            } while (!widgets[focus]->focusable()); //TODO:vegtelenciklus!
            widgets[focus]->focus();
        }
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->is_selected(ev.pos_x, ev.pos_y) && widgets[i]->focusable()) {
                        if (focus!=-1) widgets[focus]->unfocus();
                        focus = i;
                        widgets[focus]->focus();
                }
            }
        }
        if (focus!=-1) {
            widgets[focus]->handle(ev);
        }
        for (size_t i=0;i<widgets.size();i++) {
            widgets[i]->draw();
        }
        gout << refresh;
    }
}
PushButton::PushButton(int x, int y, int sx, int sy, int intervallum_tol, int intervallum_ig,std::string s)
    : Widget(x,y,sx,sy,intervallum_tol,intervallum_ig), _felirat(s)

{
kezdoszam = _felirat;
}


void PushButton::draw() const
{
//        if(kezdoszam!=0)
//       {
            ostringstream convert;
            convert << kezdoszam;
            string  _felirat = convert.str();
//        }

    if (_focused)
        {

    gout << color(180,180,180);
    gout << move_to(_x, _y) << box(_size_x, _size_y)
         << color(255,255,255);
    gout << move_to(_x+_size_x/2-gout.twidth(_felirat)/2, _y+20)
         << text(_felirat);
        // gout << move_to(500,500) << color(255,255,255) << text("asd");
        }
        else
        {
    gout << color(130,130,130);
    gout << move_to(_x, _y) << box(_size_x, _size_y)
         << color(255,255,255);
    gout << move_to(_x+_size_x/2-gout.twidth(_felirat)/2, _y+20)
         << text(_felirat);
        }


}
void PushButton::handle(genv::event ev)
{
    if (ev.keycode==' ' || is_selected(ev.pos_x, ev.pos_y))
    {
        action();

    }
    if (_focused)
    {
        gout << move_to(500,500) << color(255,255,255) << text("asd");
    }
    if (_focused == true && ev.keycode == key_up && kezdoszam > _intervallum_tol && kezdoszam < _intervallum_ig
        ||
        _focused == true && ev.keycode == key_up && kezdoszam == _intervallum_tol
        ||
        _focused == true && ev.button == btn_wheelup && kezdoszam > _intervallum_tol && kezdoszam < _intervallum_ig
        ||
        _focused == true && ev.button == btn_wheelup && kezdoszam == _intervallum_tol
        ||
        _focused == true && ev.button == btn_wheelup && kezdoszam==0
        ||
        _focused == true && ev.keycode == key_up && kezdoszam==0)
    {
        kezdoszam++;

    }
    if (_focused == true && ev.keycode == key_down && kezdoszam > _intervallum_tol && kezdoszam < _intervallum_ig
        ||
        _focused == true && ev.keycode == key_down && kezdoszam == _intervallum_ig
        ||
        _focused == true && ev.button == btn_wheeldown && kezdoszam > _intervallum_tol && kezdoszam < _intervallum_ig
        ||
        _focused == true && ev.button == btn_wheeldown && kezdoszam == _intervallum_ig )
    {
        kezdoszam--;
    }
}



MessageButton::MessageButton(Window * parent, int x, int y, int sx, int sy,
                             int intervallum_tol, int intervallum_ig,string s, string azonosito)
    : PushButton(x,y,sx,sy,intervallum_tol,intervallum_ig,s),
      _parent(parent),
      _azonosito(azonosito)
{
}


void MessageButton::action()
{
    _parent->esemeny(_azonosito);
}




FvPtrButton::FvPtrButton (Window *parent, int x, int y, int sx, int sy,int intervallum_tol, int intervallum_ig,
                          std::string s, void(*fvmut)(Window *))
    : PushButton(x,y,sx,sy,intervallum_tol,intervallum_ig,s), _parent(parent), _fvmut(fvmut)
{

}

void FvPtrButton::action()
{
    _fvmut(_parent);
}


FunctorButton::FunctorButton(int x, int y, int sx,
                             int sy,int intervallum_tol, int intervallum_ig, std::string s, std::function<void()> functor)
    :PushButton(x,y,sx,sy,intervallum_tol,intervallum_ig,s), _functor(functor)
{
}

void FunctorButton::action()
{
    _functor();
}
