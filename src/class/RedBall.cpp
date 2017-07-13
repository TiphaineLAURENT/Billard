//
// RedBall.cpp for RedBall in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 14:19:21 2017 Tiphaine
// Last update Thu Jul 13 17:22:50 2017 Tiphaine
//

#include "const.hpp"
#include "RedBall.hpp"
#include <iostream>

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
  switch (_id)
    {
    case 0 : setPos(REDPOS_1);
      break ;
    case 1 : setPos(REDPOS_2);
      break ;
    case 2 : setPos(REDPOS_3);
      break ;
    case 3 : setPos(REDPOS_4);
      break ;
    case 4 : setPos(REDPOS_5);
      break ;
    case 5 : setPos(REDPOS_6);
      break ;
    case 6 : setPos(REDPOS_7);
      break ;
    default : break;
    }
  setSpeed(SPEED_MIN, SPEED_MIN);
  return true;
}
