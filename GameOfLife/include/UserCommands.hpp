//
// Created by najma on 26.04.2022.
//
#pragma once
#include "CommandSource.hpp"

class UserCommands : public CommandSource
{
public:
    std::string next_command() override;

private:
    int turns_playedByPerson = 0;
};