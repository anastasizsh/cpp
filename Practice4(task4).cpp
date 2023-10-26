//Shablia v7
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int first,second,third,fourth;
    cout << "Write your IP (4 numbers): ";
    cin >> first;
    cin >> second;
    cin >> third;
    cin >> fourth;
    if (first <= 255 && second<=255 && third<=255 && fourth<=255){cout << first<<"."<<second<<"."<<third<<"."<<fourth;}
    else{cout<<"Your IP isn't true!";}
}
