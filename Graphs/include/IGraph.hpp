/*
** EPITECH PROJECT, 2021
** B-OOP-400-STG-4-1-arcade-sarah.keppler
** File description:
** IGraph
*/

#ifndef ARCADE_GRAPH_HPP
#define ARCADE_GRAPH_HPP

#include <vector>
#include <string>
#include "Component.hpp"
#include "../../Arcade.hh"
#include "./../../Common/ALib.hpp"

namespace Graph
{
    class IGraph : public Arcade::ALib
    {
    public:
	IGraph(std::string name) : Arcade::ALib(Arcade::Type::GRAPH, name){};
	~IGraph() = default;

	/**
	 * @brief Play the role of the constructor. Create the window.
	 * 
	 * @param window title.
	 * @param window icon.
	 */
	virtual void open(std::string const title = "", std::string const icon = "") const = 0;

	/**
	 * @brief Play the role of the deconstructor. Destroy all the components.
	 */
	virtual void close() const = 0;

	/**
	 * @brief Change the title of the window.
	 * 
	 * @param new window title.
	 */
	virtual void setTitle(std::string const &title) const noexcept = 0;

	/**
	 * @brief Change the icon of the window.
	 * 
	 * @param new window icon.
	 */
	virtual void setIcon(std::string const &icon) const noexcept = 0;

	/**
	 * @brief Display an image (= pixel array) according to its components.
	 * 
	 * @param position.
	 * @param form.
	 * @param color.
	 * @param size.
	 */
	virtual void displayImage(Position &pos, Form &form, Color &color, Size &size) const = 0;
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

#endif /* ARCADE_GRAPH_HPP */
