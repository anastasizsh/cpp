#include <iostream>
#include <cstdlib>
using namespace std;

int third(int numbers[], int size) {
	cout << "Third task: " << endl;

	int max = numbers[0];
	int min = numbers[0];
	int index_max = 0;
	int index_min = 0;
	for (int i = 0; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
			index_max = i;
		}
		if (min > numbers[i]) {
			min = numbers[i];
			index_min = i;
		}
	}
	int temp = numbers[index_max];
	numbers[index_max] = numbers[index_min];
	numbers[index_min] = temp;
	
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl << endl;

	return 0;

}