/*
** Arcade
** Sarah-Keppler
*/

#ifndef ARCADE_LOADER_HPP
#define ARCADE_LOADER_HPP

#include <string>
#include <vector>
#include <memory>

namespace Arcade
{
    template<typename T>
    class Loader {
    public:
	Loader() = default;

	/**
	 * @brief Close all the librairies.
	 */
	~Loader();

	/**
	 * @brief Load the library given in the path.
	 *
	 * @param library path.
	 * @param endPoint (?).
	 *
	 * @return a pointer of the library class.
	 */
	// Return a unique_ptr instead?
	//std::unique_ptr<T> getInstance(std::string const &path, std::string const &endPoint);
	T *getInstance(std::string const &path, std::string const &endPoint);
    private:
	// Array of library pointers in order to close them later.
	std::vector<void *> _handle;

	// Useful? Can not just create a local variable?
	T *_lib;
	// Same from above.
	T *(*_endPoint)(void);
    };
}

#endif /* ARCADE_LOADER_HPP */
