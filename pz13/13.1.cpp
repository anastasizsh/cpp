#include <iostream> 
using namespace std; 
 
struct Date { 
    int hours; 
    int minutes; 
}; 
 
int main() { 
    Date initialTime;  
 
    cout << "Enter the hours: "; 
    cin >> initialTime.hours; 
 
    cout << "Enter the minutes: "; 
    cin >> initialTime.minutes; 
 
    int elapsedTime; 
 
    cout << "Enter the elapsed time in minutes: "; 
    cin >> elapsedTime; 
 
    int totalMinutes = initialTime.hours * 60 + initialTime.minutes + elapsedTime; 
    int newHours = totalMinutes / 60 % 24; 
    int newMinutes = totalMinutes % 60; 
 
    cout << "A new time: " << newHours << ":" << (newMinutes < 10 ? "0" : "") << newMinutes << endl; 
 
    return 0; 
}