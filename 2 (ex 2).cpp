//Shablya v7
#include <iostream>


using namespace std;

int main(){
    double x;
    double y;
    cout<<"Enter x and y for a dot:";
    cin>>x>>y;


    double lineEquation = x+2;


    if (x<=2 &&  x>=0 && y<=2 && y<= lineEquation){
        cout<< "All is good";
    }
    else{
        cout<< "All is not GOOD";
    }

}
