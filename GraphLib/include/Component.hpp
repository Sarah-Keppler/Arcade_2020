/*
** Arcade | Graph
** Sarah-Keppler
*/

#ifndef ARCADE_GRAPH_COMPONENT
#define ARCADE_GRAPH_COMPONENT

#include <string>
#include "IComponent.hpp"

namespace GraphLib
{
    struct Life : public IComponent
    {
	std::size_t _life, _maxLife;
    };

    struct Position : public IComponent
    {
	int _x, _y;
    };

    struct Size : public IComponent
    {
	std::size_t _x, _y;
    };

    struct Color : public IComponent
    {
	std::size_t _r, _g, _b;
    };

    struct Form : public IComponent
    {
	std::size_t _idx;
	std::string _spe;
    };

    struct Text : public IComponent
    {
	std::string _text;
    };

    /*
     * The event component may appear in the future.
     * It is a script. For instance, the script when Pacman touch an enemy or when, as a snake, you eat an apple.
     * Still in development.
     */
}

#endif /* ARCADE_GRAPH_COMPONENT */
