#include "component.h"

Component::Component() {
    _box_type = BoxType::NO_BOX;
    _align = Align::CENTER;
    _color = INACTIVE_COLOR;
    size(0, 0);
}

Component::~Component() {

}

void Component::active() {
    set_flag(Flags::ACTIVE);
    del_flag(Flags::INACTIVE);
}

void Component::deactive() {
    set_flag(Flags::INACTIVE);
    del_flag(Flags::ACTIVE);
}

void Component::show() {
    set_flag(Flags::VISIBLE);
    del_flag(Flags::INVISIBLE);
}

void Component::hide() {
    set_flag(Flags::INVISIBLE);
    del_flag(Flags::VISIBLE);
}

void Component::redraw() {
    draw();
}

void Component::resize(uint32_t x, uint32_t y, uint32_t w, uint32_t h) {
    size(w, h);
    move(x, y);
    draw();
}
