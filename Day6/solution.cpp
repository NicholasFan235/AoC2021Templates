#include <bits/stdc++.h>
#include "../print_helpers.hpp"

// Vector of fish ages
std::vector<int> ages;


void solve()
{
    std::cout << "Ages: " << ages << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    int n;
    ages.clear();
    while (std::cin >> n)
    {
        ages.push_back(n);
    }

    solve();
}
