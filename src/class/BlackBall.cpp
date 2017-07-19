//
// BlackBall.cpp for BlackBall in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 13:32:15 2017 Tiphaine
// Last update Wed Jul 19 11:06:34 2017 Tiphaine
//

#include "const.hpp"
#include "BlackBall.hpp"

const std::string	BlackBall::_color = BLACK;

BlackBall::BlackBall()
  : Ball()
{
  _texture = new sf::Texture;
  if (!_texture->loadFromFile(B_PATH(_color)))
    exit(EXIT_FAILURE);
  _sprite = new sf::Sprite(*_texture);
  _sprite->setOrigin(B_ORIGIN);
  _sprite->setScale(B_SCALE);
  reset();
}

BlackBall::~BlackBall()
{
  //  ~Ball();
  delete _texture;
  delete _sprite;
}

bool			BlackBall::reset()
{
  setPos(BB_DEFAULT_POS);
  setSpeed(SPEED_MIN, SPEED_MIN);
  return true;
}
