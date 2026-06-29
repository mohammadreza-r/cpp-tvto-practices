#include<iostream>
#include<string>
#include<list>
#include<algorithm>
#include <cmath>
#include <cstring>
#include <math.h>
using namespace std;

void maxToMinCounter() {
    int num;
    int min = 0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=num;i>=min;i--) {
        cout<<i<<endl;
    }
}

void divisorPrinter() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    list<int> divisors;
    for(int i=num;i>0;i--) {
        if(num%i == 0) {
            divisors.push_back(i);
        }
    }
    for (int divisor : divisors) {
        cout<<divisor<<endl;
    }
}

list<int> divisorFinder(const int number) {
    list<int> divisors;
    for(int i=number;i>0;i--) {
        if(number%i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num-1; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimes() {
    int limit;
    cout << "Enter Limit: ";
    cin >> limit;

    cout << "Printing Primes Until: " << limit << ":\n";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void printNPrimes() {
    int n;
    cout << "How Many Primes? ";
    cin >> n;

    int count = 0;
    int num = 2;

    cout << "First " << n << " Primes:\n";
    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

void evenCountDown() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    list<int> evens;
    for(int i=num;i>0;i--) {
        if(i%2 == 0) {
            evens.push_back(i);
        }
    }
    for (int even : evens) {
        cout<<even<<endl;
    }
}

void primeCountDown() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    list<int> primes;
    for(int i=num;i>0;i--) {
        if(isPrime(i)) {
            primes.push_back(i);
        }
    }
    for (int prime : primes) {
        cout<<prime<<endl;
    }
}

void twoDigitEvenCountDown() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    list<int> evens;
    if (num >= 12 && num <= 99) {
        for(int i=num;i>0;i--) {
            if(i%2 == 0) {
                evens.push_back(i);
            }
        }
    }else if (num > 99) {
        num = 99;
        for(int i=num;i>0;i--) {
            if(i%2 == 0) {
                evens.push_back(i);
            }
        }
    }
    if (evens.size() != 0) {
        for (int even : evens) {
            cout<<even<<endl;
        }
    }else {
        cout<<"No Smaller Two Digit Evens"<<endl;
    }
}

void commonDivisors() {
    int num1,num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter a number: ";
    cin>>num2;
    list<int> divisors1 = divisorFinder(num1);
    list<int> divisors2 = divisorFinder(num2);
    divisors1.sort();
    divisors2.sort();
    list<int> commonDivisors;
    set_intersection(divisors1.begin(), divisors1.end(),
        divisors2.begin(), divisors2.end(),
        back_inserter(commonDivisors));
    cout<<"Common Divisors:"<<endl;
    for (int divisor : commonDivisors) cout << divisor << " ";
}

void oddEvenMediators() {
    int num1,num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter a number: ";
    cin>>num2;
    int smallest = min(num1,num2);
    int largest = max(num1,num2);
    string mediatorCondition;
    cout<<"Enter mediator condition (evens/odds): ";
    cin>>mediatorCondition;
    if (mediatorCondition == "evens") {
        cout<<"("<<smallest<<") ";
        for(int i=smallest;i<=largest;i++) {
            if (i==largest || i==smallest) {
                continue;
            }
            if(i%2 == 0) {
                cout<<i<<" ";
            }
        }
        cout<<"("<<largest<<")"<<endl;
    }else if (mediatorCondition == "odds") {
        cout<<"("<<smallest<<") ";
        for(int i=smallest;i<=largest;i++) {
            if (i==largest || i==smallest) {
                continue;
            }
            if(i%2 != 0) {
                cout<<i<<" ";
            }
        }
        cout<<"("<<largest<<")"<<endl;
    }else {
        cout<<"NO MEDIATOR CONDITION!"<<endl;
    }
}

template<typename T>
T unlimitedMax(T value) {
    return value;
}

template<typename T, typename... Args>
T unlimitedMax(T first, Args... args) {
    T rest = unlimitedMax(args...);
    return (first > rest) ? first : rest;
}

double unlimitedMaxList(const list<double>& numbers) {
    if (numbers.empty()) {
        throw invalid_argument("Cannot find max of empty list");
    }
    return *max_element(numbers.begin(), numbers.end());
}

void someCalcs() {
    string num;
    list<double> numList;
    while(true) {
        cout << "Enter a number (or '0' or '01' to stop): ";
        cin >> num;
        if (num == "01" || num == "0") {
            break;
        }
        double chNum = stod(num);
        numList.push_back(chNum);
    }
    double sum = 0;
    for (double num : numList) {
        sum += num;
    }
    cout<<"Sum: "<<sum<<endl;
    try {
        cout << "Largest: " << unlimitedMaxList(numList) << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}

int binaryToDecimal(string binaryNumber) {
    int decimalNumber = 0;
    int binaryNumberLength = (strlen(binaryNumber.c_str()))-1;
    for (char c : binaryNumber) {
        decimalNumber += (c - '0') * pow(2,binaryNumberLength);
        binaryNumberLength--;
    }
    return decimalNumber;
}

string decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) return "0";

    string binaryString = "";

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        binaryString = to_string(remainder) + binaryString;
        decimalNumber /= 2;
    }

    return binaryString;
}

void decimalAndBinary() {
    string condition;
    cout<<"What is the output going to be (dec/bin): ";
    cin>>condition;
    if (condition == "dec") {
        string binaryNumber;
        cout<<"Enter the binary number (in 0 and 1): ";
        cin>>binaryNumber;
        cout<<"The Binary: "<<binaryNumber<<" is "<<binaryToDecimal(binaryNumber)<<" in Decimal"<<endl;
    }else if (condition == "bin") {
        int decimalNumber;
        cout<<"Enter the decimal number: ";
        cin>>decimalNumber;
        cout<<"The Decimal: "<<to_string(decimalNumber)<<" is "<<decimalToBinary(decimalNumber)<<" in Binary"<<endl;
    }else {
        cout<<"The output type is required!"<<endl;
    }
}

int main() {
    //maxToMinCounter();
    //divisorPrinter();
    //printPrimes();
    //printNPrimes();
    //evenCountDown();
    //primeCountDown();
    //twoDigitEvenCountDown();
    //commonDivisors();
    //oddEvenMediators();
    //someCalcs();
    decimalAndBinary();
    return 0;
}
