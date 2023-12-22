#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>  
#include <cstdlib>    
#include <ctime>  

#include "NewTourist.h"
#include "Human.h"
#include "Trip.h"


class Tourist : public virtual Human {
private:

public:

    template <typename A>
    void print(const A& obj)
    {
        /*std::cout << obj << endl;*/
    }

    Tourist& operator++() {
        myTrip.incrementDuration();
        return *this;
    }

    Tourist operator++(int) {
        Tourist temp = *this;
        myTrip.incrementDuration();
        return temp;
    }

    Tourist& operator--() {
        myTrip.decrementDuration();
        return *this;
    }

    Tourist operator--(int) {
        Tourist temp = *this;
        myTrip.decrementDuration();
        return temp;
    }
    //�i��������� ����������
    virtual ~Tourist() {
        std::cout << "Exiting Tourist block" << std::endl; // ���������� ������ � �����
    }

    //�i�������� �����i�
    void TouristType() const override {
        std::cout << "Its commmon touirist named " << name << endl;
    }


    Trip myTrip;
    Country<string> myCountry;

    Tourist() : myTrip(Trip()), myCountry(Country<string>()) {

        std::cout << "Entering Tourist block" << std::endl;
    }// ���������� ��������� � ����


    void setName(string name) { this->name = name; }
    void setSurname(string surname) { this->surname = surname; }
    void setAge(int age) { this->age = age; }
    void setEmail(string email) { this->email = email; }
    void setPhone(int phone) { this->phone = phone; }
    void setPhone(double phone) { this->phone = phone; }

    string getName() { return name; }
    string getSurname() { return surname; }
    int getAge() { return age; }
    string getEmail() { return email; }
    int getPhone() { return phone; }


};

void setCommonTourists();

//void calculate(Tourist& tourist) {
//    float dailyCost = tourist.getPhone() / tourist.getAge();
//    std::cout << "���������� �i����� ������ �������� �� �i�: " << dailyCost << std::endl;
//}