//Shablia v7
#include <iostream>

using namespace std;

int main() {
    long long factorial = 1;

    for (int i = 1; i <= 15; ++i) {
        factorial *= i;
        cout << "Factorial of " << i << " = " << factorial << endl;
    }

}
