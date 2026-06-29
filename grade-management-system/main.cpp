#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int numGrades;
    vector<double> grades;

    cout << "Enter the number of grades: ";
    cin >> numGrades;

    while (numGrades <= 0) {
        cout << "Please enter a positive number: ";
        cin >> numGrades;
    }

    for (int i = 0; i < numGrades; i++) {
        double grade;
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grade;
        grades.push_back(grade);
    }

    int choice;
    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Display all grades\n";
        cout << "2. Calculate average\n";
        cout << "3. Find the highest grade\n";
        cout << "4. Sort and display grades\n";
        cout << "5. Display frequency of each grade\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\nAll grades:\n";
                for (int i = 0; i < grades.size(); i++) {
                    cout << "Grade " << (i + 1) << ": " << grades[i] << "\n";
                }
                break;
            }

            case 2: {
                double sum = 0;
                for (int i = 0; i < grades.size(); i++) {
                    sum += grades[i];
                }
                double average = sum / grades.size();
                cout << "\nAverage of grades: " << average << "\n";
                break;
            }

            case 3: {
                double maxGrade = grades[0];
                for (int i = 1; i < grades.size(); i++) {
                    if (grades[i] > maxGrade) {
                        maxGrade = grades[i];
                    }
                }
                cout << "\nHighest grade: " << maxGrade << "\n";
                break;
            }

            case 4: {
                vector<double> sortedGrades = grades;
                sort(sortedGrades.begin(), sortedGrades.end());
                cout << "\nSorted grades (ascending):\n";
                for (int i = 0; i < sortedGrades.size(); i++) {
                    cout << sortedGrades[i] << " ";
                }
                cout << "\n";
                break;
            }

            case 5: {
                map<double, int> frequency;
                for (int i = 0; i < grades.size(); i++) {
                    frequency[grades[i]]++;
                }
                cout << "\nFrequency of each grade:\n";
                for (const auto& pair : frequency) {
                    cout << pair.first << ": " << pair.second << " time(s)\n";
                }
                break;
            }

            case 6: {
                cout << "\nExiting program...\n";
                break;
            }

            default: {
                cout << "\nInvalid choice! Please try again.\n";
                break;
            }
        }
    } while (choice != 6);

    return 0;
}
