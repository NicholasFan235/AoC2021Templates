#include <bits/stdc++.h>
#include "../print_helpers.hpp"

// CONTAINS SPOILER FOR PART 2
//      Read in risks and convert to the larger map defined in Part2
//      Creates risk map 5 times larger in each dimension following the rules in Part2

std::vector<std::vector<int>> risk;


std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<int>>& v)
{
    for (const auto& u : v)
    {
        for (const int& i : u)
        {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    return os;
}


void solve()
{
    std::cout << "Risks: " << std::endl << risk << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    risk = std::vector<std::vector<int>>();
    std::string s;
    while (std::cin >> s)
    {
        // Read initial
        std::vector<int> row = std::vector<int>(s.length());
        for (int i = 0; i < s.length(); i++)
            row[i] = s[i] - '0';
        
        // Expand along X
        for (int i = 0; i < s.length() * 4; i++)
        {
            row.push_back(row[i]%9 + 1);
        }
        risk.push_back(row);
    }

    // Expand along Y
    int riskSize = risk.size();
    for (int i = 0; i < riskSize * 4; i++)
    {
        std::vector<int> row = std::vector<int>(risk[i].size());
        for (int j = 0; j < row.size(); j++)
        {
            row[j] = risk[i][j]%9 + 1;
        }
        risk.push_back(row);
    }

    solve();
}

