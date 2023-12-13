#include <iostream>
#include <cstdlib>
using namespace std;

int fiveth(int numbers[], int size) {
	cout << "Fiveth task: " << endl;
	int max = numbers[0];
	int index_max = 0;
	for (int i = 0; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	int max2 = numbers[0];
	for (int i = 0; i < size; i++) {
		if (numbers[i] != max && max2 < numbers[i]) {
			max2 = numbers[i];
		}
	}
	
	cout << "The second bigger number: " << max2;
	cout << endl << endl;
	return 0;
}