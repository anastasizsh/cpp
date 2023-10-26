//Shablia v7
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;

    for (int i = 1; i <= 5; ++i) {
        cout << "Enter the value of x to calculate the function (iteration " << i << "): ";
        cin >> x;

        double y;

        // Calculating the function y
        if (x == 0) {
            cout << "Division by zero is not possible. Please enter a different value for x." << endl;
        } else {
            y = sin(5 * x + 1.5) / (5 * x);
            cout << "Result for x = " << x << ": " << y << endl;
        }
    }

    return 0;
}
