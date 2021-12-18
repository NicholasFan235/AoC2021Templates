#include <bits/stdc++.h>
#include "../print_helpers.hpp"


std::pair<int, int> xBounds;
std::pair<int, int> yBounds;


void solve()
{
    std::cout << "X-Bounds: " << xBounds << std::endl;
    std::cout << "Y-Bounds: " << yBounds << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    std::string s;
    std::regex regex("target area: x=(-?[0-9]*)\\.\\.(-?[0-9]*), y=(-?[0-9]*)\\.\\.(-?[0-9]*)");
    getline(std::cin, s);
    std::smatch match;
    if (std::regex_search(s, match, regex))
    {
        xBounds = std::make_pair(atoi(match[1].str().c_str()), atoi(match[2].str().c_str()));
        yBounds = std::make_pair(atoi(match[3].str().c_str()), atoi(match[4].str().c_str()));
    }
    solve();
}

