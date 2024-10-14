#include "RAM.h"

using namespace std;

RAM::RAM(int size_) : size(size_) {}

RAM::RAM(const RAM& other) : size(other.size) {}

int RAM::getSize() const 
{
    return size;
}
