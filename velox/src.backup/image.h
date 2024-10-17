#include "component.h"
#include "form_component.h"

class Image : public FormComponent {
    uint32_t _byte[];
public:
    Image();
    Image(uint32_t byte[]);
    void set(uint32_t byte[]);
    ~Image();
};
