#include "../print_helpers.hpp"
#include <bits/stdc++.h>

struct Point
{
    int x, y, z;
};

// Map of scanner number to vector of positions
std::map<int, std::vector<Point>> scanners;

std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << "(" << p.x << "," << p.y << "," << p.z << ")";
    return os;
}

void solve()
{
    std::cout << "Scanners: " << scanners << std::endl;
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::regex scanner_regex("^--- scanner ([0-9]*) ---$");
    std::regex coordinate_regex("^(-?[0-9]*),(-?[0-9]*),(-?[0-9]*)$");

    std::smatch match;

    std::string line;
    int current_scanner = 0;
    while (std::getline(std::cin, line))
    {
        if (std::regex_search(line, match, coordinate_regex))
        {
            scanners[current_scanner].push_back(
                Point{
                    atoi(match[1].str().c_str()),
                    atoi(match[2].str().c_str()),
                    atoi(match[3].str().c_str())});
        }
        else if (std::regex_search(line, match, scanner_regex))
        {
            current_scanner = atoi(match[1].str().c_str());
        }
    }

    solve();
}
