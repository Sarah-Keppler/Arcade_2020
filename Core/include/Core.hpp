/*
** Arcade
** Sarah-Keppler
*/

#ifndef ARCADE_CORE_HPP
#define ARCADE_CORE_HPP

#include <memory>
#include "Loader.hpp"
#include "../../Graph/include/IGraph.hpp"
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

	Arcade::Loader<Graph::IGraph> _graphLoader;
	Arcade::Loader<Game::IGame> _gameGames;
      	std::vector<std::unique_ptr<Graph::IGraph>> _graphs;
	std::vector<std::unique_ptr<Game::IGame>> _games;
	std::size_t _clib;
	std::size_t _evt;
	std::vector<Graph::Life> _life;
	std::vector<Graph::Position> _pos;
	std::vector<Graph::Size> _size;
	std::vector<Graph::Color> _color;
	std::vector<Graph::Form> _form;
	std::vector<Graph::Text> _text;
    };
}

#endif /* ARCADE_CORE_HPP */
