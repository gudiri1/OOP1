#include <cassert>
#include <iostream>

class Date {
  public:
    void Day(int d){
        if (d>=1 && d<=31){
            day=d;
        }
    }
    int Day(){ return day; }
    void Month(int m){
        if (m>=1 && m <=12) month = m;
    }
    int Month(){ return month; }
    int Year(){ return year; }
    void Year(int y){ year =  y; }

  private:
    int day{1};
    int month{1};
    int year{1};

};

int main()
{
    Date date;
    date.Day(-3);
    std::cout << date.Day() << "/" << date.Month() << "/" << date.Year () << "\n";
}