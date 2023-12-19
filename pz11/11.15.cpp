#include <iostream>
using namespace std;

int main() {
    const int m = 3; 
    const int n = 3;  

    int matrix[m][n] = {
        {6, 4, 8},
        {2, 3, 5},
        {1, 4, 2}
    };

    int diagonalSum1 = 0; 
    int diagonalSum2 = 0; 

    for (int i = 0; i < m; i++) {
        diagonalSum1 += matrix[i][i];      
        diagonalSum2 += matrix[i][n - 1 - i];  
    }

    cout << "Sum of elements on the main diagonal: " << diagonalSum1 << endl;
    cout << "Sum of elements on the secondary diagonal: " << diagonalSum2 << endl;

    return 0;
}