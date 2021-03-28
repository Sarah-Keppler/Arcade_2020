/*
** Arcade | Games
** Sarah-Keppler
*/

#ifndef ARCADE_GAME_HPP
#define ARCADE_GAME_HPP

#include <vector>
#include <string>
#include <memory>
#include "../../Graphs/include/IGraph.hpp"
//#include "../../Arcade.hh"

namespace Game
{
    class IGame {
    public:
	IGame() = default;
	~IGame() = default;

	/**
	 * @brief Load a scene and create all the components
	 */
	virtual void load(std::unique_ptr<Graph::IGraph> lib) const = 0;

	/**
	 * @brief Get the type of the library.
	 */
	//virtual Arcade::Type getType() const noexcept = 0;
	virtual int getType() const noexcept = 0;

	/**
	 * @brief Get the name of the library.
	 */
	virtual std::string getName() const noexcept = 0;

	/**
	 * @brief Retrieve the events and react if possitble immediately.
	 *
	 * @return event type.
	 */
	//virtual Arcade::Keywords handleEvents() const noexcept = 0;
	virtual int handleEvents() const noexcept = 0;

	/**
	 * @brief React to the events related on the elapsed time and simulate the game.
	 *
	 * @param elapsed time.
	 */
	virtual void handleUpdate(float elapsedTime) const noexcept = 0; //perhaps an int
    protected:
	std::vector<Graph::IGraph> _lib;
	//Arcade::Keywords _evtType;
	int _evtType;
	char _evt;
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

    class AGame : protected IGame
    {
    public:
	/**
	 * @brief Set the type and the name of the library.
	 *
	 * @param type of the library.
	 * @param name of the library.
	 */
	//AGame(Arcade::Type const type, std::string const &name) noexcept;
	AGame(int const type, std::string const &name) noexcept;

	/**
	 * @brief Get the type of the library.
	 *
	 * @return type of the library.
	 */
	//Arcade::Type getType() const noexcept;
	int getType() const noexcept;

	/**
	 * @brief Get the name of the library.
	 *
	 * @return name of the library.
	 */
	std::string getName() const noexcept;
    protected:
	//Arcade::Type const _type;
	int const _type;
	std::string const _name;
    };
}

#endif /* ARCADE_GAME_HPP */
