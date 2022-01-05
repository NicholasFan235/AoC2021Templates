#include <bits/stdc++.h>
#include "../print_helpers.hpp"

std::string algorithm;
std::vector<std::vector<char>> image;

std::ostream &operator<<(std::ostream &os, const std::vector<std::vector<char>> &v)
{
    for (const auto &r : v)
    {
        for (const auto &c : r)
            os << c;
        os << std::endl;
    }
    return os;
}

void solve()
{
    std::cout << "Algorithm: " << algorithm << std::endl;
    std::cout << "Image: " << std::endl << image << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::cin >> algorithm;
    std::string s;

    image = std::vector<std::vector<char>>();

    while (std::cin >> s)
    {
        std::vector<char> row = std::vector<char>(s.size(), '.');
        for (int i = 0; i < s.length(); i++)
            row[i] = s[i];
        image.push_back(row);
    }

    solve();
}
