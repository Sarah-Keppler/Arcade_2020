/*
** EPITECH PROJECT, 2021
** Arcade_2020
** File description:
** NCurses
*/

#ifndef NCURSES_HPP_
#define NCURSES_HPP_

#include "IGraph.hpp"
#include "Component.hpp"
#include <iostream>

namespace GraphLib {
    class NCurses : public IGraph
    {
    public:
    NCurses();
    virtual ~NCurses();

        /**
	 * @brief Play the role of the constructor. Create the window.
	 * 
	 * @param window title.
	 * @param window icon.
	 */
	virtual void open(std::string const title = "", std::string const icon = "") const;

	/**
	 * @brief Play the role of the deconstructor. Destroy all the components.
	 */
	virtual void close() const;

	/**
	 * @brief Change the title of the window.
	 * 
	 * @param new window title.
	 */
	virtual void setTitle(std::string const &title) const noexcept;

	/**
	 * @brief Change the icon of the window.
	 * 
	 * @param new window icon.
	 */
	virtual void setIcon(std::string const &icon) const noexcept;

	/**
	 * @brief Display an image (= pixel array) according to its components.
	 * 
	 * @param position.
	 * @param form.
	 * @param color.
	 * @param size.
	 */
	virtual void displayImage(Position &pos, Form &form, Color &color, Size &size) const;

    protected:
    private:
    };
}

/**
 * @brief end point of the library.
 *
 * @return Must return an unique_ptr of the graphic library class
 */
extern "C" std::unique_ptr<GraphLib::IGraph> endPoint(void);

#endif /* !NCURSES_HPP_ */
