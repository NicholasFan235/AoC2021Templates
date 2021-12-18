#include <bits/stdc++.h>
#include "../print_helpers.hpp"


// Input as a string (input[0] is MOST significant digit)
std::string input;
// Input as a vector of hex digits (hex[0] is LEAST significant digit)
std::vector<char> hex;
// Input as a vector of binary digits (binary[0] is LEAST significant digit)
std::vector<int> binary;


void solve()
{
    std::cout << "Input String: " << input << std::endl;
    std::cout << "Input Hex" << hex << std::endl;
    std::cout << "Binary: " << binary << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


void reset()
{
    input.clear();
    hex = std::vector<char>();
    binary = std::vector<int>();
}

int main()
{
    reset();
    std::cin >> input;
    for (int i = input.length()-1; i>=0; --i)
    {
        int n = input[i] - '0';
        if (n > 9) n = input[i] - 'A' + 10;
        for (int j = 0; j < 4; j++)
        {
            binary.push_back(n%2);
            n >>= 1;
        }
        hex.push_back(input[i]);
    }
    solve();
}
