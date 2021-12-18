# 2021 Advent of Code C++ Templates

This Repository contains C++ templates for 2021 Advent of Code. The templates are meant to help beginners to C++ with writing solutions by providing a framework which reads in the data.

The template reads in from standard input (`std::cin`), stores the input in global variables before calling `solve()`. This `solve()` function is where users should write their solution to the Advent of Code problem.

## Building the Solution
### Basic Compilation on Linux
The most basic way to compile the code.

This method is very basic and so any runtime code errors will not have nice logs which tell you where the error is. For these helpful tools it is recommended to compile using CMake.

Step by step guide:
1. Navigate to the directory which contains the solution source code.
2. Run g++ <input_file> -o solution.exe \
This will compile to an executable `solution.exe`
```ShellSession
user@computer:~/AoC2021Templates$ cd Day1
user@computer:~/AoC2021Templates/Day1$ g++ solution.cpp -o solution.exe
```
Now we have `solution.exe`, we can run it and pipe in the input file.
```ShellSession
user@computer:~/AoC2021Templates/Day1$ ./solution.exe < test.txt
Depths: [199, 200, 208, 210, 200, 207, 240, 269, 260, 263]
Solution: 0
```

### Using CMake

## Print Helpers
`print_helpers.hpp` is a header file with some overloads for `std::ostream operator<<`. This is to allow for easy printing of common datatypes such as `std::vector`. Once this `print_helpers.hpp` is included, we can simply pipe common standard structures to console using:
```cpp
#include "print_helpers.hpp"
#include <iostream>

int main()
{
    std::vector<int> vector = std::vector<int>(10);
    std::cout << "Print a Vector: " << vector << std::endl;
}
```
`print_helpers.hpp` allows printing `std::vector`, `std::array`, `std::pair`, `std::map`, `std::unordered_map`, `std::set`, `std::unordered_set`.
