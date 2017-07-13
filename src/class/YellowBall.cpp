//
// YellowBall.cpp for YellowBall in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 14:19:29 2017 Tiphaine
// Last update Thu Jul 13 14:44:43 2017 Tiphaine
//

#include "const.hpp"
#include "YellowBall.hpp"
#include <iostream>

const std::string	YellowBall::_color = YELLOW;
int			YellowBall::_totalBall = 0;

YellowBall::YellowBall()
  : Ball(), _id(_totalBall++)
{
  _texture = new sf::Texture;
  if (!_texture->loadFromFile(B_PATH(_color)))
    exit(EXIT_FAILURE);
  _sprite = new sf::Sprite(*_texture);
  _sprite->setOrigin(B_ORIGIN);
  _sprite->setScale(B_SCALE);
  reset();
  std::cout << _id << "/" <<  _totalBall << std::endl;
}

YellowBall::~YellowBall()
{
  //  ~Ball();
  delete _texture;
  delete _sprite;
}

bool			YellowBall::reset()
{
  setPos(BB_DEFAULT_POS_X, BB_DEFAULT_POS_Y);
  setSpeed(SPEED_MIN, SPEED_MIN);
  return true;
}
