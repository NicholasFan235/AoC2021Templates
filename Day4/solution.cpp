#include <bits/stdc++.h>
#include "../print_helpers.hpp"

using BingoBoard = std::vector<std::vector<int>>;

std::vector<BingoBoard> boards;
std::vector<int> numbers;


void solve()
{
    std::cout << "Numbers: " << numbers << std::endl;
    std::cout << "Boards:" << std::endl;
    for (const BingoBoard& b : boards)
    {
        std::cout << b << std::endl << std::endl;
    }
    
    std::cout << "Solution: " << 0 << std::endl;
}


int main()
{
    std::string s;
    std::getline(std::cin, s, '\n');
    std::istringstream ss(s);
    int n;
    while (ss >> n)
    {
        numbers.push_back(n);
        char d; ss >> d;
    }

    int i = 0;
    while (std::cin >> n)
    {
        boards.push_back(BingoBoard(5, std::vector<int>(5, 0)));
        BingoBoard& board = boards[i];
        board[0][0] = n;
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (k==0 && j == 0) continue;
                std::cin >> board[j][k];
            }
        }
        i++;
    }

    solve();
}
