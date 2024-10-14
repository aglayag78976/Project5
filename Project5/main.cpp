#include <iostream>
#include "Laptop.h"

using namespace std;

int main() 
{
    CPU cpu("Intel Core i7");
    GPU gpu("NVIDIA GTX 1660");
    RAM ram(16);
    SSD ssd(512);

    Laptop laptop1("Laptop1", 1200.99, 'B', cpu, gpu, ram, ssd);

    Laptop laptopCopy = laptop1;

    laptop1.displayDetails();
    laptopCopy.displayDetails();

    cout << "Total Laptops: " << Laptop::getCount() << endl;

    return 0;
}
