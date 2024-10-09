#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":" 
             << (minutes < 10 ? "0" : "") << minutes;
    }

    Time timeDifference(const Time& other) const {
        int totalMinutes1 = hours * 60 + minutes;
        int totalMinutes2 = other.hours * 60 + other.minutes;
        int diffMinutes = totalMinutes1 - totalMinutes2;

        if (diffMinutes < 0) {
            diffMinutes += 24 * 60;
        }

        return Time(diffMinutes / 60, diffMinutes % 60);
    }
};

int main() {
    int h1, m1, h2, m2;

    cout << "Enter current time of city 1 (hours minutes): ";
    cin >> h1 >> m1;
    Time city1(h1, m1);

    cout << "Enter current time of city 2 (hours minutes): ";
    cin >> h2 >> m2;
    Time city2(h2, m2);

    Time difference = city1.timeDifference(city2);

    cout << "Time difference between city 1 and city 2 is: ";
    difference.display();
    cout << endl;

    cout << "Program terminated successfully..." << endl;

    return 0;
}
