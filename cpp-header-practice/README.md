# C++ Utilities Library

![C++](https://img.shields.io/badge/C++-20-blue.svg)
![CMake](https://img.shields.io/badge/CMake-4.1+-green.svg)
![License](https://img.shields.io/badge/License-MIT-yellow.svg)

A collection of useful C++ utility functions including prime number checking and date conversion tools. This project demonstrates modular C++ programming with header files, CMake build system, and clean code practices.

## 📋 Table of Contents
- [Features](#-features)
- [Prerequisites](#-prerequisites)
- [Installation](#-installation)
- [Building the Project](#-building-the-project)
- [Usage](#-usage)
- [Functions Documentation](#-functions-documentation)
- [Project Structure](#-project-structure)
- [License](#-license)
- [Author](#-author)

## ✨ Features

- **Prime Number Checker**: Efficiently determines if a number is prime
- **Date Converter**: Converts days lived to years, months, and days
- **Modular Design**: Clean separation of headers and implementation
- **CMake Build System**: Easy compilation and cross-platform support
- **C++20 Standards**: Utilizes modern C++ features

## 🛠️ Prerequisites

Before you begin, ensure you have the following installed:

- **C++ Compiler** (GCC 10+, Clang 10+, or MSVC 2019+)
- **CMake** (Version 4.1 or higher)
- **Git** (for cloning the repository)

## 📦 Installation

### Clone the Repository

```bash
git clone https://github.com/yourusername/cpp-utilities-library.git
cd cpp-utilities-library
```

## 🔨 Building the Project
### Using CMake (Recommended)
```bash
# Create build directory
mkdir build && cd build

# Generate build files
cmake ..

# Build the project
cmake --build .

# Run the executable
./newToLearn
```
### Manual Compilation
```bash
g++ -std=c++20 main.cpp myHeader.cpp -o newToLearn
./newToLearn
```

## 🚀 Usage
Run the program and follow the interactive prompts:
```bash
./newToLearn
```
### Example Output
```console
Enter a number: 17
17 is a prime number!

Enter the number of days a person lived: 1000
The person lived 2 Years, 9 Months, and 0 Days
```
### Program Flow
**Prime Number Check:** The program will prompt you to enter a number and determine if it's prime
**Days to Date Conversion:** The program will convert a number of days into years, months, and days

## 📚 Functions Documentation
`bool H_isPrime(int number)`

Checks if a given integer is a prime number.

Parameters:

-    number (int): The number to check

Returns:

-    true if the number is prime

-    false if the number is not prime

**Time Complexity:** O(√n)
**Space Complexity:** O(1)

`std::map<std::string, int> dayToYMD(int daysLived)`

Converts total days lived into years, months, and days.

Parameters:

-    daysLived (int): Total number of days

Returns:

- std::map<std::string, int> containing:  
  - "years": Number of years  
  - "months": Number of months  
  - "days": Remaining days  

Example:
```cpp
auto result = dayToYMD(1000);
// result["years"] = 2
// result["months"] = 9
// result["days"] = 0
```
## 📁 Project Structure
```text
cpp-utilities-library/  
├── CMakeLists.txt          # CMake build configuration  
├── main.cpp                # Main program entry point  
├── myHeader.h              # Header file with function declarations  
├── myHeader.cpp            # Implementation of utility functions  
├── README.md               # Project documentation  
├── LICENSE                 # License file (MIT recommended)  
└── .gitignore              # Git ignore file  
```
## 📝 License
This project is licensed under the MIT License - see the [LICENSE]() file for details.

## 👤 Author
MohammadReza Rajabi ([mohammadreza-r](https://github.com/mohammadreza-r))
