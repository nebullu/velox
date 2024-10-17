#ifndef FORMCOMPONENT_H
#define FORMCOMPONENT_H

#include <string>
#include "component.h"
#include "color.h"

/*
 * Form Components
 *
 * Basic
 * ------
 * Button
 * Check
 * Radio
 * Label (with markup <> for color,bold, italic)
 * Text
 * Image
 *
 * Container
 * --------
 * Window
 * Frame
 * Panel (Labeled, Accordion,)
 * Tabs
 *
 * Extra
 * -----
 * Menu
 * ContextMenu
 * Popup
 * List
 * Tree
 * Slider
 * StatusBar
 *
 * Dialog
 * ------
 * MessageDialog (Yes/No, Input)
 * FileDialog
 * ColorPicker
 */

class FormComponent : Component {
protected:
    std::string text;
    virtual void draw_box() = 0;
    virtual void draw() = 0;
public:
    FormComponent();
    ~FormComponent();
    void set_text(std::string _text);
};

#endif // FORM_COMPONENT_H
