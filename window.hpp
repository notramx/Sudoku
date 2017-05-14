#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include "widgets.hpp"
#include <vector>
#include "widgets.hpp"
#include "window.hpp"
#include <functional>


class Window {
protected:
    std::vector<Widget*> widgets;
public:
    virtual void esemeny(std::string mitortent){}

    void event_loop() ;
};
class PushButton : public Widget {
    std::string _felirat;
    int kezdoszam;
public:
    PushButton(int x, int y, int sx,
                int sy, int intervallum_tol, int intervallum_ig, std::string s);
    virtual void draw() const ;
    virtual void handle(genv::event ev);
    virtual void action()=0;

};

class MessageButton : public PushButton {
    Window * _parent;
    std::string _azonosito;
public:
    MessageButton(Window * parent, int x, int y, int sx,
                int sy, int intervallum_tol, int intervallum_ig, std::string s, std::string azonosito);
    virtual void action();
};

class FvPtrButton : public PushButton {
    Window *_parent;
    void (*_fvmut)(Window *);
public:
    FvPtrButton (Window* parent, int x, int y, int sx,
                int sy, int intervallum_tol, int intervallum_ig, std::string s, void(*fvmut)(Window *));
    virtual void action();
};

class FunctorButton : public PushButton {
    std::function<void()> _functor;
public:
    FunctorButton(int x, int y, int sx,
                int sy, int intervallum_tol, int intervallum_ig, std::string s, std::function<void()> functor);
    void action();
};


#endif // WINDOW_HPP_INCLUDED
