#include <iostream>
#include <cstdlib>
using namespace std;

int fourth(int numbers[], int size) {
	
	cout << "Fourth task: " << endl;
	int A;
	cout << "Enter a number A: ";
	cin >> A;
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (numbers[i] > A) {
			count++;
			
		}
	}
	if (count == 0) {
		cout << "There is noone bigger number than A";
	}
	else {
		cout << count;
	}
	cout << endl<<endl;
	return 0;

}