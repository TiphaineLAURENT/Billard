//
// WhiteBall.cpp for WhiteBall in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 10:57:35 2017 Tiphaine
// Last update Wed Jul 19 11:06:44 2017 Tiphaine
//

#include "const.hpp"
#include "WhiteBall.hpp"

const std::string	WhiteBall::_color = WHITE;

WhiteBall::WhiteBall()
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

WhiteBall::~WhiteBall()
{
  //  ~Ball();
  delete _texture;
  delete _sprite;
}

bool			WhiteBall::reset()
{
  setPos(BW_DEFAULT_POS);
  setSpeed(SPEED_MIN, SPEED_MIN);
  return true;
}
