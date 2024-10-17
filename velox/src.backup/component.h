#ifndef COMPONENT_H
#define COMPONENT_H

#include <stdint.h>
#include "align.h"
#include "color.h"
#include "image.h"
#include "box_type.h"

// 32 count flags
enum class Flags : uint32_t {
    INACTIVE,
    ACTIVE,
    INVISIBLE,
    VISIBLE,
};

class Component {
protected:
    // value of location
    uint32_t _x, _y;

    // value of size
    uint32_t _w, _h;

    bool _visible;
    uint32_t _flags;
    Align _align;
    Color _color;
    Image* _icon;
    BoxType _box_type;

    void set_flag(Flags f) { _flags |= (uint32_t)f; }

    void set_flag(uint32_t f) { _flags |= f; }

    void del_flag(unsigned int f) { _flags &= ~f; }

    void del_flag(Flags f) { _flags &= ~(uint32_t)f; }

    bool check_flag(unsigned int f) { return _flags & f; }

    uint32_t flags() const { return _flags; }

    /*----------------------------------------------------*/

    void icon(Image* img) { _icon = img; }

    void icon(Image& img) { _icon = &img; }

    const Image* icon() { return _icon; }

    virtual void draw_box() = 0;
    // void draw_focus() { draw_focus(box(), _x, _y, _w, _h); }
    // void draw_focus(VBoxType box, int x, int y, int w, int h) const;
    // void draw_label();

    /*
     * Draw the widget
     * Never call this function directly.
     * Library will schedule redrawing whenever needed.
     *
     * Override this function to draw your own widgets
     * */
    virtual void draw() = 0;

public:
    Component();

    ~Component();

    void active();

    void deactive();

    void show();

    void hide();

    void redraw();

    bool visible() { return _visible; }

    BoxType box_type() { return _box_type; }

    void size(uint32_t w, uint32_t h) { resize(_x, _y, w, h); }

    void move(uint32_t x, uint32_t y) { resize(x, y, _w, _h); }

    void color(Color color) { _color = color; }

    Color color() { return _color; }

    void resize(uint32_t x, uint32_t y, uint32_t w, uint32_t h);
};

#endif // WINDOW_H
