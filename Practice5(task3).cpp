//Shablia v7
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    
    return 1/x + sqrt(x+3) + 6; 
}

int main() {
    double a, b, h;

    cout << "Enter the start of the interval (a): ";
    cin >> a;

    cout << "Enter the end of the interval (b): ";
    cin >> b;

    cout << "Enter the step size (h): ";
    cin >> h;


    cout << "-------------------" << endl;
    cout << ":   X   :   Y   :" << endl;
    cout << "-------------------" << endl;


    for (double x = a; x <= b; x += h) {
        double y = f(x);


        if (isnan(y)) {
            cout << ": " << setw(5) << x << " : " << "Invalid value" << " : " << endl;
        } else {
            cout << ": " << setw(5) << x << " : " << setw(5) << y << " : " << endl;
        }
    }


    cout << "-------------------" << endl;

    return 0;
}
