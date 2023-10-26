//Shablia v7
include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() { 
    double first =  2.3;
    double second = 2.3;
    double third = 2.123456;
    double fourth = 2.123456;
    double fiveth = 2.123456;
    cout << fixed << setprecision(1) << first << endl;
    cout << fixed << setprecision(2) << second << endl;
    cout << setprecision(6) << third << endl;
    cout << setprecision(2) << fourth << endl;
    cout << setprecision(0) << fiveth;
}
