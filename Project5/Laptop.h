#pragma once
#ifndef LAPTOP_H
#define LAPTOP_H

#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

using namespace std;

class Laptop
{
private:
    char* name;
    double price;
    char color;
    CPU cpu;
    GPU gpu;
    RAM ram;
    SSD ssd;
    static int count;
public:
    Laptop(const char* name_, double price_, char color_, const CPU& cpu_, const GPU& gpu_, const RAM& ram_, const SSD& ssd_);
    Laptop(const Laptop& other); 
    ~Laptop(); 
    static int getCount();
    void displayDetails() const;
};

#endif 

