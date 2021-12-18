#include <bits/stdc++.h>
#include "../print_helpers.hpp"

using Patterns = std::array<std::string, 10>;
using Outputs = std::array<std::string, 4>;

struct Case
{
    Patterns patterns; Outputs outputs;
};
std::vector<Case> cases;

void solve()
{
    std::cout << cases.size() << "Cases." << std::endl;
    for (int i = 1; i <= cases.size(); i++)
    {
        std::cout << "Case #" << i << ": " << std::endl;
        std::cout << "\tPatterns: " << cases[i].patterns << std::endl;
        std::cout << "\tOutputs: " << cases[i].outputs << std::endl;
    }

    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    cases.clear();

    std::string s;
    int j = 0;
    while (std::cin >> s)
    {
        cases.push_back(Case());
        Case& c = cases.back();

        c.patterns[0] = s;
        for (int i = 1; i < 10; i++)
        {
            std::cin >> c.patterns[i];
        }
        std::cin >> s;
        for (int i = 0; i < 4; i++)
        {
            std::cin >> c.outputs[i];
        }
    }

    solve();
}
