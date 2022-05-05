//
// Created by najma on 27.04.2022.
//

#pragma once
#include "GameBoard.hpp"

class GameBoardWalc : GameBoard
{
public:
    int width = 40;
    int height = 40;

    std::vector<std::vector<cell>> board1;


    //Konstruktor child, nie chce kompilować na sztywno bez stałych (musi być np. height = 40, width = 40, zdefiniowanie w mainie
    //nie zmienia wartości), w {} jest "std::cout << "Plansza Walc"" co daje znać kiedy kontruktor jest uruchomiony - child raz

    GameBoardWalc(int height = 40, int width = 40) : height(height), width(width), board1(height, std::vector<cell> (width, cell{false, false})) {std::cout << "Plansza Walc\n";reviveRandomCellsAtBegining();};



    int countCellsAround(int row, int col) override;

    void reviveRandomCellsAtBegining() override;

    void shouldChangeStatus(int row, int col) override;

    void changeStatus(int row, int col) override;

    void changeCellStatus(int row, int col) override;

    char getSign(int row, int col) const override;

    void play(CommandSource& c_source);
};