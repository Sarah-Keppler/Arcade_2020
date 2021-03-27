/*
** Arcade
** Sarah-Keppler
*/

#include "Graphs/include/Component.hpp"

// uint8_t is from cstdint <- c library. Good idea?

namespace Arcade
{
    enum class Type : uint8_t
    {
	GAME = 0,
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

    Arcade::Color Colors[14] =
    {
	Arcade::Color{255, 255, 255},
	Arcade::Color{255, 255, 0},
	Arcade::Color{0, 155, 0},
	Arcade::Color{0, 121, 0},
	Arcade::Color{0, 174, 174},
	Arcade::Color{0, 0, 255},
	Arcade::Color{115, 8, 165},
	Arcade::Color{186, 0, 255},
	Arcade::Color{204, 0, 175},
	Arcade::Color{255, 0, 0},
	Arcade::Color{255, 70, 0},
	Arcade::Color{255, 127, 0},
	Arcade::Color{254, 179, 0}
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
