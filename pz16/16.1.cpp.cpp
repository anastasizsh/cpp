#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    std::srand(static_cast<unsigned int>(std::time(0)));

    int size;
    std::cout << "Enter the size of the dynamic array: ";
    std::cin >> size;

    float *dynamicArray = new float[size];

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = static_cast<double>(rand()) / RAND_MAX * 4.0 - 2.0;
    }

    std::cout << "Dynamic array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    int positiveCount = 0, negativeCount = 0;
    for (int i = 0; i < size; ++i) {
        if (dynamicArray[i] > 0) {
            positiveCount++;
        } else if (dynamicArray[i] < 0) {
            negativeCount++;
        }
    }
  
    std::cout << "Number of positive numbers:" << positiveCount << std::endl;
    std::cout << "Number of negative numbers: " << negativeCount << std::endl;

    delete[] dynamicArray;

    return 0;
}
