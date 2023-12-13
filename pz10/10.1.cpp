#include <iostream>
#include <cstdlib>
using namespace std;


int first() {
	int const m = 4;
	int const n = 3;
	int numbers[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			numbers[i][j] = rand() % 10;
			cout << numbers[i][j]<<" ";
		}
		cout << endl;
	}

	for (int i = 0; i < m; i++) {
		int countEvenNumbers = 0;
		for (int j = 0; j < n; j++) {
			if (numbers[i][j] % 2 == 0 && numbers[i][j] != 0) {
				countEvenNumbers++;
			}
		}
		cout << "In row " << i + 1 << " even numbers are: " << countEvenNumbers << endl;
	}
	return 0;

}