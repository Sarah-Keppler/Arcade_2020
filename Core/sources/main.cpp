/*
** EPITECH PROJECT, 2021
** Arcade_2020
** File description:
** main
*/

#include "Core.hpp"
#include "../../Error/Error.hpp"

int main(int ac, char **av)
{
    try {
        Arcade::Core core(ac, av);
        core.run();
    } catch (Arcade::FatalError const &error) {
        std::cerr << error.what() << std::endl;
        return (84);
    }
    return (0);
}
