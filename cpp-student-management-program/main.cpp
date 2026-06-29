#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <map>

using namespace std;

// Function to capitalize first letter of a string
string capitalizeFirst(const string& str) {
    if (str.empty()) return str;
    string result = str;
    result[0] = toupper(result[0]);
    return result;
}

int main() {
    const int NUM_STUDENTS = 5;
    string students[NUM_STUDENTS];

    // Part 1: Get 5 student names from user
    cout << "Please enter " << NUM_STUDENTS << " student names:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << (i + 1) << ": ";
        getline(cin, students[i]);
    }

    cout << "\n" << string(50, '=') << "\n\n";

    // Part 2: Search for a name and display position and count
    string searchName;
    cout << "Enter a name to search: ";
    getline(cin, searchName);

    int count = 0;
    vector<int> positions;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (students[i] == searchName) {
            count++;
            positions.push_back(i+1);
        }
    }

    if (count > 0) {
        cout << "Name '" << searchName << "' found " << count << " time(s).\n";
        cout << "Found at position(s): ";
        for (int pos : positions) {
            cout << pos << " ";
        }
        cout << "\n";
    } else {
        cout << "Name '" << searchName << "' not found.\n";
    }

    cout << "\n" << string(50, '=') << "\n\n";

    // Part 3: Print names one by one (every other)
    cout << "Names printed one by one (every other):\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << students[i] << "\n";
    }

    cout << "\n" << string(50, '=') << "\n\n";

    // Part 4: Print names in two rows pattern
    cout << "Names in two rows pattern:\n";
    if (NUM_STUDENTS >= 1) cout << students[0];
    if (NUM_STUDENTS >= 2) cout << ".\t\t" << students[1];
    if (NUM_STUDENTS >= 3) cout << ".\t\t" << students[2];
    cout << "\n";
    if (NUM_STUDENTS >= 4) cout << "\t" << students[3];
    if (NUM_STUDENTS >= 5) cout << ".\t\t" << students[4];
    cout << "\n";

    cout << "\n" << string(50, '=') << "\n\n";

    // Part 5: Print names from last to first
    cout << "Names from last to first:\n";
    for (int i = NUM_STUDENTS - 1; i >= 0; i--) {
        cout << students[i] << "\n";
    }

    cout << "\n" << string(50, '=') << "\n\n";

    // Part 6: Show frequency of each name
    cout << "Frequency of each name:\n";
    map<string, int> frequency;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        frequency[students[i]]++;
    }
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << " time(s)\n";
    }

    cout << "\n" << string(50, '=') << "\n\n";

    // Part 7: Display first letter of each name capitalized
    cout << "Names with capitalized first letter:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << capitalizeFirst(students[i]) << "\n";
    }

    return 0;
}
