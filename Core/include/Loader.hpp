/*
** Arcade
** Sarah-Keppler
*/

#ifndef ARCADE_LOADER_HPP
#define ARCADE_LOADER_HPP

#include <string>
#include <vector>
#include <memory>
#include <fcntl.h>
#include <dlfcn.h>
#include "../../Error/Error.hpp"
#include "../../Games/include/IGame.hpp"
#include "../../GraphLib/include/IGraph.hpp"

namespace Arcade
{
	/**
	 * @tparam T the instance of IGame or IGrapLib
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
	 * @param endPointName end point name.
	 *
	 * @return a pointer of the library class.
	 */
    std::unique_ptr<T> getInstance(std::string const path, std::string const endPointName);

    private:
	// Array of library pointers in order to close them later.
	std::vector<void *> _handle;
    };
}

#endif /* ARCADE_LOADER_HPP */
