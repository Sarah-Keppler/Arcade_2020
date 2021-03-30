/*
** EPITECH PROJECT, 2021
** testILib
** File description:
** ILib
*/

#ifndef ILIB_HPP_
#define ILIB_HPP_

#include <iostream>
#include "../Arcade.hh"

namespace Arcade {
    class ALib
    {
    public:
        /**
	 * @brief Set the type and the name of the library.
	 *
	 * @param type of the library.
	 * @param name of the library.
	 */
	ALib(Arcade::Type type, std::string name) noexcept;
	virtual ~ALib() = default;
	/**
	 * @brief Get the library type.
	 */
	Arcade::Type getType() const noexcept;


	/**
	 * @brief Get the library name.
	 */
	std::string getName() const noexcept;
    private:
	Arcade::Type const _type;
	std::string const _name;
    };
}

#endif /* !ILIB_HPP_ */
