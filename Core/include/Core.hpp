/*
** Arcade
** Sarah-Keppler
*/

#ifndef ARCADE_CORE_HPP
#define ARCADE_CORE_HPP

#include <vector>
#include <string>
#include <memory>
#include <map>
#include "Loader.hpp"
#include "../../Graphs/include/IGraph.hpp"
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
	 * @brief Load, run and display scenes.
	 */
	void run();
    private:
	Arcade::Loader<Graph::IGraph> _graphLoader;
	Arcade::Loader<Game::IGame> _gameLoader;
      	std::vector<std::unique_ptr<Graph::IGraph>> _graphs;
	std::vector<std::unique_ptr<Game::IGame>> _games;
	std::size_t _cgraph, _cgame;
	Arcade::Keywords _evtType;
	char _evt;
	std::map<std::string, int> _scoreboard;
	std::string _playerName;
	int _score;
    };
}

#endif /* ARCADE_CORE_HPP */
