#include <iostream>

class Cars {
public:
    //default constructor
    Cars(std::string colour = "N/A", std::string make = "N/A", int miles = 0) : colour(colour), make(make), miles_on_clock(miles), service_due(false), mot_due(false) {};
    //getter
    int get_miles()const { return miles_on_clock; }
    std::string get_colour() const { return colour; }
    std::string get_make() const { return make; }
    //setter
    void add_miles(int miles);
    //print
    void print();
    //member functions
    bool service_check(int miles);
private:
    std::string colour;
    std::string make;
    int miles_on_clock;
    bool service_due;
    bool mot_due;
};

//-----------------------------------------------------------------------------
//member functions of cars

void Cars::print() {
    std::cout << "car make: " << "\t" << get_make() << std::endl;
    std::cout << "car colour: " << "\t" << get_colour() << std::endl;
    std::cout << "miles on clock: " << "\t" << get_miles() << std::endl;
    std::cout << std::endl;
}

void Cars::add_miles(int miles) {
    service_check(miles);
    this->miles_on_clock += miles;
}

//every 10,000 miles service is due, if the miles added pushes over 10,000 miles service is changed to true.
bool Cars::service_check(int miles) {
    int temp{ miles_on_clock };
    while (temp > 10000) {
        temp -= 10000;
    }
    temp = 10000 - temp;
    if (miles >= temp) {
        service_due = true;
        return true;
    }
    else {
        return false;
    }
}

int main() {
    Cars Ford("white", "Ford focus", 1000);
    Ford.print();
    Cars BMW("Blue", "1 series");
    BMW.print();
    std::cout << "version 2";

}