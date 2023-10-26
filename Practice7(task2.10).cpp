#include <iostream>
using namespace std;
int main(void) {
    
    int n;
    cin >> n;
    while (n < 100){
        cout << '+';
        for(int i = 0; i < n-2; i++)
            cout << '-';
            cout << '+' << endl;
        for(int i = 0; i < n-2; i++) {
            cout << '|';
        for(int j = 0; j < n-2; j++)
            cout << ' ';
            cout << '|' << endl;
        }
        cout << '+';
        for(int i = 0; i < n-2; i++)
            cout << '-';
            cout << '+' << endl;
        return 0;
    }
    cout << "Sorry, the side size is too big!";
}
