#include "SSD.h"

using namespace std;

SSD::SSD(int storage_) : storage(storage_) {}

SSD::SSD(const SSD& other) : storage(other.storage) {}

int SSD::getStorage() const 
{
    return storage;
}
