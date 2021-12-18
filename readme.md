# 2021 Advent of Code C++ Templates

This Repository contains C++ templates for 2021 Advent of Code. The templates are meant to help beginners to C++ with writing solutions by providing a framework which reads in the data.

The template reads in from standard input (`std::cin`), stores the input in global variables then calls `solve()`. This `solve()` function is what should be modified to solve the problem.

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

