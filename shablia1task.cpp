//Shablia Anastasiia ISD-21 v7
#include <iostream>

int main() {
    int N;
    std::cout << "Enter a three-digit positive number: ";
    std::cin >> N;

    if (N < 100 || N > 999) {
        std::cout << "The entered number is not a three-digit positive number." << std::endl;
        return 1;
    }

    int digit1 = N / 100;       
    int digit2 = (N / 10) % 10; 
    int digit3 = N % 10;        

    int count_even_digits = 0;  

    if (digit1 % 2 == 0) {
        count_even_digits++;
    }

    if (digit2 % 2 == 0) {
        count_even_digits++;
    }

    if (digit3 % 2 == 0) {
        count_even_digits++;
    }

    std::cout << "The number of even digits in the number " << N << " equals " << count_even_digits << std::endl;

    return 0;
}
