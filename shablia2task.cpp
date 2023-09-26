//Shablia Anastasiia ISD-21 v7
#include <iostream>
#include <string>

int main() {
    char countryLetter;
    std::cout << "Enter the first letter of a country's name: ";
    std::cin >> countryLetter;

    switch (countryLetter) {
        case 'A':
        case 'a':
            std::cout << "Country: Asia" << std::endl;
            std::cout << "Area: Large" << std::endl;
            break;

        case 'E':
        case 'e':
            std::cout << "Country: Europe" << std::endl;
            std::cout << "Area: Large" << std::endl;
            break;

        case 'N':
        case 'n':
            std::cout << "Country: North America" << std::endl;
            std::cout << "Area: Large" << std::endl;
            break;

        case 'S':
        case 's':
            std::cout << "Country: South America" << std::endl;
            std::cout << "Area: Large" << std::endl;
            break;

        case 'O':
        case 'o':
            std::cout << "Country: Oceania" << std::endl;
            std::cout << "Area: Large" << std::endl;
            break;

        default:
            std::cout << "Country not found or incorrect input." << std::endl;
            break;
    }

    return 0;
}
