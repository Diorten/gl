#include "GameBoard.hpp"
#include "AlwaysNextTurn.hpp"
#include "UserCommands.hpp"
#include "GameBoardWalc.hpp"
#include "GameBoardDonut.hpp"
#include <iostream>
#include <locale.h>

/*
int main()
{
    GameBoard board{40,40};
    turnTaker turns{board};
    int i=0;
    while(i<120)
    {
        turns.turnByAuto();
        i++;
    }
    return 0;
}
*/



int main() {

    AlwaysNextTurn auto_command_source;
    UserCommands user_command_source; // zakładając że UserCommands również implementuje interfejs CommandSource
    GameBoard game{40,40};
    GameBoardWalc gameBoardWalc{40, 40};
    GameBoardDonut gameBoardDonut{40, 40};

    std::string wybrana_plansza;
    std::cout << "Wybierz typ planszy [normal, walc, donut]: ";
    std::cin >> wybrana_plansza;


    std::string wybrany_tryb;
    std::cout << "Wybierz źródło komend [user, auto]: ";
    std::cin >> wybrany_tryb; // dla chętnych: można pozyskać tę wartość z parametru programu podanego przy uruchomieniu, zamiast pytać o nią użytkownika już w trakcie działania

    wybor:
    if (wybrana_plansza == "normal") {
        if (wybrany_tryb == "user")
            game.play(user_command_source);
        else if (wybrany_tryb == "auto")
            game.play(auto_command_source);
    }
    else if (wybrana_plansza == "walc") {
        if (wybrany_tryb == "user")
            gameBoardWalc.play(user_command_source);
        else if (wybrany_tryb == "auto")
            gameBoardWalc.play(auto_command_source);
    }
    else if (wybrana_plansza == "donut") {
        if (wybrany_tryb == "user")
            gameBoardDonut.play(user_command_source);
        else if (wybrany_tryb == "auto")
            gameBoardDonut.play(auto_command_source);
    }
    else {
       std::cout << "Niewłaściwy typ planszy";
   }

    return 0;
}