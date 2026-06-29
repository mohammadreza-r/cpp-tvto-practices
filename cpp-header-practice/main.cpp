#include "myHeader.h"
#include <iostream>
#include <string>

using namespace std;

void isPrimeNum() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (H_isPrime(number)) {
        cout << number << " is a prime number!" << endl;
    }else {
        cout << number << " is not a prime number!" << endl;
    }
}

void getAge() {
    int dysLived;
    cout << "Enter the number of days o person lived: ";
    cin >> dysLived;
    map<string, int> result = dayToYMD(dysLived);
    cout<<"The person lived "<<result["years"]<<" Years, "<<result["months"]<<" Months, and "<<result["days"]<<" Days";
}

int main() {
    isPrimeNum();
    getAge();
    return 0;
}
