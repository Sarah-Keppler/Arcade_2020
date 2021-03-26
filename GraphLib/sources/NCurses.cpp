/*
** EPITECH PROJECT, 2021
** Arcade_2020
** File description:
** NCurses
*/

#include "NCurses.hpp"

std::unique_ptr<GraphLib::NCurses> ncurses;

GraphLib::NCurses::NCurses(){}

GraphLib::NCurses::~NCurses(){}

void GraphLib::NCurses::open(std::string const title, std::string const icon) const
{
    (void)title;
    (void)icon;
}

void GraphLib::NCurses::close() const
{
}

void GraphLib::NCurses::setTitle(std::string const &title) const noexcept
{
    (void)title;
}

void GraphLib::NCurses::setIcon(std::string const &icon) const noexcept
{
    (void)icon;
}

void GraphLib::NCurses::displayImage(Position &pos, Form &form, Color &color, Size &size) const
{
    (void)pos;
    (void)form;
    (void)color;
    (void)size;
}

extern "C" std::unique_ptr<GraphLib::IGraph> endPoint(void)
{
    std::cout << "in endPoint" << std::endl;
    return (std::move(ncurses));
}

__attribute__((constructor))
void start(void)
{
    std::cout << "in start" << std::endl;
    ncurses = std::unique_ptr<GraphLib::NCurses>(new GraphLib::NCurses());
}
