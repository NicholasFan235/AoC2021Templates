#include <bits/stdc++.h>
#include "helpers.hpp"
#include "../print_helpers.hpp"

std::vector<Instruction> instructions;

void solve()
{
    std::cout << "Instructions: " << instructions << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    instructions = std::vector<Instruction>();
    std::string s;
    std::regex regex("^(on|off) x=(-?[0-9]*)\\.\\.(-?[0-9]*),y=(-?[0-9]*)\\.\\.(-?[0-9]*),z=(-?[0-9]*)\\.\\.(-?[0-9]*)$");
    while (getline(std::cin, s))
    {
        std::smatch match;
        if (std::regex_search(s, match, regex))
        {
            instructions.push_back(
                Instruction{match[1].str() == "on",
                            Region{Point{atoi(match[2].str().c_str()), atoi(match[4].str().c_str()), atoi(match[6].str().c_str())},
                                   Point{atoi(match[3].str().c_str()), atoi(match[5].str().c_str()), atoi(match[7].str().c_str())}}});
        }
    }

    solve();
}
