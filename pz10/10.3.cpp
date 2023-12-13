#include <iostream>
#include <cstdlib>
using namespace std;

int third() {
	int const m = 5;
	int const n = 7;
	int numbers[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			numbers[i][j] = rand() % 10;
			cout << numbers[i][j] << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < m; i++) {
		int sumRow = 0;
		for (int j = 0; j < n; j++) {
			sumRow += numbers[i][j];
				
		}
		cout << "Sum in a row: " << i + 1 << " are: " << sumRow << endl;
	}
		
	
	return 0;

}