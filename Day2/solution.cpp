#include <bits/stdc++.h>
#include "../print_helpers.hpp"

// Read in data to a vector of (direction, distance) pairs
std::vector<std::pair<std::string, int>> instructions;

void solve()
{
    std::cout << "Instructions: " << instructions << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::string dir;
    int n;
    while (std::cin >> dir >> n)
    {
        instructions.push_back(std::make_pair(dir, n));
    }
    
    solve();
}