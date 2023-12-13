#include <iostream>
#include <cstdlib>
using namespace std;

int second() {
	int const m = 6;
	int const n = 4;
	int numbers[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			numbers[i][j] = rand() % 10;
			cout << numbers[i][j]<<' ';
		}
		cout << endl;
	}
	for (int j = 0; j < n; j++) {
		int countEvenNumbers = 0;
		for (int i = 0; i < m; i++) {
			if (numbers[i][j] % 2 == 0) {
				countEvenNumbers++;
			}
		}
		cout << "In column " << j + 1 << " even numbers are: " << countEvenNumbers << endl;
	}
	return 0;
}