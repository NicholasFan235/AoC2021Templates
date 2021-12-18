#include <bits/stdc++.h>
#include "../print_helpers.hpp"


// Pairs of coordinates ((x1,y1), (x2,y2))
std::vector<std::pair<std::pair<int, int>, std::pair<int, int>>> lines;
// Dimensions of the map (largest x and y coordinates in the input)
int X, Y;


void solve()
{
    std::cout << "Lines of Vents:" << std::endl;
    for (const auto& line : lines)
    {
        std::cout << line << std::endl;
    }
    
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::string s;
    char c;
    int n1, n2, n3, n4;

    lines = std::vector<std::pair<std::pair<int, int>, std::pair<int, int>>>();
    X = 0; Y = 0;
    while (std::cin >> n1 >> c >> n2 >> s >> n3 >> c >> n4)
    {
        lines.push_back(std::make_pair(
            std::make_pair(n1, n2), std::make_pair(n3, n4)));
        X = std::max(X, std::max(n1, n3));
        Y = std::max(Y, std::max(n2, n4));
    }

    solve();
}

