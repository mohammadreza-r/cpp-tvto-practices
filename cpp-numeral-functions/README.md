# C++ Number Functions Library

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++20](https://img.shields.io/badge/C++-20-blue.svg)](https://isocpp.org/)
[![CMake](https://img.shields.io/badge/CMake-4.1-green.svg)](https://cmake.org/)

## 📋 Overview

A comprehensive C++ library providing a collection of mathematical and number manipulation utilities. This project implements various number theory operations including prime handling, divisor calculations, binary-decimal conversions, and statistical functions.

## ✨ Features

### 🔢 Number Operations
- **Prime Number Utilities**
  - Check if a number is prime
  - Print all primes up to a limit
  - Print first N primes
  - Prime countdown from a given number

- **Divisor Operations**
  - Find all divisors of a number
  - Find common divisors between two numbers

- **Counting Functions**
  - Countdown from maximum to minimum
  - Even number countdown
  - Two-digit even number countdown

### 🔄 Number System Conversions
- **Binary ↔ Decimal Converter**
  - Convert binary strings to decimal integers
  - Convert decimal integers to binary strings
  - Interactive conversion interface

### 📊 Statistical Functions
- **Maximum Value Calculator**
  - Unlimited parameter template function
  - List-based maximum finder
  - Sum calculator for number lists

### 🔢 Number Range Operations
- **Odd/Even Mediators**
  - Find all even numbers between two values
  - Find all odd numbers between two values
  - Range-bounded results

## 🚀 Getting Started

### Prerequisites
- C++20 compatible compiler (GCC 10+, Clang 10+, MSVC 2019+)
- CMake 3.10 or higher
- Git (for version control)

### Installation

1. Clone the repository
```bash
git clone https://github.com/yourusername/cpp-number-functions.git
cd cpp-number-functions
```

2. Build the project
```bash
mkdir build && cd build
cmake ..
make
```

3. Run The Program
```bash
./number_functions
```

## 📖 Usage Examples
### Prime Number Operations
```cpp
// Check if a number is prime
if (isPrime(17)) {
    cout << "17 is prime!" << endl;
}

// Print all primes up to 50
printPrimes();  // Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

// Print first 10 primes
printNPrimes(); // Output: 2 3 5 7 11 13 17 19 23 29
```
### Binary-Decimal Conversion
```cpp
// Binary to Decimal
int decimal = binaryToDecimal("1010");  // Returns 10

// Decimal to Binary
string binary = decimalToBinary(10);    // Returns "1010"
```
### Number Range Operations
```cpp
// Find evens between two numbers
oddEvenMediators();  // Interactive mode for odd/even range display

// Common divisors
commonDivisors();    // Finds and displays common divisors of two numbers
```
### Statistics
```cpp
// Sum and maximum of unlimited numbers
someCalcs();  // Interactive input with sum and max calculation

// Template-based unlimited max
double maxVal = unlimitedMax(3.14, 2.71, 1.41, 9.81);  // Returns 9.81
```

## 🏗️ Project Structure
cpp-number-functions/  
├── **main.cpp**           # Main program with all function implementations  
├── **CMakeLists.txt**     # CMake build configuration  
├── **README.md**          # Project documentation  
└── **.gitignore**        # Git ignore rules  

## 🔧 Function Reference
| Function | Description | Return Type |
|:--------:|:-----------:|:-----------:|
| isPrime(int) |	Checks if a number is prime |	bool |
| printPrimes() |	Prints all primes up to a limit |	void |
| printNPrimes() |	Prints first N primes |	void |
| divisorFinder(int) | Finds all divisors of a number |	list<int> |
| commonDivisors() | Finds common divisors of two numbers |	void |
| binaryToDecimal(string) |	Converts binary to decimal |	int |
| decimalToBinary(int) |	Converts decimal to binary |	string |
| unlimitedMax<T>(Args...) |	Finds maximum of unlimited values |	T |
| unlimitedMaxList(list<double>) |	Finds maximum from a list |	double |

## 🧪 Testing
The program includes a main() function with commented example calls. Uncomment the desired function calls in main() to test specific features:
```cpp
int main() {
    // Uncomment any of these to test specific functions
    // maxToMinCounter();
    // divisorPrinter();
    // printPrimes();
    // printNPrimes();
    // evenCountDown();
    // primeCountDown();
    // twoDigitEvenCountDown();
    // commonDivisors();
    // oddEvenMediators();
    // someCalcs();
    decimalAndBinary();  // Currently active
    return 0;
}
```

## 📄 License
This project is licensed under the MIT License - see the [LICENSE]() file for details.

## 👤 Author
MohammadReza rajabi ([mohammadreza-r](https://github.com/mohammadreza-r))

## 🙏 Acknowledgments
.C++ Standard Library
.CMake Build System
.GitHub for version control hosting
