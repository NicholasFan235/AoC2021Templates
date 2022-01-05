#include <bits/stdc++.h>
#include "../print_helpers.hpp"

int p1, p2;

void solve()
{
    std::cout << "Player 1 Position: " << p1 << std::endl;
    std::cout << "Player 2 Position: " << p2 << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::string s;

    std::regex regex("^Player [1,2] starting position: ([0-9]*)$");
    std::smatch match;
    getline(std::cin, s);
    if (std::regex_search(s, match, regex))
        p1 = atoi(match[1].str().c_str());
    getline(std::cin, s);
    if (std::regex_search(s, match, regex))
        p2 = atoi(match[1].str().c_str());

    solve();
}
