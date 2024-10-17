#include "form_component.h"

class Label : public FormComponent {
    std::string _text;
public:
    void text(char* value) { _text = value; }
    char* text(char* value) { return _text; }
};
