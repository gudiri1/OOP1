#include <cassert>
#include <cmath>
#include <stdexcept>

/**
 * @brief Static Members
 * 
 */

class Sphere {
 public:
  Sphere(int radius) : radius_(radius), volume_(pi_ * 4 / 3 * pow(radius_, 3)) {
    if (radius <= 0) throw std::invalid_argument("radius must be positive");
  }

  int Radius() const { return radius_; }
  int Volume() const { return volume_; }

  // TODO: mutator
  void Radius(int radius) {
    if (radius <= 0) throw std::invalid_argument("radius must be positive");
    radius_ = radius;
    volume_ = pi_ * 4 / 3 * pow(radius_, 3);
  }

  static float const pi_;  // Option2.  pi ist jetzt public, sodass der Unterstrich nicht mehr passt, allerdings kann man es so lassen...

 private:
  // static float constexpr pi_{3.14159};   //Option1
  int radius_;
  float volume_;
};

float const Sphere::pi_{3.14159};  // Option2.  die Var wurde schon als static deklariert. Draußen nicht mehr nötig, die Var als constexpr zu definieren

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);

  // Sphere::pi_ = Value;   das geht nicht, selbst wenn pi_ nicht const ist.
  sphere.Radius(3);
  assert(sphere.Radius() == 3);
  assert(abs(sphere.Volume() - 113.1) < 1);

  bool caught{false};
  try {
    sphere.Radius(-1);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}