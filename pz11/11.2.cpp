#include <iostream>
using namespace std;

int main() {
    const int m = 6;  
    const int n = 4;  

    int matrix[m][n] = {
        {7, 4, 3, 3},
        {2, 6, 8, 10},
        {3, 3, 5, 5},
        {10, 11, 12, 14},
        {7, 7, 8, 4},
        {2, 1, 3, 6}
    };

    for (int j = 0; j < n; j++) {
        int evenCount = 0; 

        for (int i = 0; i < m; i++) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            }
        }

        cout << "Column " << j + 1 << ": " << evenCount << " even numbers\n";
    }

    return 0;
}