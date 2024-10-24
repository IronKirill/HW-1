#pragma once
#include <iostream>
#include <string>
using namespace std;

class Computer
{
    string name;
    double frequency;
    int ram;
    bool hasDVD;
    double price;
public:
    Computer();
    Computer(string name, double frequency, int ram, bool hasDVD, double price);

    string getName()const;
    double getFrequency()const;
    int getRam()const;
    bool getHasDVD()const;
    double getPrice()const;

    void setPrice(double price);

    void showInfo()const;
};