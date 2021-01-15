#include <cassert>
#include <stdexcept>

class Student{
  public:
    Student(std::string name, float grade, float gpa) : name_(name), grade_(grade), gpa_(gpa){
        Validate();
    }

    void Name(std::string name){ name_ = name; /* Validate();*/ }
    void Grade(float grade){ grade_ = grade; Validate(); }
    void Gpa(float gpa){ gpa_ = gpa; Validate(); }

    std::string Name() const { return name_; }
    float Grade() const { return grade_; }
    float Gpa() const { return gpa_; }


  private:
    std::string name_;
    float grade_;
    float gpa_;
    void Validate(){
        if ( grade_ <0.0 || gpa_<0.0 )
        throw std::invalid_argument ("invalid input"); 
    }

};

int main()
{
    Student student("Paul", 1, 1.5);

    bool myexception{false};
    try{
        //student.Grade(-1);
        Student invalid("Invalid Imma", -1, 8.7);
    } catch (...){
        myexception = true;
    }

    assert(myexception);

}