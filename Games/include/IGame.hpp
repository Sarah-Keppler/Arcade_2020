/*
** Arcade | Games
** Sarah-Keppler
*/

#ifndef ARCADE_GAME_HPP
#define ARCADE_GAME_HPP

#include <vector>
#include <string>
#include "../../GraphLib/include/IGraph.hpp"
#include "../../Arcade.hh"

namespace Game
{
    class IGame {
    public:
	IGame() = default;
	~IGame() = default;

	/**
	 * @brief Play the role of the constructor. Create the game and keep the graphical libs list.
	 * 
	 * @param current graphical lib index.
	 * @param graphical libs array.
	 */
	virtual void init(int const idx, std::vector<GraphLib::IGraph> const list) const noexcept = 0;

	/**
	 * @brief Play the role of the deconstructor. Destroy all the graphical elements.
	 */
	virtual void leave() const noexcept = 0;

	/**
	 * @brief Get the type of the library.
	 */
	virtual Arcade::Type getType() const noexcept = 0;

	/**
	 * @brief Get the name of the library.
	 */
	virtual std::string getName() const noexcept = 0;

	/**
	 * @brief Load, run and display the game.
	 *
	 * @return index of the keywords enum.
	 */
	virtual Arcade::Keywords play() const = 0;
    protected:
	/**
	 * @brief If an event happened, put its id in _evt.
	 */
	virtual void event() const = 0;

	/**
	 * @brief React according to the _evt value.
	 */
	virtual void preUpdate() const = 0;

	/**
	 * @brief Simulate the game.
	 */
	virtual void update() const = 0;
	
	/**
	 * @brief Display every drawable element.
	 */
	virtual void display() const noexcept = 0;

	std::size_t _ilib;
	std::vector<GraphLib::IGraph> const _libs;	
	/*
	  Note: Use  emplace_back instead of push_back to gain more performance
	  Perhaps somethign else than a vector?
	*/
	std::vector<GraphLib::Life> _life;
	std::vector<GraphLib::Position> _pos;
	std::vector<GraphLib::Size> _size;
	std::vector<GraphLib::Color> _color;
	std::vector<GraphLib::Form> _form;
	std::vector<GraphLib::Text> _text;
    };

    class AGame : protected IGame
    {
    public:
	/**
	 * @brief Set the type and the name of the library.
	 *
	 * @param type of the library.
	 * @param name of the library.
	 */
	AGame(Arcade::Type const type, std::string const &name) noexcept;

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

#endif /* ARCADE_GAME_HPP */
