#include <bits/stdc++.h>
#include "../print_helpers.hpp"


std::vector<int> crabs;

void solve()
{
    std::cout << "Crabs: " << crabs << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    int n;
    char c;
    crabs.clear();
    while (std::cin >> n)
    {
        crabs.push_back(n);
        std::cin >> c;
    }
    
    solve();
}



