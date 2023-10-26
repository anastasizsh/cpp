//Shablia v7
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    double first;
    double second;
    cout << "Write the first number: ";
    cin >> first;
    cout << "Write the second number: ";
    cin >> second;
    if ((double) 1 / (double) first == (double) 1 / (double) second){ cout << "Results are equal (by 0.000001 epsilon)";}
    else{cout << "Results are not equal (by 0.000001 epsilon)";}
}
