/*
** EPITECH PROJECT, 2021
** Arcade_2020
** File description:
** Pacman
*/

#ifndef PACMAN_HPP_
#define PACMAN_HPP_

#include "IGame.hpp"
#include "../../GraphLib/include/IGraph.hpp"

namespace Game {
    class Pacman : public IGame
    {
    public:
    Pacman();
    virtual ~Pacman();

	/**
	 * @brief Play the role of the constructor. Create the game and keep the graphical libs list.
	 * 
	 * @param current graphical lib index.
	 * @param graphical libs array.
	 */
	virtual void init(int const idx, std::vector<GraphLib::IGraph> const list) const noexcept;

	/**
	 * @brief Play the role of the deconstructor. Destroy all the graphical elements.
	 */
	virtual void leave() const noexcept;

	/**
	 * @brief Load, run and display the game.
	 *
	 * @return 1, or 0 if the window is closed.
	 */
	virtual int play() const;
    protected:
	/**
	 * @brief If an event happened, put its id in _evt.
	 */
	virtual void event() const;

	/**
	 * @brief React according to the _evt value.
	 */
	virtual void preUpdate() const;

	/**
	 * @brief Simulate the game.
	 */
	virtual void update() const;

	/**
	 * @brief Display every drawable element.
	 */
	virtual void display() const noexcept;

	/**
	 * @brief end point of the library.
	 *
	 * @return Must return an unique_ptr of the game library class
	 */
	virtual std::unique_ptr<IGame> endPoint(void) const;
    protected:
    private:
    };
}

#endif /* !PACMAN_HPP_ */
