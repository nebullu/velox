#include "form_component.h"

class Button : public FormComponent {
protected:
    void draw_box();
    void draw();
public:
    Button();
};
