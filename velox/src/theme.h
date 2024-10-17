#ifndef THEME_H
#define THEME_H

#include "color.h"

class ColorSchema {
public:
    // base
    Color base_fg;
    Color base_bg;
    Color base_hover_bg;
    Color border;
    Color box_shadow;

    // accent
    Color accent_fg;
    Color accent_bg;
    Color accent_hover_bg;
    Color accent_border;

    // click
    Color active_fg;
    Color active_bg;
    Color active_border;

    // focus ?
    Color focus_fg;
    Color focus_bg;
    Color focus_border;
};

class Theme {
public:
    ColorSchema containers;
    ColorSchema form_components;
};

#include <map>
class Theme {
public:
    Theme dark_theme() {
        ColorSchema base;

        map<string, ColorSchema> schemas;
        schemas["button"] = base;

        Theme theme;
        return theme;
    }

    Theme light_theme() {
        Theme theme;
        return theme;
    }
};

#endif // THEME_H