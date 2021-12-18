#include <bits/stdc++.h>
#include "../print_helpers.hpp"

std::vector<int> depths;

void solve()
{
    std::cout << "Depths: " << depths << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    int n;
    depths = std::vector<int>();
    while (std::cin >> n)
    {
        depths.push_back(n);
    }
    
    solve();
}
