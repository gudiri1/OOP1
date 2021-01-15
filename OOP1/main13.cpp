#include <cassert>
#include <stdexcept>

class Pyramid{
  public:
    // constructor
    Pyramid(int length, int width, int heigth) 
       : length_(length), width_(width), heigth_(heigth){
      Validate();
    }

    void Length(int l){ length_ = l; Validate();}
    void Width(int l){ width_ = l; Validate();}
    void Heigth(int l){ heigth_ = l; Validate();}
    
    // Accessors
    int Length() const { return length_; }
    int Width() const { return width_; }
    int Heigth() const { return heigth_; }

    int Volume() const { return Length() * Width() * Heigth() / 3.0; }

  private:
    int length_;
    int width_;
    int heigth_;
    void Validate(){
        if ( length_<=0 || width_<=0 || heigth_<=0)
            throw std::invalid_argument("negative dimension");
    }

};


int main()
{
    Pyramid pyramid(4,5,6);
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