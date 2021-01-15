#include <assert.h>
#include <string>

struct Person{
  public:  // eigentlich bräuchte man ned
    Person(std::string const & n) : name(n) {}    // auch n Reference möglich

    std::string const name;    
};


int main()
{
    Person alice("Alice");
    Person bob("Bob");
    assert(alice.name != bob.name);
}