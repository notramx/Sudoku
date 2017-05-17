#ifndef WIDGETS_HPP_INCLUDED
#define WIDGETS_HPP_INCLUDED

#include "graphics.hpp"

class Widget {
protected:
    bool _focused;
    int _x, _y, _size_x, _size_y;
    int _intervallum_tol;
    int _intervallum_ig;
public:
    Widget(int x, int y, int sx, int sy,int intervallum_tol, int intervallum_ig);
    virtual bool is_selected(int mouse_x, int mouse_y) const;
    virtual void draw() const =0;
    virtual void handle(genv::event ev);
    virtual bool focusable() const;
    virtual void focus();
    virtual void unfocus();
};


#endif // WIDGETS_HPP_INCLUDED
