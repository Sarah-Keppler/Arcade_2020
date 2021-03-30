/*
** EPITECH PROJECT, 2021
** testILib
** File description:
** ILib
*/

#include "ALib.hpp"

Arcade::ALib::ALib(Arcade::Type type, std::string name) noexcept : _type(type), _name(name)
{
}

Arcade::Type Arcade::ALib::getType() const noexcept
{
    return _type;
}

std::string Arcade::ALib::getName() const noexcept
{
    return _name;
}
