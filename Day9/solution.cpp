#include <bits/stdc++.h>
#include "../print_helpers.hpp"

std::vector<std::vector<int>> heightmap;

void solve()
{
    std::cout << "Heights: " << std::endl << heightmap << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    heightmap = std::vector<std::vector<int>>();
    std::string s;
    while (std::cin >> s)
    {
        std::vector<int> row = std::vector<int>();
        for (const char c : s)
        {
            row.push_back(c-'0');
        }
        heightmap.push_back(row);
    }

    solve();
}



