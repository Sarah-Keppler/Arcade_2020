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
#include "../../Common/Error.hpp"
#include "../../Games/include/IGame.hpp"
#include "../../Graphs/include/IGraph.hpp"

namespace Arcade
{
    /**
     * @brief Instance of IGame ir IGraph
     */
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
	 * @param type type wanted if specified
	 *
	 * @return a pointer of the library class.
	 */
	Arcade::ALib *getInstance(std::string const &path, std::string const &name);
    private:
	std::vector<void *> _handle;
    };
}

#endif /* ARCADE_LOADER_HPP */
