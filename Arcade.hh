/*
** Arcade
** Sarah-Keppler
*/

#ifndef ARCADE_HH_
#define ARCADE_HH_

#include <map>
#include <array>
#include "Graphs/include/Component.hpp"

// uint8_t is from cstdint <- c library. Good idea?

namespace Arcade
{
    enum class Type : uint8_t
    {
	GAME,
	GRAPH
    };

    enum class ColorIdx : char
    {
	WHITE = 'W',
	BLACK = 'B',
	YELLOW = 'Y',
	YELLOW_GREEN = 'y',
	GREEN = 'G',
	BLUE_GREEN = 'g',
	BLUE = 'B',
	BLUE_VIOLET = 'b',
	VIOLET = 'V',
	RED_VIOLET = 'v',
	RED = 'R',
	RED_ORANGE = 'r',
	ORANGE = 'O',
	YELLOW_ORANGE = 'o'
    };

     //Utiliser Arcade::Colors.at("BLACK") pour accéder à une valeur
    const std::map<const char *, Graph::Color> Colors {
	{"WHITE", Graph::Color{255, 255, 255}},
	{"BLACK", Graph::Color{255, 255, 0}},
	{"YELLOW", Graph::Color{0, 155, 0}},
	{"YELLOW_GREEN", Graph::Color{0, 121, 0}},
	{"GREEN", Graph::Color{0, 174, 174}},
	{"BLUE_GREEN", Graph::Color{0, 0, 255}},
	{"BLUE", Graph::Color{115, 8, 165}},
	{"BLUE_VIOLET", Graph::Color{186, 0, 255}},
	{"VIOLET", Graph::Color{204, 0, 175}},
	{"RED_VIOLET", Graph::Color{255, 0, 0}},
	{"RED", Graph::Color{255, 70, 0}},
	{"RED_ORANGE", Graph::Color{255, 127, 0}},
	{"ORANGE", Graph::Color{254, 179, 0}}
    };

    enum class FormIdx : uint8_t
    {
	SQUARE = 0,
	RECT,
	CIRCLE,
	TRIANGLE,
	OTHER
    };

    enum class Keywords : uint8_t
    {
	MV_Z = 0,
	MV_S,
	MV_Q,
	MV_D,
	NEXT_LIB,
	PREV_LIB,
	NEXT_GAME,
	PREV_GAME,
	RESTART,
	MENU
    };
}

#endif /* !ARCADE_HH_ */
