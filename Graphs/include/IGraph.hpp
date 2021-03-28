/*
** Arcade | Graph
** Sarah-Keppler
*/

#ifndef ARCADE_GRAPH_HPP
#define ARCADE_GRAPH_HPP

#include <vector>
#include <string>
#include "Component.hpp"
//#include "../../Arcade.hh"

namespace Graph
{
    class IGraph
    {
    public:
	IGraph() = default;
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
	 * @brief Get the library type.
	 */
	//virtual Arcade::Type getType() const noexcept = 0;
	virtual int getType() const noexcept = 0;

	/**
	 * @brief Get the library name.
	 */
	virtual std::string getName() const noexcept = 0;

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
//	virtual Arcade::Keywords getEvent() const noexcept = 0;
	virtual int getEvent() const noexcept = 0;

	/**
	 * @brief Retrive the letter key of the last event.
	 *
	 * @return char of the letter key.
	 */
	virtual char getEventChar() const noexcept = 0;

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
	//Arcade::Keywords _evtType;
	int _evtType;
	char _evt;
    };

    class AGraph : public IGraph
    {
    public:
        /**
	 * @brief Set the type and the name of the library.
	 *
	 * @param type of the library.
	 * @param name of the library.
	 */
	//AGraph(Arcade::Type const type, std::string const &name) noexcept;
	AGraph(int const type, std::string const &name) noexcept;

	/**
	 * @brief Get the library type.
	 */
	//Arcade::Type getType() const noexcept;
	int getType() const noexcept;

	/**
	 * @brief Get the library name.
	 */
	std::string getName() const noexcept;
    protected:
	int const _type;
	//Arcade::Type const _type;
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
