
#include "component.h"
#include "form_component.h"
#include <vector>

class Container : public Component {
protected:
    std::vector<Component> _components;

public:
    // void box();
    add_component(FrameComponent c) { _components.push_back(c); }
    // remove_component()
    clear_component();

    virtual void draw_box() = 0;

    virtual void draw() = 0;
};
