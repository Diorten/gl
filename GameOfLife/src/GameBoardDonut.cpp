//
// Created by najma on 27.04.2022.
//
#include <windows.h>
#include "GameBoardDonut.hpp"
#include <random>


void GameBoardDonut::reviveRandomCellsAtBegining()
{
    int v1;
    int v;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib_row(0, height-1);
    std::uniform_int_distribution<> distrib_column(0,width-1);
    int i=0;
    while(i<400)
    {
        v1=distrib_row(gen);
        v=distrib_column(gen);
        if (board2[v1][v].isAlive == false)
        {
            board2[v1][v].isAlive = true;
            i++;
        }
    }
}


int GameBoardDonut::countCellsAround(int row, int col)
{
    int cells = 0;

        if (row > 0 && row < height - 1 && col > 0 && col < width - 1)
        {
            for (int y = row - 1; y <= row + 1; y++)
            {
                for (int x = col - 1; x <= col + 1; x++)
                {
                    {
                        if ((y != row || x != col) && ((y >= 0 && y <= height - 1) && (x >= 0 && x <= width - 1)))
                        {
                            if (board2[y][x].isAlive == true)
                            {
                                cells++;
                            }
                        }
                    }
                }
            }
        }

        //zero upper
        if (row == 0 && col > 0 && col < width - 1)
        {

        }

        //zero down
        if (row == height - 1 && col > 0 && col < width - 1)
        {

        }

        //zero left
        if (row > 0 && row < height - 1 && col == 0)
        {
            if (board2[row - 1][col].isAlive == true)
            {
                cells++;
            }
            if (board2[row + 1][col].isAlive == true)
            {
                cells++;
            }
            if (board2[row - 1][col + 1].isAlive == true)
            {
                cells++;
            }
            if (board2[row][col + 1].isAlive == true)
            {
                cells++;
            }
            if (board2[row + 1][col + 1].isAlive == true)
            {
                cells++;
            }
            if (board2[row - 1][width - 1].isAlive == true)
            {
                cells++;
            }
            if (board2[row][width - 1].isAlive == true)
            {
                cells++;
            }
            if (board2[row + 1][width - 1].isAlive == true) {
                cells++;
            }
        }

        //zero right
        if (row > 0 && row < height - 1 && col == width - 1)
        {
            if (board2[row - 1][col - 1].isAlive == true)
            {
                cells++;
            }
            if (board2[row - 1][col].isAlive == true)
            {
                cells++;
            }
            if (board2[row - 1][0].isAlive == true)
            {
                cells++;
            }
            if (board2[row][0].isAlive == true)
            {
                cells++;
            }
            if (board2[row + 1][0].isAlive == true)
            {
                cells++;
            }
            if (board2[row + 1][col].isAlive == true)
            {
                cells++;
            }
            if (board2[row + 1][col - 1].isAlive == true)
            {
                cells++;
            }
            if (board2[row][col - 1].isAlive == true)
            {
                cells++;
            }
        }

        //left upper corner
        if (row == 0 && col == 0)
        {

        }

        //left down corner
        if (row == height - 1 && col == 0)
        {

        }

        //right upper corner
        if (row == 0 && col == width - 1)
        {

        }

        //right down corner
        if (row == height - 1 && col == width - 1)
        {

        }

    return cells;
}


void GameBoardDonut::shouldChangeStatus(int row, int col)
{
    if (board2[row][col].isAlive == true)
    {
        if (countCellsAround(row, col) == 2 || countCellsAround(row, col) == 3 )
        {
            board2[row][col].shouldChangeNextGen = false;
        }
        else
        {
            board2[row][col].shouldChangeNextGen = true;
        }
    }
    else
    {
        if (countCellsAround(row,col)==3)
        {
            board2[row][col].shouldChangeNextGen = true;
        }
        else
        {
            board2[row][col].shouldChangeNextGen = false;
        }
    }
}


void GameBoardDonut::changeStatus(int row, int col)
{
    if (board2[row][col].shouldChangeNextGen == true)
    {
        if (board2[row][col].isAlive == true)
        {board2[row][col].isAlive = false;}
        else
        {board2[row][col].isAlive = true;}
    }
    else
    {
        return;
    }
}

char GameBoardDonut::getSign(int row, int col) const
{
    if(board2[row][col].isAlive)
    {
        return '*';
    }
    else
    {
        return ' ';
    }
}


void GameBoardDonut::changeCellStatus(int row, int col) {
    if (board2[row][col].isAlive == true)
    {
        board2[row][col].isAlive = false;
    }
    board2[row][col].isAlive = true;
}


void GameBoardDonut::play(CommandSource &c_source) {
    while (true) {
        std::string command = c_source.next_command();

        if (command == "quit") {
            return;
        } else if (command == "next") {
            system("cls");
            display();
            for (int row = 0; row < getBoardHeight(); row++) {
                for (int col = 0; col < getBoardWidth(); col++) {
                    shouldChangeStatus(row, col);
                }
            }
            for (int row = 0; row < getBoardHeight(); row++) {
                for (int col = 0; col < getBoardWidth(); col++) {
                    changeStatus(row, col);
                }
            }

            Sleep(200);
        } else if (command == "change") {
            std::cout << "Podaj wiersz zmiany:\n";
            int row, col;
            std::cin >> row;
            std::cout << "Podaj kolumne zmiany:\n";
            std::cin >> col;
            changeCellStatus(row, col);
        }
    }
}