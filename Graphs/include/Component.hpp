/*
** Arcade | Graph
** Sarah-Keppler
*/

#ifndef ARCADE_GRAPH_COMPONENT
#define ARCADE_GRAPH_COMPONENT

#include <string>
#include "IComponent.hpp"

namespace Graph
{
    struct Life : public IComponent
    {
	Life();
	Life(std::size_t life, std::size_t maxLife) : _life(life), _maxLife(maxLife){};
	std::size_t _life, _maxLife;
    };

    struct Position : public IComponent
    {
	Position();
	Position(std::size_t x, std::size_t y) : _x(x), _y(y){};
	int _x, _y;
    };

    struct Size : public IComponent
    {
	Size();
	Size(std::size_t x, std::size_t y) : _x(x), _y(y){};
	std::size_t _x, _y;
    };

    struct Color : public IComponent
    {
	Color();
	Color(unsigned char r, unsigned char g, unsigned char b)
	 : _r(r), _g(g), _b(b){};

	unsigned char _r, _g, _b;
    };

    struct Form : public IComponent
    {
	Form();
	Form(std::size_t idx, std::string spe) : _idx(idx), _spe(spe){};
	std::size_t _idx;
	std::string _spe;
    };

    struct Text : public IComponent
    {
	Text();
	Text(std::string text) : _text(text){};
	std::string _text;
    };

    /*
     * The event component may appear in the future.
     * It is a script. For instance, the script when Pacman touch an enemy or when, as a snake, you eat an apple.
     * Still in development.
     */
}

#endif /* ARCADE_GRAPH_COMPONENT */
