#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
    char *brand;   // converting to std::string
    float weight;
    float horsepower;
        
    // TODO: Declare getter and setter for brand
    public:
    
    void SetBrand(std::string brand);
    std::string GetBrand() const;
        
};

// Define setters
void Car::SetBrand(std::string brand){
     Car::brand = new char[brand.length() + 1];
     strcpy(Car::brand, brand.c_str());
}

// Define getters
std::string Car::GetBrand() const {
    
        return brand;
}

// Test in main()
int main() 
{
    Car car;
    car.SetBrand("Peugeot");
    std::cout << car.GetBrand() << "\n";   
}