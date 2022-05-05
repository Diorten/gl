//
// Created by najma on 26.04.2022.
//
#include "GameBoard.hpp"
#include <iostream>
//#include <unistd.h>
#include <windows.h>
#include <random>

/*GameBoard::GameBoard(int width, int height): width(width), height(height), board(width * height, cell{false,false})
{
    reviveRandomCellsAtBegining();
    std::cout << "Plansza zwykła";
}*/

void GameBoard::display() const
{
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            std::cout << getSign(row,col);
        }
        std::cout << std::endl;
    }
}

void GameBoard::reviveRandomCellsAtBegining()
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
        if (board[v1][v].isAlive == false)
        {
            board[v1][v].isAlive = true;
            i++;
        }
    }
}

int GameBoard::countCellsAround(int row, int col)
{
    if (row < 0 || row > height - 1 || col < 0 || col > width - 1)
    {
        return -1;
    }
    else
    {
        int cells = 0;

        for (int y = row - 1; y <= row + 1; y++)
        {
            for (int x = col - 1; x <= col + 1; x++)
            {
                {
                    if ((y != row || x != col) && ((y >= 0 && y <= height - 1) && (x >= 0 && x <= width - 1)))
                    {
                        if (board[y][x].isAlive == true)
                        {
                            cells++;
                        }
                    }
                }
            }
        }
        return cells;
    }
}

char GameBoard::getSign(int row, int col) const
{
    if(board[row][col].isAlive)
    {
        return '*';
    }
    else
    {
        return ' ';
    }
}

bool GameBoard::checkStatus(int row, int col) const
{
    if(row < 0 || row > height - 1 || col < 0 || col > width - 1)
    {
        return false;
    }
    else if(board[row][col].isAlive == true)
    {return true;}
    return false;
}

void GameBoard::shouldChangeStatus(int row, int col)
{
    if (board[row][col].isAlive == true)
    {
        if (countCellsAround(row, col) == 2 || countCellsAround(row, col) == 3 )
        {
            board[row][col].shouldChangeNextGen = false;
        }
        else
        {
            board[row][col].shouldChangeNextGen = true;
        }
    }
    else
    {
        if (countCellsAround(row,col)==3)
        {
            board[row][col].shouldChangeNextGen = true;
        }
        else
        {
            board[row][col].shouldChangeNextGen = false;
        }
    }
}

int GameBoard::getBoardHeight()
{
    return height;
}

int GameBoard::getBoardWidth()
{
    return width;
}

void GameBoard::changeStatus(int row, int col)
{
    if (board[row][col].shouldChangeNextGen == true)
    {
        if (board[row][col].isAlive == true)
        {board[row][col].isAlive = false;}
        else
        {board[row][col].isAlive = true;}
    }
    else
    {
        return;
    }
}

void GameBoard::changeCellStatus(int row, int col) {
    if (board[row][col].isAlive == true)
    {
        board[row][col].isAlive = false;
    }
    board[row][col].isAlive = true;
}

void turnTaker::turnByAuto()
{
    system("cls");
    board.display();
    for (int row = 0; row < board.getBoardHeight(); row++)
    {
        for (int col = 0; col < board.getBoardWidth(); col++)
        {
            board.shouldChangeStatus(row,col);
        }
    }
    for (int row = 0; row < board.getBoardHeight(); row++)
    {
        for (int col = 0; col < board.getBoardWidth(); col++)
        {
            board.changeStatus(row,col);
        }
    }

    Sleep(200);
}

void turnTaker::turnByPerson() {
    system("cls");
    board.display();

    for (int row = 0; row < board.getBoardHeight(); row++)
    {
        for (int col = 0; col < board.getBoardWidth(); col++)
        {
            board.shouldChangeStatus(row,col);
        }
    }
    for (int row = 0; row < board.getBoardHeight(); row++)
    {
        for (int col = 0; col < board.getBoardWidth(); col++)
        {
            board.changeStatus(row,col);
        }
    }
}

void GameBoard::play(CommandSource &c_source) {
    while (true) {
        std::string command = c_source.next_command();

        if (command == "quit") {
            return;
        }
        else if (command == "next")
        {
            system("cls");
            display();
            for (int row = 0; row < getBoardHeight(); row++)
            {
                for (int col = 0; col < getBoardWidth(); col++)
                {
                    shouldChangeStatus(row,col);
                }
            }
            for (int row = 0; row < getBoardHeight(); row++)
            {
                for (int col = 0; col < getBoardWidth(); col++)
                {
                    changeStatus(row,col);
                }
            }

            Sleep(200);
        }
        else if (command == "change")
        {
            std::cout << "Podaj wiersz zmiany:\n";
            int row, col;
            std::cin >> row;
            std::cout << "Podaj kolumne zmiany:\n";
            std::cin >> col;
            changeCellStatus(row, col);
        }
    }
}

