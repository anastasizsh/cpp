#include <iostream>
using namespace std;

int main() {
    const int m = 3;  
    const int n = 4;  

    int matrix[m][n] = {
        {7, 10, 5, 9},
        {1, 2, 5, 4},
        {6, 4, 8, 12}
    };

    int maxElement = matrix[0][0]; 
    int maxRow = 0; 
    int maxCol = 0; 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Maximum element is: " << maxElement << endl;
    cout << "Row: " << maxRow + 1 << ", Column: " << maxCol + 1 << endl;

    return 0;
}