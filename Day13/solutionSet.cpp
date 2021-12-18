#include <bits/stdc++.h>
#include "../print_helpers.hpp"


// Read dots into a set of (x, y) pairs.
std::set<std::pair<int, int>> dots;
std::vector<std::pair<char, int>> folds;


void solve()
{
    std::cout << "Dots: " << dots << std::endl;
    std::cout << "Folds: " << folds << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    std::string s;
    while (getline(std::cin, s))
    {
        std::stringstream ss(s);
        int a, b; char c;
        ss >> a >> c >> b;
        dots.insert(std::make_pair(a, b));

        if (s.empty()) break;
    }

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
