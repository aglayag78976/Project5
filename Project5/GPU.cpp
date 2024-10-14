#include "GPU.h"
#include <iostream>

using namespace std;

GPU::GPU(const char* model_) 
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

GPU::GPU(const GPU& other) 
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

GPU::~GPU() 
{
    delete[] model;
}

const char* GPU::getModel() const 
{
    return model;
}
