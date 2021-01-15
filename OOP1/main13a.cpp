#include <cassert>
#include <stdexcept>

// TODO: Define class Pyramid
class Pyramid {
 public:
  // constructor
  Pyramid(int length, int width, int heigth)
      : length_(length), width_(width), heigth_(heigth) {
    Validate();
  }

  // accessors
  int Length() const { return length_; }
  int Width() const { return width_; }
  int Heigth() const { return heigth_; }

  // mutators
  void Length(int length) {
    length_ = length;
    Validate();
  }
  void Width(int width) {
    width_ = width;
    Validate();
  }
  void Height(int heigth) {
    heigth_ = heigth;
    Validate();
  }

  // public Volume() function
  float Volume() const { return Length() * Width() * Heigth() / 3.0; }

  //float Volume() const { return length_ * width_ * heigth_ / 3.0; }  //ob das dasselbe ischt

  // private class members
 private:
  int length_;
  int width_;
  int heigth_;
  void Validate() {
    if (length_ <= 0 || width_ <= 0 || heigth_ <= 0)
      throw std::invalid_argument("negative dimension");
  }
};

// Test
int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.Length() == 4);
  assert(pyramid.Width() == 5);
  assert(pyramid.Heigth() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}