#include <bits/stdc++.h>
#include "../print_helpers.hpp"

std::vector<std::string> input;

void solve()
{
    std::cout << "Input: " << input << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::string s;
    while (std::cin >> s)
    {
        input.push_back(s);
    }

    solve();
}
