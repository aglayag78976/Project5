#pragma once
#ifndef CPU_H
#define CPU_H

using namespace std;

class CPU
{
private:
    char* model;
public:
    CPU(const char* model_);
    CPU(const CPU& other); 
    ~CPU(); 
    const char* getModel() const;
};

#endif 