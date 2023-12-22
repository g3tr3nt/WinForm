#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>  
#include <cstdlib>    
#include <ctime>  
#include <deque>

#include "Trip.h"
#include "NewTourist.h"

class TourCompany {
private:
    deque<Trip> trips;
    string name;
    string email;
    int phone;
public:

    void displayTrips() {
        for_each(trips.begin(), trips.end(), [](Trip& trip) {
            std::cout << "̳��� �����������: " << trip.getCountry() << ", ���������: " << trip.getDuration() << " ���" << std::endl;
            });
    }

    void Read(std::ifstream& file) {
        if (!file.is_open()) {
            throw std::runtime_error("������� �i������� ����� ��� �������");
        }
        // ������� ����� � ����� �� �� ���������� � ����� �����
        cout << name << endl << email << endl << phone << endl;
    }

    void Write(std::ofstream& file) {
        if (!file.is_open()) {
            throw std::runtime_error("������� �i������� ����� ��� ������");
        }
        // ����� ����� � ���i� ����� � ����
        file << name << endl << email << endl << phone << endl;
    }

    void setName(string name) { this->name = name; }
    void setPhone(int phone) { this->phone = phone; }
    void setEmail(string email) { this->email = email; }

    string getEmail() { return email; }
    string getName() { return name; }
    int getPhone() { return phone; }

    //�������i�
    void addTrip(const Trip& trip) { trips.push_back(trip); } // ������ ���i���
    Trip getTrip(int index) { return trips[index]; } // �������� ���i���
    int getTripsCount() { return trips.size(); } // �������� �i���i��� ���i���

};


TourCompany createCompany(const string& name, const string& email, int phone) {
    TourCompany myCompany;
    myCompany.setName(name);
    myCompany.setEmail(email);
    myCompany.setPhone(phone);
    return myCompany;
}
void Service(const std::string& filename, TourCompany& obj) {
    try {
        // �i������� ����� ��� ������� �� ������
        std::ifstream input_file(filename);


        // ������� �� ����� �����
        obj.Read(input_file);

        // �������� ����i�
        input_file.close();

        std::ofstream output_file(filename, std::ios::app); // ���� ���� �� i���, ��������� ����

        obj.Write(output_file);

        output_file.close();
    }
    catch (const std::runtime_error& e) {
        std::cout << "������� �������: " << e.what() << std::endl;
    }
    // ������� i���� ������i�
    catch (const std::exception& e) {
        std::cout << "������� ���i���� �������: " << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "������� ���i���� �������." << std::endl;
    }
}