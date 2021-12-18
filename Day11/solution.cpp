#include <bits/stdc++.h>
#include "../print_helpers.hpp"

std::vector<std::vector<int>> levels;


void solve()
{
    std::cout << "Levels: " << std::endl << levels << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    std::string s;
    levels = std::vector<std::vector<int>>();
    while (std::cin >> s)
    {
        std::vector<int> row = std::vector<int>();
        for (const char c : s)
        {
            row.push_back(c - '0');
        }
        levels.push_back(row);
    }

    solve();
}