#include <cassert>
#include <cmath>
#include <stdexcept>

class Sphere{
  public:
    Sphere(float radio) : radio_(radio){}

    float Radio() const { return radio_; }
    float Volume() { return 4.0/3.0*(3.1314)*(radio_)*(radio_)*(radio_); }    

  private:  
    float radio_;
};

int main(void)
{
    Sphere sphere(5);
    assert(sphere.Radio() == 5);
    assert(abs(sphere.Volume() - 523.6)<1);
}
