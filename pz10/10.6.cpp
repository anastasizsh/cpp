#include <iostream>
#include <cstdlib>
using namespace std;

int sixth() {
	int const m = 4;
	int const n = 7;
	int numbers[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			numbers[i][j] = rand() % 10;
			cout << numbers[i][j] << ' ';
		}
		cout << endl;
	}
	int min = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (numbers[i][j] < min) {
				min = numbers[i][j];
			}
		}
	}
	cout << "min number in an array are: " << min<<endl;
	return 0;
}