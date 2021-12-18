#include <bits/stdc++.h>
#include "../print_helpers.hpp"


// Polymer string
std::string polymer;
// Map of length 2 strings to the character that is inserted between them
std::map<std::string, char> rules;

void solve()
{
    std::cout << "Rules: " << rules << std::endl;
    std::cout << "Polymer: " << polymer << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::string s;
    std::cin >> polymer;

    std::regex regex("(.)(.) -> (.)");
    while (getline(std::cin, s))
    {
        if (s.empty()) continue;
        std::smatch match;
        if (std::regex_search(s, match, regex))
        {
            rules[match[1].str()[0]+match[2].str()] = match[3].str()[0];
        }
    }

    solve();
}
