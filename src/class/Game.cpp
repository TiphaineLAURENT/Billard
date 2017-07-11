//
// Game.cpp for Game in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 17:44:44 2017 Tiphaine
// Last update Tue Jul 11 18:14:25 2017 Tiphaine
//

#include "Game.hpp"
#include "const.hpp"

Game::Game()
{
  _videoMode = new sf::VideoMode(W_RESOLUTION, W_BPP);
  _window = new sf::RenderWindow(*_videoMode, W_NAME, W_STYLE);
}

Game::~Game()
{
  delete _videoMode;
  delete _window;
}
