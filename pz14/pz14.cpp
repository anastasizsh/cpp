#include <iostream>

int main(void) {
    int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13};
    int n = sizeof(vector) / sizeof(vector[0]);
    int *ptr = vector;
    int max_element = *ptr;
    for (int i = 1; i < n; ++i) {
   
        if (*(ptr + i) > max_element) {
            max_element = *(ptr + i);
        }
    }
    std::cout << "Max element: " << max_element << std::endl;

    return 0;
}
