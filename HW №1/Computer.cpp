#include "Computer.h"

Computer::Computer()
{
    name = "undefined";
    frequency = 0;
    ram = 0;
    hasDVD = true;
    price = 0;
}

Computer::Computer(string name, double frequency, int ram, bool hasDVD, double price)
{
    this->name = name;
    this->frequency = frequency;
    this->ram = ram;
    this->hasDVD = hasDVD;
    this->price = price;
}

string Computer::getName() const
{
    return name;
}

double Computer::getFrequency() const
{
    return frequency;
}

int Computer::getRam() const
{
    return ram;
}

bool Computer::getHasDVD() const
{
    return hasDVD;
}

double Computer::getPrice() const
{
    return price;
}

void Computer::setPrice(double price)
{
    this->price = price;
}

void Computer::showInfo() const
{
    cout << "---------------------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Frequency: " << frequency << endl;
    cout << "RAM: " << ram << endl;
    cout << "DVD: " << (hasDVD ? "YES" : "NO") << endl;
    cout << "Price: " << price << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;
}
