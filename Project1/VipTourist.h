#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>  
#include <cstdlib>    
#include <ctime>  


#include "Tourist.h"


class VipTourist :public virtual Tourist {
private:
    string vipService;

public:
    VipTourist operator+(const int& ageToAdd) {
        VipTourist result = *this;
        result.setAge(this->getAge() + ageToAdd);
        return result;
    }

    // �������������� ��������� �������� "-"
    VipTourist operator-(const int& ageToSubtract) {
        VipTourist result = *this;
        result.setAge(this->getAge() - ageToSubtract);
        return result;
    }

    VipTourist operator*(const int& multiplier) {
        VipTourist result = *this;
        result.setAge(this->getAge() * multiplier);
        return result;
    }
    // �������������� ��������� "+="
    VipTourist& operator+=(const int& valueToAdd) {
        this->setAge(this->getAge() + valueToAdd);
        return *this;
    }
    //�i��������� ����������
    ~VipTourist() {

        cout << "VIP tourist named " << name << " is leaving." << endl;
    }

    //�i�������� �����i�
    void TouristType() const override {
        std::cout << "Its VIP tourist named " << name << endl;
    }


    VipTourist() : Tourist(), vipService("") {  }

    void setVipService(string service) {
        vipService = service;
    }

    string getVipService() {
        return vipService;
    }
};


//void calculate(VipTourist& Viptourist) {
//    float dailyCost = Viptourist.getPhone() / Viptourist.getAge();
//    std::cout << "��������� �i����� ������ �������� �� �i�: " << dailyCost << std::endl;
//}