#include <assert.h>
#include <string>

// TODO: Define class Person
class Person {    // man kann es auch als struct ohne public definieren, da keine Methode bzw invariant benötigt wird
public:
  // TODO: Define a public constructor with an initialization list
  Person(std::string name) : name(name) {}
  // TODO: Define a public member variable: name
  std::string name;  
};

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}