#include <bits/stdc++.h>
#include "../print_helpers.hpp"

// Convert list of dots into a 2D vector of a page with '#' representing a dot and '.' for no dot
std::vector<std::vector<char>> page;
std::vector<std::pair<char, int>> folds;
int X, Y;

std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<char>>& v)
{
    for (const auto& u : v)
    {
        for (const char& c : u)
        {
            std::cout << c;
        }
        std::cout << std::endl;
    }
    return os;
}


void solve()
{
    std::cout << "Page: " << std::endl << page << std::endl;
    std::cout << "Folds: " << folds << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    std::string s;
    std::set<std::pair<int, int>> dots = std::set<std::pair<int, int>>();
    X = 0; Y = 0;
    while (getline(std::cin, s))
    {
        std::stringstream ss(s);
        int a, b; char c;
        ss >> a >> c >> b;
        dots.insert(std::make_pair(a, b));
        X = std::max(X, a+1); Y = std::max(Y, b+1);

        if (s.empty()) break;
    }
    page = std::vector<std::vector<char>>(Y, std::vector<char>(X, '.'));
    std::for_each(dots.begin(), dots.end(), [](const auto& p){ page[p.second][p.first] = '#'; });

    std::regex regex("fold along ([x,y])=([0-9]*)");
    while (getline(std::cin, s))
    {
        std::smatch match;
        if (std::regex_search(s, match, regex))
        {
            std::stringstream ss(match[2]);
            int i;
            ss >> i;
            folds.push_back(std::make_pair(match[1].str()[0], i));
        }
    }

    solve();
}
