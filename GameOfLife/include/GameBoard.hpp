//
// Created by najma on 26.04.2022.
//
#pragma once
#include <vector>
#include <iostream>
#include "CommandSource.hpp"

struct cell
{
    bool isAlive;
    bool shouldChangeNextGen;
};
class GameBoard
{
    //int width;
    //int height;

public:

    int width = 40;
    int height = 40;

    std::vector<std::vector<cell>> board;


    //Kontruktor parenta, musi być na sztywno zdefiniowany jeśli chce go dziedziczyć, bez dziedziczenia działa jak należy
    //Uruchamia się dwa razy przy dziedziczeniu (w tym programie trzy bo mam jeszcze jedną klasę)
    GameBoard(int width = 40, int height = 40) : width{width}, height{height}, board(width, std::vector<cell>(height, cell{false, false})){reviveRandomCellsAtBegining();std::cout<<"Parent\n";}





    void display() const;

    virtual void reviveRandomCellsAtBegining();
    void reviveCellsByIndex();

    int getBoardWidth();
    int getBoardHeight();

    virtual int countCellsAround(int row, int col);

    virtual void shouldChangeStatus(int row, int col);

    virtual void changeStatus(int row, int col);

    virtual char getSign(int row, int col) const;

    bool checkStatus(int row, int col) const;

    virtual void changeCellStatus(int row, int col);

    void play(CommandSource& c_source);

    ~GameBoard() {std::cout << "Destruktor parent";};

};

class turnTaker
{
public:
    GameBoard& board;

    void turnByAuto();
    void turnByPerson();
};