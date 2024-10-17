#include "container.h"

void Container::remove_components() {
    for (FormComponent c : _components) {
        c.deactive();
        _components.remove(c);
    }
}
