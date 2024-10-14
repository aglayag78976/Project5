#include "Laptop.h"
#include <iostream>

using namespace std;

int Laptop::count = 0;

Laptop::Laptop(const char* name_, double price_, char color_, const CPU& cpu_, const GPU& gpu_, const RAM& ram_, const SSD& ssd_)
    : price(price_), color(color_), cpu(cpu_), gpu(gpu_), ram(ram_), ssd(ssd_) 
{
    int length = 0;
    while (name_[length] != '\0') ++length;
    name = new char[length + 1];
    for (int i = 0; i < length; ++i) 
    {
        name[i] = name_[i];
    }
    name[length] = '\0';
    count++;
}

Laptop::Laptop(const Laptop& other)
    : price(other.price), color(other.color), cpu(other.cpu), gpu(other.gpu), ram(other.ram), ssd(other.ssd) 
{
    int length = 0;
    while (other.name[length] != '\0') ++length;
    name = new char[length + 1];
    for (int i = 0; i < length; ++i) 
    {
        name[i] = other.name[i];
    }
    name[length] = '\0';
    count++;
}

Laptop::~Laptop() 
{
    delete[] name;
    count--;
}

int Laptop::getCount() 
{
    return count;
}

void Laptop::displayDetails() const 
{
    cout << "Laptop Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Color: " << color << endl;
    cout << "CPU Model: " << cpu.getModel() << endl;
    cout << "GPU Model: " << gpu.getModel() << endl;
    cout << "RAM Size: " << ram.getSize() << "GB" << endl;
    cout << "SSD Storage: " << ssd.getStorage() << "GB" << endl;
}
