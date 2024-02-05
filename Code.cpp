/*Write a function in c++ that takes the time as three integer arguments (for
hours, minutes and seconds), and returns the number of seconds since
the last time the clock “struck 12.” Use this function to calculate the
amount of time in seconds between two times, both of which are within
one 12-hour cycle of the clock.*/


#include<iostream>
using namespace std;

int secondsSinceLastNoon(int hours, int minutes, int seconds) {
    hours = hours % 12;
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    return totalSeconds;
}

int main()
{
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;

    cout << "Enter the first time (hours minutes seconds): ";
    cin >> hours1 >> minutes1 >> seconds1;

    cout << "Enter the second time (hours minutes seconds): ";
    cin >> hours2 >> minutes2 >> seconds2;

    int secondsSinceNoon1 = secondsSinceLastNoon(hours1, minutes1, seconds1);
    int secondsSinceNoon2 = secondsSinceLastNoon(hours2, minutes2, seconds2);
    int timeDifference = secondsSinceNoon2 - secondsSinceNoon1;

    cout << "Time difference in seconds: " << timeDifference << endl;

    return 0;
}