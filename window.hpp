#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include "widgets.hpp"
#include <vector>
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
   int _felirat;
   int kezdoszam;
public:
    PushButton(int x, int y, int sx,
                int sy, int intervallum_tol, int intervallum_ig,int S_value);
    virtual void draw() const ;
    virtual void handle(genv::event ev);
    virtual void action()=0;
};


class FunctorButton : public PushButton {
    std::function<void()> _functor;
public:
    FunctorButton(int x, int y, int sx,
                int sy, int intervallum_tol, int intervallum_ig,int S_value, std::function<void()> functor);
    void action();
};



#endif // WINDOW_HPP_INCLUDED
