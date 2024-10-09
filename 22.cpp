#include <iostream>
#include <vector>  // Include the vector header
using namespace std;

class Box {
private:
    float length;
    float breadth;
    float height;
    static int object_count;

public:
    Box() : length(0), breadth(0), height(0) {
        object_count++;
    }

    Box(float l, float b, float h) : length(l), breadth(b), height(h) {
        object_count++;
    }

    float volume() const {
        return length * breadth * height;
    }

    static void displayObjectCount() {
        cout << "Number of Box objects created: " << object_count << endl;
    }
};

int Box::object_count = 0;

int main() {
    int n;
    cout << "Enter the number of boxes: ";
    cin >> n;

    vector<Box> boxes;  // Using vector to store Box objects

    float length, breadth, height;

    for (int i = 0; i < n; ++i) {
        cout << "Enter dimensions for Box " << (i + 1) << ":\n";
        cout << "Length: ";
        cin >> length;
        cout << "Breadth: ";
        cin >> breadth;
        cout << "Height: ";
        cin >> height;

        boxes.emplace_back(length, breadth, height);  // Use emplace_back to create Box objects directly in the vector
    }

    for (int i = 0; i < n; ++i) {
        cout << "Volume of Box " << (i + 1) << ": " << boxes[i].volume() << endl;
    }

    Box::displayObjectCount();

    return 0;
}
