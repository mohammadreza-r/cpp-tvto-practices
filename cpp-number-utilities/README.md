# C++ Function Library - Number & Grade Utilities

A comprehensive C++ collection of utility functions for number analysis, comparison, day conversion, and grade calculation.

## 📋 Table of Contents
- [Overview](#-overview)
- [Functions](#-functions)
- [Prerequisites](#-prerequisites)
- [Installation](#-installation)
- [Usage](#-usage)
- [Project Structure](#-project-structure)
- [Building with CMake](#-building-with-cMake)
- [License](#-license)

## 📝 Overview

This repository contains a set of C++ functions designed to perform various common operations including:
- Number feature identification (positive/negative/zero, odd/even)
- Minimum and maximum value comparison
- Weekday to number conversion (and vice versa)
- Student grade calculation with multiple grading approaches

## 🔧 Functions

### `void numberFeatureIdentifier()`
Identifies key features of a number:
- **Input**: A number (integer or floating-point)
- **Output**: Displays whether the number is positive, negative, or zero, and whether it's odd or even

**Example Output**:
The Number : 7 is positive and odd


---

### `void minMax(string action = "MAX")`
Compares two numbers:
- **Input**: Two numbers and optional action parameter ("MAX" or "MIN")
- **Default**: Finds the maximum value
- **Output**: Displays the largest or smallest number

**Example**:
```cpp
minMax();        // Returns maximum
minMax("MIN");   // Returns minimum
```
### `void minMax_Enhanced(string action = "MAX")`
Enhanced version comparing three numbers:
- **Input**: Three numbers and optional action parameter
- **Output**: Displays maximum or minimum among three values

void weekDaysPerNum()
Converts a number to a weekday:
- **Input**: Integer from 0-6 (0 = Saturday)
- **Output**: Corresponding weekday name
- **Error Handling**: Catches out-of-range exceptions
    
void numberPerWeekDays()
Converts a weekday name to its numerical representation:
- **Input**: Full weekday name (e.g., "Monday")
- **Output**: Corresponding number (0-6)
- **Error Handling**: Provides feedback for invalid inputs
    
Grade Calculation Functions
Three different implementations for student grading:
    studentGrader() - Uses range-based switch cases
    studentGrader_2() - Uses multiple case labels
    studentGrader_Accurate() - Uses if-else conditions with floating-point support

Grading Scale:
| Points | Grade |
|:-----|-----:|
| 0-6 |	F |
| 7-13 | F+ |
| 14-16 |	C |
| 17-18 |	B |
| 19-20 |	A |

---

## 🛠️ Prerequisites

  C++ Compiler (GCC 9+, Clang 8+, or MSVC 2019+)
  CMake 3.10 or higher

---

## 📦 Installation

### Clone the Repository
```bash
git clone https://github.com/yourusername/your-repo-name.git
cd your-repo-name
```

### Configure and Build with CMake
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

### Or Build Manually
```bash
g++ -std=c++20 main.cpp -o newToLearn
./newToLearn
```

---

## 🚀 Usage
### Basic Example
In main.cpp, uncomment the desired function calls:
```cpp
int main() {
    numberFeatureIdentifier();
    // minMax();
    // minMax("MIN");
    // minMax_Enhanced("MAX");
    // weekDaysPerNum();
    // numberPerWeekDays();
    // studentGrader();
    // studentGrader_2();
    // studentGrader_Accurate();
    return 0;
}
```

### Running a Specific Function
```cpp
int main() {
    // Number analysis
    numberFeatureIdentifier();  // Input: 7 → Output: "positive and odd"
    
    // Find maximum of three numbers
    minMax_Enhanced("MAX");     // Input: 5, 10, 3 → Output: 10
    
    // Convert weekday number to name
    weekDaysPerNum();           // Input: 2 → Output: "Monday"
    
    return 0;
}
```

## 📁 Project Structure
. <br>
├── CMakeLists.txt      # CMake build configuration  <br>
├── main.cpp           # Source code with all functions  <br>
├── README.md          # This file  <br>
└── .gitignore        # Git ignore rules  <br>

## 🏗️ Building with CMake
The project uses CMake for build automation:
```cmake
cmake_minimum_required(VERSION 4.1)
project(My_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES main.cpp)
add_executable(newToLearn ${SOURCES})
```

### Build Steps:
1.Create build directory: mkdir build && cd build  
2.Generate build files: cmake ..  
3.Compile: cmake --build .  
4.Run: ./My_project  

## 📄 License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/mohammadreza-r/cpp-number-utilities/tree/main?tab=MIT-1-ov-file) file for details.

## 👤 Author
### MohammadReza Rajabi
GitHub: [@mohammadreza-r](https://github.com/mohammadreza-r)
