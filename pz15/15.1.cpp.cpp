#include <iostream>

int main(void) {
    int matrix[10][10] = { };
    
    int *ptr = &matrix[0][0];

    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            
            *(ptr + i * 10 + j - 1) = i * j;
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout.width(4);
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
