#include <bits/stdc++.h>
#include "../print_helpers.hpp"

// 2D vector of risks
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
        std::vector<int> row = std::vector<int>(s.length());
        for (int i = 0; i < s.length(); i++)
            row[i] = s[i] - '0';
        risk.push_back(row);
    }
    
    solve();
}

