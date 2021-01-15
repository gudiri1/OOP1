#include <cassert>
#include <iostream>

// by default data in struct is public (in structs!!!)
// mutator

struct Date {
  public:  
    int Day() {return day; }
    void Day(int d){
        if (d > 1)
         day = d;
    }
    int month{1};
    int year{2000};

  private:
    int day{1};  
};

// Define a main function to instantiate and test
int main()
{
    Date date;
    date.Day(1);
    assert(date.Day() == 1);
    assert(date.month == 1);
    assert(date.year == 2000);

    std::cout << date.Day() << "/" << date.month << "/"<< date.year << "\n";
}