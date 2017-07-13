//
// YellowBall.cpp for YellowBall in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 14:19:29 2017 Tiphaine
// Last update Thu Jul 13 16:27:44 2017 Tiphaine
//

#include "const.hpp"
#include "YellowBall.hpp"

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
}

YellowBall::~YellowBall()
{
  //  ~Ball();
  delete _texture;
  delete _sprite;
}

bool			YellowBall::reset()
{
  switch (_id)
    {
    case 0 : setPos(YELLOWPOS_1);
      break ;
    case 1 : setPos(YELLOWPOS_2);
      break ;
    case 2 : setPos(YELLOWPOS_3);
      break ;
    case 3 : setPos(YELLOWPOS_4);
      break ;
    case 4 : setPos(YELLOWPOS_5);
      break ;
    case 5 : setPos(YELLOWPOS_6);
      break ;
    case 6 : setPos(YELLOWPOS_7);
      break ;
    default : break;
    }
  setSpeed(SPEED_MIN, SPEED_MIN);
  return true;
}
