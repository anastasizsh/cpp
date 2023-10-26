#include <iostream> 
#include <cmath>
using namespace std; 
int main(void) { 
    double pi4 = 1.; 
    long n; 
    cout << "Number of iterations? "; 
    cin >> n; 
    int symbol = -1;
    for (int i=3;i<n;i+=2){
        pi4 += pow(symbol,i) / i;
        symbol *= -1;
    }
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl; 
    return 0; 
} 
