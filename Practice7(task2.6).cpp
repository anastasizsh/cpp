//Shablia v7
#include <iostream>


using namespace std;



int main() {
        int c0;
        cin >> c0;
        bool key = true;
        int steps = 0;
        while (key){
            if (c0 %2 ==0){
                c0 /= 2;
                steps ++;
            }
            else{c0 = 3 * c0 +1;steps++;}
            if (c0 == 1){key = false;}
            cout << c0 << endl;
        }
        cout << "Steps: " << steps;
    
}
