#include <bits/stdc++.h>
#include "../print_helpers.hpp"


std::map<std::string, std::set<std::string>> edges;

void solve()
{
    std::cout << "Edges: " << std::endl << edges << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    std::string s1, s2;
    while (std::getline(std::cin, s1, '-'))
    {
        std::getline(std::cin, s2, '\n');
        edges[s1].insert(s2);
        edges[s2].insert(s1);
    }

    solve();
}



