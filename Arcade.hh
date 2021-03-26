/*
** Arcade
** Sarah-Keppler
*/

#include "GraphLib/include/Component.hpp"

// uint8_t is from cstdint <- c library. Good idea?

namespace Arcade
{
    enum class ColorIdx : uint8_t
    {
	WHITE,
	BLACK,
	YELLOW,
	YELLOW_GREEN,
	GREEN,
	BLUE_GREEN,
	BLUE,
	BLUE_VIOLET,
	VIOLET,
	RED_VIOLET,
	RED,
	RED_ORANGE,
	ORANGE,
	YELLOW_ORANGE
    };

    typedef struct Color_s
    {
	uint8_t r;
	uint8_t g;
	uint8_t b;
    }Color;

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
	SQUARE,
	RECT,
	CIRCLE,
	TRIANGLE,
	OTHER
    };

    enum class Keywords : uint8_t
    {
	MV_Z,
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
