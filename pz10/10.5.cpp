#include <iostream>
#include <cstdlib>
using namespace std;

int fiveth() {
	int const m = 4;
	int const n = 3;
	int numbers[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			numbers[i][j] = rand() % 10;
			cout << numbers[i][j] << ' ';
		}
		cout << endl;
	}
	int max = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (numbers[i][j] > max) {
				max = numbers[i][j];
				
			}
		}
	}
	cout << "Max number in an array are: " << max << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (numbers[i][j] == max) {
				cout <<"(" << i << "," << j<<")"<<endl;
			}
		}
	}
	
	return 0;