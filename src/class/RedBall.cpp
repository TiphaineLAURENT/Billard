//
// RedBall.cpp for RedBall in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 14:19:21 2017 Tiphaine
// Last update Thu Jul 13 14:31:42 2017 Tiphaine
//

#include "const.hpp"
#include "RedBall.hpp"

const std::string	RedBall::_color = RED;
int			RedBall::_totalBall = 0;

RedBall::RedBall()
  : Ball(), _id(_totalBall++)
{
  _texture = new sf::Texture;
  if (!_texture->loadFromFile(B_PATH(_color)))
    exit(EXIT_FAILURE);
  _sprite = new sf::Sprite(*_texture);
  _sprite->setOrigin(B_ORIGIN);
  _sprite->setScale(B_SCALE);
  reset();
}

RedBall::~RedBall()
{
  //  ~Ball();
  delete _texture;
  delete _sprite;
}

bool			RedBall::reset()
{
  setPos(BB_DEFAULT_POS_X, BB_DEFAULT_POS_Y);
  setSpeed(SPEED_MIN, SPEED_MIN);
  return true;
}
