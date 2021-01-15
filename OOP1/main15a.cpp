#include <cassert>
#include <cmath>
#include <stdexcept>

class Sphere {
  public:
    // Constructor
    Sphere(int radius) : radius_(radius), volume_(pi_* 4/3 * pow(radius_,3)) {
        if (radius_ <=0) throw std::invalid_argument("radius must be positive");
    }  
  
    // Accessors  
    int Radius() const { return radius_; }
    int /*float*/ Volume() const { return volume_; }   // the value of volume can be set as soon as an object(this case) is created or just after executing volume

  private:  
    // Private Members
    float const pi_/*=*/{3.14159};     // define Pi before Volume!!
    int const radius_;              // const: once they are set, no change
    float const volume_;

};

int main(void)
{
    Sphere sphere(5);
    assert(sphere.Radius() == 5);
    assert(abs(sphere.Volume() - 523.6) < 1 );
}
