#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

void count(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }

    string line;
    int charCount = 0;
    map<string, int> wordCount;

    while (getline(file, line)) {
        charCount += line.length();
        stringstream ss(line);
        string word;

        while (ss >> word) {
            wordCount[word]++;
        }
    }

    file.close();

    cout << "Character count: " << charCount << endl;
    cout << "Word occurrences:" << endl;

    for (const auto& entry : wordCount) {
        cout << entry.first << ": " << entry.second << endl;
    }
}

int main() {
    string filename;

    cout << "Enter the filename: ";
    cin >> filename;

    count(filename);

    return 0;
}
