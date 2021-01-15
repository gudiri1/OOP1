#include <cassert>
#include <iostream>

// Default Constructors. Selbst wenn kein Konstruktor definiert wurde. Compiler erstellt Default Constructor
// per Default sind die Mitglieder einer Klasse eher Private

class Date{
  public:
    int day{1};
    int month{1};
    int year{1};

};

int main()
{

Date date;
std::cout << date.day << "\n";

}