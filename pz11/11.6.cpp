#include <iostream>
using namespace std;

int main() {
    const int m = 4;  
    const int n = 7;  

    int matrix[m][n] = {
        {6, 5, 2, 3, 8, 7, 10},
        {3, 8, 9, 2, 11, 7, 5},
        {10, 15, 10, 9, 1, 5, 3},
        {7, 3, 4, 6, 5, 10, 9}
    };

    int minElement = matrix[0][0]; 
    int minRow = 0;  
    int minCol = 0;  

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "Minimum element is: " << minElement << endl;
    cout << "Row: " << minRow + 1 << ", Column: " << minCol + 1 << endl;

    return 0;
}