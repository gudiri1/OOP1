#include <cassert>

class Date {
public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year);
  
   
    
  int Leapyd(int year) const;  
    
private:
int MDays(int month);
  int day_{1};
  int month_{1};
  int year_{0};

};


Date::Date(int day, int month, int year) {
  Year(year);
  Month(month);
  Day(day);
}

int Date::Leapyd(int year){
    if (year%4!=0) return 28;
    if (year%100!=0) return 29;
    if (year%400!=0) return 28;
     return 29;   
    
}

int Date::Mdays(int month){
  if (month == 2) return Leapyd(year_);
  if (month >=1 && month <=7){
      if (month%2==0) return 30;
          return 31;
  }
  if (month >=8 && month <=12){
      if (month%2==0) return 31;
          return 30;
  }  
}

void Date::Day(int day) {
  if (day >= 1 && day <= MDays(month_))
    day_ = day;
}

void Date::Month(int month) {
  if (month >= 1 && month <= 12)
    month_ = month;
}

void Date::Year(int year) { year_ = year; }

// Test
int main() {
  Date date(29, 8, 1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() == 1981);
}