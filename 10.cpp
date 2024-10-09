#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title;
    string publication;

public:
    virtual void read() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter publication: ";
        getline(cin, publication);
    }

    virtual void show() {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }

    virtual ~Media() {}
};

class Book : public Media {
private:
    int numPages;

public:
    void read() override {
        Media::read();
        cout << "Enter number of pages: ";
        cin >> numPages;
    }

    void show() override {
        Media::show();
        cout << "Number of pages: " << numPages << endl;
    }
};

class Tape : public Media {
private:
    float playTime;

public:
    void read() override {
        Media::read();
        cout << "Enter playing time (in minutes): ";
        cin >> playTime;
    }

    void show() override {
        Media::show();
        cout << "Playing time: " << playTime << " minutes" << endl;
    }
};

int main() {
    const int size = 4;
    Media* mediaList[size];

    for (int i = 0; i < size; i++) {
        int choice;
        cout << "\nEnter 1 for Book, 2 for Tape: ";
        cin >> choice;

        if (choice == 1) {
            mediaList[i] = new Book();
        } else {
            mediaList[i] = new Tape();
        }
        mediaList[i]->read();
    }

    cout << "\nMedia Details:\n";
    for (int i = 0; i < size; i++) {
        mediaList[i]->show();
        cout << endl;
        delete mediaList[i];
    }

    cout << "Program terminated successfully..." << endl;

    return 0;
}
