/*
** EPITECH PROJECT, 2021
** B-OOP-400-STG-4-1-Arcade-sarah.keppler
** File description:
** SFML
*/

#ifndef SFML_HPP_
#define SFML_HPP_

#include "IGraph.hpp"
#include "Component.hpp"
// #include "../../Arcade.hh"
#include <iostream>
#include <memory>

namespace Graph {
    class SFML : public IGraph
    {
    public:
    SFML();
    virtual ~SFML();

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

        ////////////////////////////////////////////////////
        ///
        ///     Methods
        ///
        ////////////////////////////////////////////////////
        /**
         * @brief Draws a circle base on the diameter.
         *
         * @param diameter Diameter of the circle.
         * @param color Color of the circle.
         */
        virtual void drawCircle(size_t const diameter, Graph::Color const color = Arcade::Colors.at("BLACK"));
        /**
         * @brief Draws a rectangle.
         *
         * @param dimension Dimensions of the rectangle.
         * @param color Color of the rectangle.
         */
        // virtual void drawRectangle(Graph::maths::Dimension dimension, Graph::Color const color = Graph::Color::BLACK);
        /**
         * @brief Draws a square.
         *
         * @param dimension Dimensions of the square.
         * @param color Color of the square.
         */
        // virtual void drawSquare(Arcade::maths::Dimension const dimension = {.width = 100, .x = 16, .y = 16},
        //     sf::Vector2f const position = {0, 0}, Arcade::Color const color = Arcade::Color::BLACK);
    protected:
    private:
    };
}

/**
 * @brief end point of the library.
 *
 * @return Must return an unique_ptr of the graphic library class
 */
extern "C" Graph::IGraph *endPoint(void);

#endif /* !SFML_HPP_ */
