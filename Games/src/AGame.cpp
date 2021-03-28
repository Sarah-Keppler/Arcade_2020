/*
** Arcade | Games
** Sarah-Keppler
*/

#include "IGame.hpp"

//Game::AGame::AGame(Arcade::Type const type, std::string const &name) : _type(type), _name(name)
Game::AGame::AGame(int const type, std::string const &name) noexcept : _type(type), _name(name)
{
}

//Arcade::Type AGame::getType() const noexcept
int Game::AGame::getType() const noexcept
{
    return _type;
}

std::string Game::AGame::getName() const noexcept
{
    return _name;
}
