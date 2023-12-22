#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>  
#include <cstdlib>    
#include <ctime>  



using namespace std;

template <typename T>
class Country {
private:
    T name;
    T hotel;

public:
    Country() : name(T()), hotel(T()) {}

    void setCountryName(T name) { this->name = name; }
    void setHotel(T hotel) { this->hotel = hotel; }

    T getCountryName() { return name; }
    T getHotel() { return hotel; }
};

