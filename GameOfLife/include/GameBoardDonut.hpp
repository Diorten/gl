//
// Created by najma on 27.04.2022.
//

#pragma once
#include "GameBoard.hpp"

class GameBoardDonut : GameBoard
{
public:
    int width = 40;
    int height = 40;

    std::vector<std::vector<cell>> board2;

    GameBoardDonut(int height = 40, int width = 40) : height(height), width(width), board2(height, std::vector<cell>(width, cell{false, false})) {std::cout << "Plansza Donut\n";reviveRandomCellsAtBegining();};

    int countCellsAround(int row, int col) override;

    void reviveRandomCellsAtBegining() override;

    void shouldChangeStatus(int row, int col) override;

    void changeStatus(int row, int col) override;

    void changeCellStatus(int row, int col) override;

    char getSign(int row, int col) const override;

    void play(CommandSource& c_source);
};