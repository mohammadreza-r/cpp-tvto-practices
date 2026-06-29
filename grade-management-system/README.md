# 📊 Grade Management System

A comprehensive C++ program for managing and analyzing student grades with an interactive menu-driven interface.

[![C++](https://img.shields.io/badge/C++-20-blue.svg)](https://isocpp.org/)
[![CMake](https://img.shields.io/badge/CMake-4.1-brightgreen.svg)](https://cmake.org/)
[![License](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## ✨ Features

- **📋 Display All Grades** - View all entered grades with their indices
- **📈 Calculate Average** - Compute the mean of all grades
- **🏆 Find Highest Grade** - Identify the maximum grade in the dataset
- **📊 Sort Grades** - Display grades in ascending order
- **📉 Frequency Analysis** - Show how many times each grade appears
- **🔄 Interactive Menu** - User-friendly interface with error handling

## 🚀 Getting Started

### Prerequisites

- **C++ Compiler** (GCC 9+, Clang 10+, or MSVC 2019+)
- **CMake** 3.10 or higher
- **Git** (for cloning the repository)

### Installation

#### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/grade-management-system.git
cd grade-management-system
```
#### 2. Build with CMake
```bash
mkdir build && cd build
cmake ..
make
```
#### 3. Run the Program
```bash
./grade_analyzer
```

#### Manual Compilation
If you prefer to compile without CMake:
```bash
g++ -std=c++20 main.cpp -o grade_analyzer
./grade_analyzer
```

## 💻 Usage Guide
### Step 1: Enter Grades
When you run the program, you'll be prompted to:
- Enter the number of grades you want to analyze
- Input each grade individually
### Step 2: Use the Menu
After entering grades, you'll see the main menu:
```console
========== MENU ==========
1. Display all grades
2. Calculate average
3. Find the highest grade
4. Sort and display grades
5. Display frequency of each grade
6. Exit
Enter your choice: 
```
### Example Session
```console
Enter the number of grades: 5
Enter grade 1: 85.5
Enter grade 2: 92.0
Enter grade 3: 78.5
Enter grade 4: 91.0
Enter grade 5: 88.0

========== MENU ==========
1. Display all grades
2. Calculate average
3. Find the highest grade
4. Sort and display grades
5. Display frequency of each grade
6. Exit
Enter your choice: 2

Average of grades: 87.0
```
## 🛠️ Technical Details
### Architecture
- Language: C++20
- Build System: CMake
- Data Structures Used:
  - std::vector - Dynamic array for storing grades
  - std::map - Frequency counting with key-value pairs
  - std::sort - Sorting algorithm from STL
### Key Functions
| Feature | Implementation |
|:-------:|:--------------:|
| Input Validation |	Prevents negative grade counts |
| Average Calculation |	Sum divided by count |
| Max Grade Finder |	Linear search through vector |
| Sorting |	std::sort algorithm |
| Frequency Analysis |	std::map with iteration |

## 📁 Project Structure
```text
grade-management-system/  
├── main.cpp          # Main program source code  
├── CMakeLists.txt    # CMake build configuration  
├── README.md         # This file  
├── LICENSE           # MIT License  
└── .gitignore        # Git ignore rules  
```
## 📝 License
This project is licensed under the MIT License - see the LICENSE file for details.

## 👤 Author
MohammadReza Rajabi ([mohammadreza-r](https://github.com/mohammadreza-r))
