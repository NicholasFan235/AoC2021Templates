#include <bits/stdc++.h>
#include "../print_helpers.hpp"

std::vector<std::string> lines;


void solve()
{
   for (const std::string& line : lines)
   {
       std::cout << line << std::endl;
   }
   std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    std::string s;
    while (std::cin >> s)
    {
        lines.push_back(s);
    }

    solve();
}
