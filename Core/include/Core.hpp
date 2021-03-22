/*
** Arcade
** Sarah-Keppler
*/

#ifndef ARCADE_CORE_HPP
#define ARCADE_CORE_HPP

#include "Loader.hpp"
#include "../../GraphLib/include/IGraph.hpp"
#include "../../Games/include/IGame.hpp"

namespace Arcade
{
    class Core
    {
    public:
	/**
	 * @brief Verify arguments, load all the libraries and verify them.
	 *
	 * @param number of arguments.
	 * @param arguments list.
	 */
	Core(int const ac, char ** const av);

	/**
	 * @brief Close all the libraries and destroy all the graphical elements.
	 */
	~Core();

	/**
	 * @brief Load, run and display main scene.
	 */
	void run();
    private:
	/**
	 * @brief If an event happened, put its id in _evt.
	 */
	void event();

	/**
	 * @brief React according to the _evt value.
	 */
	// Why not a functions pointer instead?
	void preUpdate();

	/**
	 * @brief Simulate the menu.
	 */
	void update();

	/**
	 * @brief Display every drawable element.
	 */
	void display() const noexcept;

	Arcade::Loader _loader;
	// Why not unique_ptr?
      	std::vector<GraphLib::IGraph *> _libs; //Potential names: _libraries, _graphlibs
	std::vector<Game::IGame *> _games;
	std::size_t _ilib; // Potential names: _clib, _idxlib
	std::size_t _evt;
	std::vector<GraphLib::Life> _life;
	std::vector<GraphLib::Position> _pos;
	std::vector<GraphLib::Size> _size;
	std::vector<GraphLib::Color> _color;
	std::vector<GraphLib::Form> _form;
	std::vector<GraphLib::Text> _text;
    };
}

#endif /* ARCADE_CORE_HPP */
