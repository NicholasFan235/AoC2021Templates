#include <bits/stdc++.h>

enum Direction
{
    forward,
    up,
    down
};
// Solution but each instruction is a pair of (enum direction, distance)
std::vector<std::pair<Direction, int>> instructions;

void solve()
{
    // Using enum allows for switch statements.
    //  e.g.
    for (const auto &p : instructions)
    {
        const Direction &direction = p.first;
        const int &distance = p.second;
        switch (direction)
        {
        case forward:
            std::cout << "Forward ";
            break;
        case up:
            std::cout << "Up";
            break;
        case down:
            std::cout << "Down ";
            break;
        }
        std::cout << distance << std::endl;
    }
    std::cout << "Solution: " << 0 << std::endl;
}

int main()
{
    std::string dir;
    int n;
    while (std::cin >> dir >> n)
    {
        if (dir == "forward")
            instructions.push_back(std::make_pair(Direction::forward, n));
        else if (dir == "down")
            instructions.push_back(std::make_pair(Direction::down, n));
        else if (dir == "up")
            instructions.push_back(std::make_pair(Direction::up, n));
        else
            std::cout << "Invalid direction" << std::endl;
    }

    solve();
}