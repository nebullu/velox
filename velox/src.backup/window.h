#include "container.h"
#include <string>

class Window : public Container {
    std::string _title;
    void draw_box();
    void draw();
public:
    Window();
    ~Window();

    void title(std::string title) { _title = title; }

    void show();
};
