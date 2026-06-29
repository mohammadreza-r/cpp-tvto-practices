#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>
#include<stdexcept>

void numberFeatureIdentifier() {
    double num;
    struct numFeatures {
        bool positive;
        bool negative;
        bool zero;
        string oddOrEven;
    };
    numFeatures nF;
    cout<<"Enter number : ";
    cin>>num;
    int number = int(num);
    cout<<endl<<"---------------------------------"<<endl;
    if(number>0) {
        nF.positive = true;
        nF.negative = false;
        nF.zero = false;
        if (number % 2 == 0) {
            nF.oddOrEven = "even";
        }else {
            nF.oddOrEven = "odd";
        }
    }else if (number<0) {
        nF.positive = false;
        nF.negative = true;
        nF.zero = false;
        if (number % 2 == 0) {
            nF.oddOrEven = "even";
        }else {
            nF.oddOrEven = "odd";
        }
    }else {
        nF.positive = false;
        nF.negative = false;
        nF.zero = true;
        if (number % 2 == 0) {
            nF.oddOrEven = "even";
        }else {
            nF.oddOrEven = "odd";
        }
    }
    cout<<"The Number : "<<number<<" is "<<((nF.positive)? "positive" : (nF.negative)? "negative" : "zero")<<" and "<<nF.oddOrEven<<endl;
}

void minMax(string action = "MAX") {
    double num1,num2;
    cout<<"Enter number : ";
    cin>>num1;
    cout<<endl<<"Enter number : ";
    cin>>num2;
    int number1 = int(num1);
    int number2 = int(num2);
    cout<<endl<<"---------------------------------"<<endl;
    if (action == "MAX") {
        cout<<"The Biggest number is: "<<max(number1,number2)<<endl;
    }else {
        cout<<"The Smallest number is: "<<min(number1,number2)<<endl;
    }
}

void minMax_Enhanced(string action = "MAX") {
    double num1, num2, num3;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    int number1 = int(num1);
    int number2 = int(num2);
    int number3 = int(num3);

    int result;
    if (action == "MAX" || action == "max") {
        result = number1;
        if (number2 > result) result = number2;
        if (number3 > result) result = number3;
        cout << "Maximum value: " << result << endl;
    }
    else if (action == "MIN" || action == "min") {
        result = number1;
        if (number2 < result) result = number2;
        if (number3 < result) result = number3;
        cout << "Minimum value: " << result << endl;
    }
    else {
        cout << "Invalid action! Use 'MAX' or 'MIN'" << endl;
    }
}

void weekDaysPerNum() {
    int num;
    cout<<"Enter number : ";
    cin>>num;
    vector<string> weekDays = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    try {
        cout<<"The Day Is: "<<weekDays.at(num)<<endl;
    }catch(const out_of_range& e) {
        cout << "Out Of Index! Please enter a number between 0 and 6." << endl;
    }catch (...) {
        cout<<"an unexpected error has been occurred"<<endl;
    }
}

void numberPerWeekDays() {
    string wDay;
    cout<<"Enter a weekday : ";
    getline(cin,wDay);
    map<string, int> weekDays = {{"Saturday",0},{"Sunday",1},{"Monday",2},{"Tuesday",3},{"Wednesday",4},{"Thursday",5},{"Friday",6}};
    try {
        cout<<"The Number Of The Day Is: "<<weekDays.at(wDay)<<endl;
    }catch(const out_of_range& e) {
        cout<<"No Such Day"<<endl;
    }
}

void studentGrader() {
    int point;
    cout<<"Enter Student Point : ";
    cin>>point;
    switch (point) {
        case 0 ... 6:
            cout<<"Student Grade is : F";
            break;
        case 7 ... 13:
            cout<<"Student Grade is : F+";
            break;
        case 14 ... 16:
            cout<<"Student Grade is : C";
            break;
        case 17 ... 18:
            cout<<"Student Grade is : B";
            break;
        case 19 ... 20:
            cout<<"Student Grade is : A";
            break;
        default:
            cout<<"No Grades For this point (points must be in the range of 0-20)"<<endl;
    }
}

void studentGrader_2() {
    int point;
    cout << "Enter Student Point: ";
    cin >> point;

    switch(point) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Student Grade is: F";
            break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            cout << "Student Grade is: F+";
            break;
        case 14:
        case 15:
        case 16:
            cout << "Student Grade is: C";
            break;
        case 17:
        case 18:
            cout << "Student Grade is: B";
            break;
        case 19:
        case 20:
            cout << "Student Grade is: A";
            break;
        default:
            cout << "No Grades For this point (points must be in the range of 0-20)" << endl;
    }
}
void studentGrader_Accurate() {
    double point;
    cout << "Enter Student Point: ";
    cin >> point;

    if (point >= 0 && point < 7) {
        cout << "Student Grade is: F";
    } else if (point >= 7 && point < 14) {
        cout << "Student Grade is: F+";
    } else if (point >= 14 && point < 16) {
        cout << "Student Grade is: C";
    } else if (point >= 16 && point < 18) {
        cout << "Student Grade is: B";
    } else if (point >= 18 && point <= 20) {
        cout << "Student Grade is: A";
    } else {
        cout << "No Grades For this point (points must be in the range of 0-20)" << endl;
    }
}
int main() {
    numberFeatureIdentifier();
    minMax();
    minMax("MIN");
    minMax_Enhanced("MAX");
    weekDaysPerNum();
    numberPerWeekDays();
    studentGrader();
    studentGrader_2();
    studentGrader_Accurate();
    return 0;
}
