#include <iostream>
using namespace std;

class TIME {
private:
    int hours;
    int minutes;
    int seconds;

public:
    TIME() : hours(0), minutes(0), seconds(0) {}

    TIME(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    TIME add(const TIME& other) const {
        TIME result;
        result.hours = hours + other.hours;
        result.minutes = minutes + other.minutes;
        result.seconds = seconds + other.seconds;
        result.normalize();
        return result;
    }

    void display() const {
        cout << "Time: " << hours << " : " << minutes << " : " << seconds << endl;
    }

    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
        normalize();
    }
};

int main() {
    TIME time1, time2;

    cout << "Enter time for first object:\n";
    time1.input();

    cout << "Enter time for second object:\n";
    time2.input();

    TIME totalTime = time1.add(time2);
    totalTime.display();

    return 0;
}
