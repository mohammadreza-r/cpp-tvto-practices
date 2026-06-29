#include "myHeader.h"
using namespace std;

bool H_isPrime(int number) {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

map<string, int> dayToYMD(int daysLived) {
    map<string, int> yMDLived = {{"years", 0},{"months",0},{"days",0}};
    int years = daysLived / 365;
    int remainingDays = daysLived % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;

    yMDLived["years"] = years;
    yMDLived["months"] = months;
    yMDLived["days"] = days;

    return yMDLived;
}
