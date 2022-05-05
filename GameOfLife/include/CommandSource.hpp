//
// Created by najma on 26.04.2022.
//
#pragma once
#include <string>

class CommandSource
{
public:
    virtual std::string next_command() = 0;
    virtual ~CommandSource() {};
};
