//
// Created by najma on 26.04.2022.
//
#include "UserCommands.hpp"
#include <string>
#include <iostream>

std::string UserCommands::next_command() {
    std::cout << "Wybierz co chcesz zrobić\n[change] - zmien stan komórki\n[play] - kolejny ruch\n[quit] - wyjdź" << std::endl;
    std::string wybor;
    std::cin >> wybor;

    if (wybor == "change")
    {
        return "change";
    }
    else if (wybor == "play")
    {
        return "next";
    }
    else if (wybor == "quit")
    {
        return "quit";
    }
    else
    {
        std::cout << "Wybierz odpowiednią komendę!" << std::endl;
        next_command();
    }
    return "quit";
}