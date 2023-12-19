#include <iostream>
using namespace std;

int main() {
    const int m = 5; 
    const int n = 7;  


    int matrix[m][n] = {
        {2, 5, 8, 3, 1, 7, 4},
        {1, 3, 7, 2, 9, 6, 5},
        {4, 6, 10, 9, 8, 12, 15},
        {9, 12, 15, 6, 3, 11, 14},
        {8, 7, 2, 11, 5, 13, 16}
    };

    for (int i = 0; i < m; i++) {
        int rowSum = 0;  

        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }

       cout << "Sum of elements in Row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}