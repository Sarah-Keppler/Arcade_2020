/*
** Arcade | Graph
** Sarah-Keppler
*/

#ifndef ARCADE_GRAPH_HPP
#define ARCADE_GRAPH_HPP

#include <vector>
#include <string>
#include "Component.hpp"
#include "../../Common/Arcade.hh"
#include "../../Common/ILib.hpp"

namespace Graph
{
    class IGraph : public Arcade::ILib
    {
    public:
	IGraph() = default;
	virtual ~IGraph() = 0;

	/**
	 * @brief Play the role of the constructor. Create the window.
	 * 
	 * @param window title.
	 * @param window icon.
	 */
	virtual void open(std::string const &title = "", std::string const &icon = "") const = 0;

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
	 * @brief Retrieve the current event.
	 *
	 * @return current event type.
	 */
	virtual Arcade::Keywords getEvent() const noexcept = 0;

	/**
	 * @brief Retrieve the letter pressed of the last event.
	 *
	 * @return letter pressed.
	 */
	virtual char getEventChar() const noexcept = 0;

	//int verify_collision()

	/**
	 * @brief Display an image (= pixel array) according to its components.
	 * 
	 * @param position.
	 * @param form.
	 * @param color.
	 * @param size.
	 */
	virtual void displayImage(Position &pos, Form &form, Color &color, Size &size) const = 0;
    protected:
	Arcade::Keywords _evtType;
	char _evt;
    };

    class AGraph : protected IGraph
    {
    public:
	/**
	 * @brief Set the type and the name of the library.
	 *
	 * @param type of the library.
	 * @param name of the library.
	 */
	AGraph(Arcade::Type const type, std::string const &name) noexcept;

	/**
	 * @brief Get the type of the library.
	 *
	 * @return type of the library.
	 */
	Arcade::Type getType() const noexcept;

	/**
	 * @brief Get the name of the library.
	 *
	 * @return name of the library.
	 */
	std::string getName() const noexcept;
    protected:
	Arcade::Type const _type;
	std::string const _name;
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
