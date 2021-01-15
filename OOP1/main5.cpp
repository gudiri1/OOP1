#include <iostream>

/**
 * Scope Resolution
 * 
 */


namespace NamespaceB {
    class ClassB {
      public:
        int x;
    };
}

namespace NamespaceC{
    using namespace NamespaceB;
}

int main() {
    NamespaceB::ClassB b_b;
    NamespaceC::ClassB c_b;

}
