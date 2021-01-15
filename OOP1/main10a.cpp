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
  
  int MDays(int month) const; 
    
  void pp(int day);   
private:

  int day_{1};
  int month_{1};
  int year_{0};

};


Date::Date(int day, int month, int year) {
  Year(year);
  Month(month);
  Day(day);
}


 
int Date::Mdays(int month){
  if (month == 2) return 4;
} 

void Date::pp(int day){}

void Date::Day(int day) {
  if (day >= 1 && day <= Date::MDays(month_))
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