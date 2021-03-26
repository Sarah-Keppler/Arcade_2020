/*
** EPITECH PROJECT, 2021
** Arcade_2020
** File description:
** Pacman
*/

#include "Pacman.hpp"

std::unique_ptr<Game::Pacman> pacman;

Game::Pacman::Pacman()
{
}

Game::Pacman::~Pacman()
{
}

void Game::Pacman::init(int const idx, std::vector<GraphLib::IGraph> const list) const noexcept
{
    (void)idx;
    (void)list;
}

void Game::Pacman::leave() const noexcept
{
}

int Game::Pacman::play() const
{
    return (0);
}

void Game::Pacman::event() const
{
}

void Game::Pacman::preUpdate() const
{
}

void Game::Pacman::update() const
{
}

void Game::Pacman::display() const noexcept
{
}

extern "C" std::unique_ptr<Game::IGame> Game::Pacman::endPoint(void) const
{
    return (std::move(pacman));
}

__attribute__((constructor))
void start(void)
{
    pacman = std::unique_ptr<Game::Pacman>(new Game::Pacman());
}
