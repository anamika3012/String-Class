# String Class Implementation in C++

This project provides a custom implementation of a string class in C++ called `MyString`. The `MyString` class offers a set of basic string manipulation operations, including concatenation, indexing, and substring operations.


<sub>Note :- This was made as a practice and demonstrates only few common myString functions of C++ .</sub>
## Installation

To use the `MyString` class in your C++ project, follow these steps:

1. Copy the `MyString.h` and `MyString.cpp` files into your project directory.
2. Include the `MyString.h` header file in your C++ source files where you want to use the `MyString` class.

```cpp
#include "MyString.h"
```

## Usage

Here's an example of how to use the `MyString` class:

```cpp
#include <iostream>
#include "MyString.h"

int main() {
    MyString a = "Anamika";
    MyString b = " Ranjan"; 
    a += b;
    std::cout << a << std::endl;  // Output: Anamika Ranjan

    a.erase(70, 1);
    std::cout << a << std::endl; // Output: Anamika Ranjan

    return 0;
}
```
<br>
The `MyString` class has the following components :

- Default constructor: `MyString()`
- Parameterized constructor: `MyString(const char* str)`
- Copy constructor: `MyString(const MyString& other)`
- Destructor: `~MyString()`
- Assignment operator: `operator=(const MyString& other)`
- Concatenation operator: `operator+=(const MyString& other)`
- Subscript operator: `operator[](size_t index)`
- `size()`: Get the size of the string
- `empty()`: Check if the string is empty
- `c_str()`: Get the C-style string representation
- `append(const MyString& other)`: Append a string to the current string
- `find(const MyString& substr)`: Find the index of a substring within the string
- `erase(size_t pos, size_t len)`: Erase a substring from the string

