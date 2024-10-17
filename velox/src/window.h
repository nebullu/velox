//#include "container.h"
#include <string>

//class Window : public Container {
class Window {
    std::string _title;
    void draw_box();
    void draw();
public:
    Window();
    Window(uint32_t width, uint32_t height);
    ~Window();

    void title(std::string title) { _title = title; }
    void show();
};
