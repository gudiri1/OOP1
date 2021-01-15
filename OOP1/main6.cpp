namespace NamespaceD{
    namespace NamespaceD1{
        int x;
    }
}

namespace NamespaceE{
    class ClassE{
      public:
        class ClassE1{
          public:
           int x;  
        };  
    };
}

int main()
{
    NamespaceD::NamespaceD1::x = 1;
    NamespaceE::ClassE::ClassE1 e1;
    e1.x = 3;
}