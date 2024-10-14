#pragma once
#ifndef GPU_H
#define GPU_H

using namespace std;

class GPU
{
private:
    char* model;
public:
    GPU(const char* model_);
    GPU(const GPU& other);
    ~GPU(); 
    const char* getModel() const;
};

#endif 