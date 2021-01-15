#include <cassert>
#include <iostream>

/*class*/ struct Date {
  public:
    
    int Day() { return day; }
    void Day(int d) { day = d; }

    void Month(int month) { this.month = month; }
    int Month() { return month; }
    void Year(int year) {this.year = year; }
    int Year() { return year; }


  private:
    int day{1};
    int month{1};
    int year{1};
};

int main () {
  Date date;
  date.Day(29);
  date.Month(8);
  date.Year(1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() ==  1981);

  std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() << "\n";


}