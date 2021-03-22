/*
** Arcade | Games
** Sarah-Keppler
*/

#ifndef ARCADE_GAME_HPP
#define ARCADE_GAME_HPP

#include <vector>
#include "../../GraphLib/include/IGraph.hpp"

namespace Game
{
    class IGame {
    public:
	IGame() = default;
	~IGame() = default;

	/**
	 * @brief Play the role of the constructor. Create the game and keep the graphical libs list.
	 * 
	 * @param current graphical lib index.
	 * @param graphical libs array.
	 */
	virtual void init(int const idx, std::vector<GraphLib::IGraph> const list) const noexcept = 0;

	/**
	 * @brief Play the role of the deconstructor. Destroy all the graphical elements.
	 */
	virtual void leave() const noexcept = 0;

	/**
	 * @brief Load, run and display the game.
	 *
	 * @return 1, or 0 if the window is closed.
	 */
	virtual int play() const = 0;
    protected:
	/**
	 * @brief If an event happened, put its id in _evt.
	 */
	virtual void event() const = 0;

	/**
	 * @brief React according to the _evt value.
	 */
	virtual void preUpdate() const = 0;

	/**
	 * @brief Simulate the game.
	 */
	virtual void update() const = 0;
	
	/**
	 * @brief Display every drawable element.
	 */
	virtual void display() const noexcept = 0;

	std::size_t _ilib;
	std::vector<GraphLib::IGraph> const _libs;
	/*
	  Note: Use  emplace_back instead of push_back to gain more performance
	  Perhaps somethign else than a vector?
	*/
	std::vector<GraphLib::Life> _life;
	std::vector<GraphLib::Position> _pos;
	std::vector<GraphLib::Size> _size;
	std::vector<GraphLib::Color> _color;
	std::vector<GraphLib::Form> _form;
	std::vector<GraphLib::Text> _text;
    };
}

// Add in sub classes. Why not a unique_ptr instead of a pointer?
/*
SFMLController *sfml = nullptr;

__attribute__((constructor))
void start(void)
{
    smfl = new SFMLController();
}

__attribute__((destructor))
void end(void)
{
    delete smfl;
}

extern "C" SFMLController *endPoint(void)
{
    return (smfl);
}
*/

#endif /* ARCADE_GAME_HPP */
