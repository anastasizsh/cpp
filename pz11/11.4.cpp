#include <iostream>
using namespace std;

int main() {
    const int m = 4; 
    const int n = 6;  

    int matrix[m][n] = {
        {2, 5, 8, 3, 1, 7},
        {1, 3, 7, 2, 9, 6},
        {4, 6, 10, 9, 8, 12},
        {9, 12, 15, 6, 3, 11}
    };

    for (int j = 0; j < n; j++) {
        int columnSum = 0;  

        for (int i = 0; i < m; i++) {
            columnSum += matrix[i][j];
        }

        cout << "Sum of elements in Column " << j + 1 << ": " << columnSum << endl;
    }

    return 0;
}