/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** Loader
*/

#include "Loader.hpp"

template<class T>
Arcade::Loader<T>::~Loader()
{
    std::vector<void *>::iterator i = _handle.begin();

    for (; i != _handle.end(); ++i)
        dlclose(*i);
}

template<class T>
std::unique_ptr<T> Arcade::Loader<T>::getInstance(std::string const path, std::string const endPointName)
{
    void *handle;
    std::unique_ptr<T>(*endPoint)();
    std::unique_ptr<T> lib;

    handle = dlopen(path.c_str(), RTLD_LAZY);
    if (!handle)
        throw FatalError("Invalid library path: \"" + path + "\"");
    endPoint = (std::unique_ptr<T>(*)())dlsym(handle, endPointName.c_str());
    if (!endPoint)
        throw FatalError("Invalid library endPoint:\"" + endPointName + "\"");
    lib = std::move(endPoint());
    if (!lib)
        throw FatalError("Invalid instance of endPoint");
    _handle.push_back(handle);
    return (lib);
}

template std::unique_ptr<Game::IGame> Arcade::Loader<Game::IGame>::getInstance(std::string const path, std::string const endPoint);
template std::unique_ptr<GraphLib::IGraph> Arcade::Loader<GraphLib::IGraph>::getInstance(std::string const path, std::string const endPoint);

template Arcade::Loader<Game::IGame>::~Loader(void);
template Arcade::Loader<GraphLib::IGraph>::~Loader(void);
