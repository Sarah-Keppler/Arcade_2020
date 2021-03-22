/*
** Arcade
** Sarah-Keppler
*/

#ifndef ARCADE_ERROR_HPP
#define ARCADE_ERROR_HPP

#include <string>
#include <exception>

namespace Arcade
{
    class Error : std::exception
    {
    public:
	Error(std::string const &message) noexcept;
	~Error() = default;

	char const *what() const noexcept;
    private:
	std::string const _message;
    };

    class FatalError : public Error
    {
    public:
	FatalError(std::string const &message) noexcept : Error(message) {}
    private:
	std::string const _message;
    };
}

#endif /* ARCADE_ERROR_HPP */
