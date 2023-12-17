#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date startTime, endTime;

    cout << "Enter the hours of the starting time: ";
    cin >> startTime.hours;

    while (startTime.hours < 0 || startTime.hours > 23) {
        cout << "Invalid input! Enter the hours again (0-23): ";
        cin >> startTime.hours;
    }

    cout << "Enter the minutes of the starting time: ";
    cin >> startTime.minutes;

    while (startTime.minutes < 0 || startTime.minutes > 59) {
        cout << "Invalid input! Enter the minutes again (0-59): ";
        cin >> startTime.minutes;
    }

    cout << "Enter the hours of the ending time: ";
    cin >> endTime.hours;

    while (endTime.hours < 0 || endTime.hours > 23) {
        cout << "Invalid input! Enter the hours again (0-23): ";
        cin >> endTime.hours;
    }

    cout << "Enter the minutes of the ending time: ";
    cin >> endTime.minutes;

    while (endTime.minutes < 0 || endTime.minutes > 59) {
        cout << "Invalid input! Enter the minutes again (0-59): ";
        cin >> endTime.minutes;
    }

    int totalStartMinutes = startTime.hours * 60 + startTime.minutes;
    int totalEndMinutes = endTime.hours * 60 + endTime.minutes;
    int durationMinutes = (totalEndMinutes - totalStartMinutes + 24 * 60) % (24 * 60);

    Date durationTime;
    durationTime.hours = durationMinutes / 60;
    durationTime.minutes = durationMinutes % 60;

    cout << "Event duration: ";
    if (durationTime.hours < 10) cout << "0";
    cout << durationTime.hours << ":";
    if (durationTime.minutes < 10) cout << "0";
    cout << durationTime.minutes << endl;

    return 0;
}