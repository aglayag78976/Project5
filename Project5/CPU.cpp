#include "CPU.h"
#include <iostream>

using namespace std;

CPU::CPU(const char* model_) 
{
    int length = 0;
    while (model_[length] != '\0') ++length;
    model = new char[length + 1];
    for (int i = 0; i < length; ++i) 
    {
        model[i] = model_[i];
    }
    model[length] = '\0';
}

CPU::CPU(const CPU& other) 
{
    int length = 0;
    while (other.model[length] != '\0') ++length;
    model = new char[length + 1];
    for (int i = 0; i < length; ++i) 
    {
        model[i] = other.model[i];
    }
    model[length] = '\0';
}

CPU::~CPU() 
{
    delete[] model;
}

const char* CPU::getModel() const 
{
    return model;
}
