#include "Computer.h"
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    vector<Computer> computers = 
    {
        Computer("Dell", 3.5, 16, true, 1000),
        Computer("HP", 2.9, 8, false, 800),
        Computer("Apple", 4.2, 32, false, 2000),
        Computer("Lenovo", 3.0, 16, true, 1200)
    };

    string searchName = "HP";

    auto it = find_if(computers.begin(), computers.end(), [&searchName](const Computer& c) 
    {
        return c.getName() == searchName;
    });

    if (it != computers.end()) 
    {
        cout << "Computer found:\n";
        it->showInfo();
    }
    
    else 
    {
        cout << "A computer with a name " << searchName << " not found.\n";
    }


    auto minFrequency = min_element(computers.begin(), computers.end(), 
    [](const Computer& a, const Computer& b) 
    {
        return a.getFrequency() < b.getFrequency();
    });

    if (minFrequency != computers.end()) 
    {
        cout << "The computer with the lowest frequency:\n";
        minFrequency->showInfo();
        computers.erase(minFrequency);
    }


    int dvdCount = count_if(computers.begin(), computers.end(), [](const Computer& c) 
    {
        return c.getHasDVD();
    });

    cout << "Number of computers with DVD-ROM: " << dvdCount << "\n";


    for_each(computers.begin(), computers.end(), [](Computer& c) 
    {
        if (c.getRam() > 16) 
        {
            c.setPrice(c.getPrice() * 1.1);
        }
    });

    cout << "\nList of computers after the price change:\n";
    for (const auto& c : computers) 
    {
        c.showInfo();
        cout << "\n";
    }


    sort(computers.begin(), computers.end(), [](const Computer& a, const Computer& b) 
    {
        return a.getPrice() < b.getPrice();
    });

    cout << "List of computers by increasing price:\n";

    for (const auto& c : computers) 
    {
        c.showInfo();
        cout << "\n";
    }

    sort(computers.begin(), computers.end(), [](const Computer& a, const Computer& b) 
    {
        return a.getPrice() > b.getPrice();
    });

    cout << "List of computers by decreasing price:\n";

    for (const auto& c : computers) 
    {
        c.showInfo();
        cout << "\n";
    }
}