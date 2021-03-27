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
    /**
     * @brief Instance of IGame ir IGraphLib
     */
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
	 * @param end point name.
	 *
	 * @return a pointer of the library class.
	 */
	std::unique_ptr<T> getInstance(std::string const &path, std::string const &endPoint);
    private:
	std::vector<void *> _handle;
    };
}

#endif /* ARCADE_LOADER_HPP */
