//Shablya v7
#include <iostream>
#include <math.h>


int main() {
    double x, res, res1;

    std:: cout<< "Enter x:";
    std:: cin>> x ;


    if(x>=0) {
        res = (cos(x) - (pow(sin(x), 3)));
        std::cout << "Your result is:" << res;
    }

         if(x<0){
            res1= (x*(pow(M_E,-x))+(1/(x-1.3)));
            std::cout<<"Your result is:"<<res1;
        }



}
