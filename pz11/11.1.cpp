#include <iostream>
using namespace std;

int main() {
    const int m = 4; 
    const int n = 3;  

    int matrix[m][n] = {
        {5, 3, 6},
        {3, 5, 8},
        {4, 7, 12},
        {10, 2, 9}
    };

    for (int i = 0; i < m; i++) {
        int evenCount = 0;  

        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            }
        }

        cout << "Row " << i + 1 << ": " << evenCount << " even numbers\n";
    }

    return 0;
}