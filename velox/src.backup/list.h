#include "form_component.h"
#include <vector>

class List : public FormComponent {
    vector<FormComponent> _components;
    bool scrool_visible;
public:
    Label();
    ~Label();
    void add_components(FormComponent c) { _components.push_back(c); }
    vector<FormComponents> get_components() { return _componens; }
}
