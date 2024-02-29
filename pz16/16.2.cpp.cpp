#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    const int rows = 3;
    const int cols = 3;

    int** dynamicArray = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicArray[i][j] = rand() % 10; 
        }
    }

    std::cout << "Elements on the main diagonal: ";
    for (int i = 0; i < rows; ++i) {
        std::cout << dynamicArray[i][i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements on the side diagonal: ";
    for (int i = 0; i < rows; ++i) {
        std::cout << dynamicArray[i][rows - i - 1] << " ";
    }
    std::cout << std::endl;

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (dynamicArray[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    std::cout << "Number of paired elements:" << evenCount << std::endl;
    std::cout << "Number of odd elements: " << oddCount << std::endl;

    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
