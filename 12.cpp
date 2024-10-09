#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box(int l, int w, int h) {
        this->length = l;
        this->width = w;
        this->height = h;
    }

    int volume() {
        return this->length * this->width * this->height;
    }

    bool isLargerThan(Box &b) {
        return this->volume() > b.volume();
    }

    void display() {
        cout << "Length: " << this->length << ", Width: " << this->width << ", Height: " << this->height << endl;
    }
};

int main() {
    Box box1(3, 4, 5);
    Box box2(2, 6, 4);

    cout << "Box 1 dimensions: ";
    box1.display();
    cout << "Volume of Box 1: " << box1.volume() << endl;

    cout << "Box 2 dimensions: ";
    box2.display();
    cout << "Volume of Box 2: " << box2.volume() << endl;

    if (box1.isLargerThan(box2)) {
        cout << "Box 1 is larger than Box 2." << endl;
    } else {
        cout << "Box 2 is larger than or equal to Box 1." << endl;
    }

    cout << "Program terminated successfully..." << endl;

    return 0;
}
