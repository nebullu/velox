#include "button.h"

Button::Button() {
    set_text("Button");
}

void Button::draw_box() {
    switch (box_type())
    {
        case BoxType::FLAT_BOX
            break;
        default:
            break;
    }
}

void Button::draw_text() {

}

void Button::draw() {
    draw_box();
    draw_text();
}