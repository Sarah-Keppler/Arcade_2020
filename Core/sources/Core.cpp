/*
** EPITECH PROJECT, 2021
** Arcade_2020
** File description:
** Core
*/

#include "Core.hpp"

Arcade::Core::Core(int const ac, char ** const av)
{
    if (ac != 2)
        throw FatalError("Invalid number of arguments");
    _graph.push_back(_graphLoader.getInstance(av[1], "endPoint"));
}

Arcade::Core::~Core()
{
}


void Arcade::Core::run(void)
{
    std::cout << "run" << std::endl;
}
