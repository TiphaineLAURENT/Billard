//
// Ball.cpp for Ball in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Wed Jul 12 15:15:14 2017 Tiphaine
// Last update Wed Jul 19 11:46:44 2017 Tiphaine
//

#include "const.hpp"
#include "Ball.hpp"

Ball::Ball()
{
  _speed = new sf::Vector2<double>(SPEED_MIN, SPEED_MIN);
}

Ball::~Ball()
{
  delete _speed;
}

sf::Vector2f		Ball::pos(void) const
{
  return _sprite->getPosition();
}

bool			Ball::setPos(const sf::Vector2f &pos)
{
  if (pos.x > getFULL_HD('x') ||  pos.y > getFULL_HD('y')
      || pos.x < 0 || pos.y < 0)
    return false;
  _sprite->setPosition(pos);
  return true;
}

bool			Ball::setPos(float x, float y)
{
  if (x > getFULL_HD('x') || y > getFULL_HD('y')
      || x < 0 || y < 0)
    return false;
  _sprite->setPosition(x, y);
  return true;
}

sf::Vector2<double>	&Ball::speed(void) const
{
  return *_speed;
}

bool			Ball::setSpeed(const sf::Vector2<double> &pos)
{
  if (pos.x > SPEED_MAX || pos.y > SPEED_MAX ||
      pos.x < SPEED_MIN || pos.y < SPEED_MIN)
    return false;
  if (_speed)
    delete _speed;
  _speed = new sf::Vector2<double>(pos);
  return true;
}

bool			Ball::setSpeed(double x, double y)
{
  if (x > SPEED_MAX || y > SPEED_MAX ||
      x < SPEED_MIN || y < SPEED_MIN)
    return false;
  if (_speed)
    delete _speed;
  _speed = new sf::Vector2<double>(x, y);
  return true;
}

sf::Sprite		&Ball::sprite(void) const
{
  return *_sprite;
}
