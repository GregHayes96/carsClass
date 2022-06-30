#include <iostream>

class Cars {
public:
    //default constructor
    Cars(std::string colour = "N/A", std::string make = "N/A", int miles = 0) : colour(colour), make(make), miles_on_clock(miles) {} ;
    //getter
    int get_miles()const { return miles_on_clock; }
    std::string get_colour() const { return colour; }
    std::string get_make() const { return make; }
    
    void print();
 
private:
    std::string colour;
    std::string make;
    int miles_on_clock;
};

//-----------------------------------------------------------------------------
//member functions of cars

void Cars::print() {
    std::cout << "car make: " << "\t" << get_make() << std::endl;
    std::cout << "car colour: " << "\t" << get_colour() << std::endl;
    std::cout << "miles on clock: " << "\t" << get_miles() << std::endl;
    std::cout << std::endl;
}

int main() {
    Cars Ford("white", "Ford focus", 1000);
    Ford.print();
    Cars BMW("Blue", "1 series");
    BMW.print();
    std::cout << "version 1";

}