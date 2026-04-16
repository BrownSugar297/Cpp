# 📗 C++ Programming — Learning Repository

![Language](https://img.shields.io/badge/Language-C++-00599C?style=flat-square&logo=cplusplus)
![Level](https://img.shields.io/badge/Level-Beginner-green?style=flat-square)
![Compiler](https://img.shields.io/badge/Compiler-G++-orange?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-lightgrey?style=flat-square)

> A focused set of C++ programs exploring operators, I/O formatting, conditional logic, and foundational object-oriented thinking — built as hands-on exercises for beginners.

---

## 📁 Folder Structure

```
c++ codes/
│
├── biodata.cpp              # Basic output / personal info display
├── biodata 2.cpp            # Extended output formatting
├── Arithmetic.cpp           # Arithmetic operators with formatted output
├── Assignment.cpp           # Assignment operators demo
├── Relational.cpp           # Relational / comparison operators
├── Logical Operator.cpp     # Logical AND, OR, NOT
├── Bitwise.cpp              # Bitwise operators (&, |, ^, ~, <<, >>)
├── Special Operator.cpp     # sizeof, ternary, comma operators
├── Fahrenheit.cpp           # Temperature conversion (°C to °F)
├── Letter Grade.cpp         # Grade classification using conditionals
├── Triangle.cpp             # Triangle type checker
├── if_else.cpp              # if-else control flow examples
├── backslash 1.cpp          # Escape sequences (\n, \t, etc.)
├── program 3.cpp            # General practice program
└── program 4.cpp            # General practice program
```

---

## 🧠 Topics Covered

| Topic | Files |
|---|---|
| **Basic Output** | `biodata.cpp`, `biodata 2.cpp`, `backslash 1.cpp` |
| **Arithmetic Operators** | `Arithmetic.cpp` — `+`, `-`, `*`, `/` with `setw`, `setprecision` |
| **Assignment Operators** | `Assignment.cpp` — `=`, `+=`, `-=`, `*=`, `/=` |
| **Relational Operators** | `Relational.cpp` — `==`, `!=`, `>`, `<`, `>=`, `<=` |
| **Logical Operators** | `Logical Operator.cpp` — `&&`, `\|\|`, `!` |
| **Bitwise Operators** | `Bitwise.cpp` — `&`, `\|`, `^`, `~`, `<<`, `>>` |
| **Special Operators** | `Special Operator.cpp` — `sizeof`, ternary `?:` |
| **Conditionals** | `if_else.cpp`, `Letter Grade.cpp`, `Triangle.cpp` |
| **Math Problems** | `Fahrenheit.cpp` — real-world formula application |
| **I/O Formatting** | `iomanip` — `setw()`, `setprecision()`, `fixed`, `showpoint` |

---

## ⚙️ Prerequisites

- A C++ compiler: **G++** (comes with GCC) or **MSVC**
- Code editor: [VS Code](https://code.visualstudio.com/), Code::Blocks, or Dev-C++

> ⚠️ **Note:** Some files use `#include <conio.h>` and `getch()` which are Windows-specific (available in MinGW/Dev-C++). On Linux/macOS, remove `#include <conio.h>` and replace `getch()` with a comment or `cin.get()`.

---

## 🚀 Getting Started

### 1. Clone or download the repository

```bash
git clone https://github.com/your-username/cpp-codes.git
cd "c++ codes"
```

### 2. Compile a file

```bash
g++ Arithmetic.cpp -o Arithmetic
```

### 3. Run the program

```bash
./Arithmetic       # Linux / macOS
Arithmetic.exe     # Windows
```

---

## 💡 Example — Arithmetic with Formatted Output

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float A, B;
    cout << "Enter two numbers: ";
    cin >> A >> B;

    cout << fixed << setprecision(2);
    cout << setw(20) << "Sum: "            << A + B << endl;
    cout << setw(20) << "Subtraction: "    << A - B << endl;
    cout << setw(20) << "Multiplication: " << A * B << endl;
    cout << setw(20) << "Division: "       << A / B << endl;
}
```

---

## 🔑 Key C++ Concepts Used

- `cout` / `cin` — standard output and input streams
- `iomanip` — I/O manipulators: `setw()`, `setprecision()`, `fixed`
- `using namespace std` — standard namespace
- Control structures: `if`, `else if`, `else`
- All fundamental operator categories

---

## 📌 Notes

- These programs are written for **learning purposes** and prioritize readability.
- The `<conio.h>` dependency can be removed for cross-platform compatibility.
- Programs progress from basic output to operator-heavy logic — follow the order above for a structured learning path.

---

## 👨‍💻 Author

**Ashik** — BSc in Computer Science & Engineering  
*Exploring C++ one operator at a time.*

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).

