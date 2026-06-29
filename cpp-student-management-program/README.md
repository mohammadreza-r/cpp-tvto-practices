# Student Name Manager 📚

![C++](https://img.shields.io/badge/C++-20-blue.svg)
![CMake](https://img.shields.io/badge/CMake-4.1-green.svg)
![License](https://img.shields.io/badge/License-MIT-yellow.svg)
![Build](https://img.shields.io/badge/Build-Passing-success.svg)

A simple yet comprehensive C++ program for managing and analyzing student names with multiple visualization and analysis features.

## 📋 Overview

This C++ application provides a complete solution for managing student names with features including:
- Name input and storage
- Name searching with position tracking
- Multiple display formats
- Frequency analysis
- Name formatting utilities

## ✨ Features

- **Name Management**: Input and store up to 5 student names
- **Search Functionality**: Find names with position tracking and occurrence counting
- **Flexible Display Options**:
  - Sequential listing
  - Two-row pattern display
  - Reverse order display
- **Data Analysis**:
  - Frequency analysis of names
  - Name formatting (capitalization)
- **Clean Output**: Well-formatted results with visual separators

## 🚀 Getting Started

### Prerequisites

- **C++ Compiler** with C++20 support
- **CMake** version 3.10 or higher
- Any operating system (Windows, Linux, macOS)

### Installation & Compilation

#### 1. Clone the repository
```bash
git clone https://github.com/yourusername/student-name-manager.git
cd student-name-manager
```
#### 2. Build with CMake
```bash
mkdir build && cd build
cmake ..
make
```
#### 3. Run the program
```bash
./newToLearn
```
### Alternative Compilation (Without CMake)
```bash
g++ -std=c++20 main.cpp -o student_manager
./student_manager
```

## 💻 Usage Example
```console
Please enter 5 student names:
Student 1: John
Student 2: Mary
Student 3: John
Student 4: Alice
Student 5: Bob

==================================================

Enter a name to search: John
Name 'John' found 2 time(s).
Found at position(s): 1 3 

==================================================

Names printed one by one (every other):
John
Mary
John
Alice
Bob

==================================================

Names in two rows pattern:
John.		Mary.		John
	Alice.		Bob

==================================================

Names from last to first:
Bob
Alice
John
Mary
John

==================================================

Frequency of each name:
Alice: 1 time(s)
Bob: 1 time(s)
John: 2 time(s)
Mary: 1 time(s)

==================================================

Names with capitalized first letter:
John
Mary
John
Alice
Bob
```
## 📁 Project Structure
```text
student-name-manager/  
├── CMakeLists.txt          # CMake build configuration  
├── main.cpp               # Main application source code  
├── README.md              # Project documentation  
├── LICENSE                # License file (MIT recommended)  
└── .gitignore            # Git ignore file  
```
## 🛠️ Technical Details
### Requirements
- C++ Standard: C++20
- Build System: CMake 3.10+
### Key Components
- Standard Library Usage: `<iostream>`, `<string>`, `<algorithm>`, `<vector>`, `<map>`
- Name Formatting: Custom capitalization function
- Data Structures: Arrays, Vectors, Maps for different operations
- Algorithm Implementation:
  - Linear search with position tracking
  - Frequency counting using std::map
  - Reverse iteration

## 📝 License
This project is licensed under the MIT License - see the LICENSE file for details.

## 👤 Author
MohammadReza Rajabi ([mohammadreza-r](https://github.com/mohammadreza-r))
