/*
** EPITECH PROJECT, 2021
** B-OOP-400-STG-4-1-arcade-sarah.keppler
** File description:
** Pacman
*/

#ifndef PACMAN_HPP
#define PACMAN_HPP

#include <vector>
#include <string>
#include <memory>
#include "IGame.hpp"
#include "../../Graphs/include/IGraph.hpp"

namespace Game
{
    class Pacman : public IGame
    {
    public:
	Pacman();
	virtual ~Pacman();

	/**
	 * @brief Load a scene and create all the components
	 */
	virtual void load(std::unique_ptr<Graph::IGraph> lib) const;

	/**
	 * @brief Retrieve the events and react if possitble immediately.
	 *
	 * @return event type.
	 */
	virtual Arcade::Keywords handleEvents() const noexcept;

	/**
	 * @brief React to the events related on the elapsed time and simulate the game.
	 *
	 * @param elapsed time.
	 */
	virtual void handleUpdate(float elapsedTime) const noexcept; //perhaps an int
    protected:
	std::vector<Graph::IGraph> _lib;
	/*
	  Note: Use  emplace_back instead of push_back to gain more performance
	  Perhaps somethign else than a vector?
	*/
	std::vector<Graph::Life> _life;
	std::vector<Graph::Position> _pos;
	std::vector<Graph::Size> _size;
	std::vector<Graph::Color> _color;
	std::vector<Graph::Form> _form;
	std::vector<Graph::Text> _text;
    };
}

/**
 * @brief end point of the library.
 *
 * @return Must return an unique_ptr of the graphic library class
 */
extern "C" Game::IGame *endPoint(void);

#endif /* PACMAN_HPP */
