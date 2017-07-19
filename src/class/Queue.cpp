//
// Queue.cpp for Queue in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 17:31:27 2017 Tiphaine
// Last update Wed Jul 19 15:15:30 2017 Tiphaine
//

#include <cmath>
#include "const.hpp"
#include "Queue.hpp"
#include <iostream>

Queue::Queue(void)
  : _power(0), _angle(Q_DEFAULT_ANGLE)
{
  _texture = new sf::Texture;
  _texture->loadFromFile(Q_PATH);
  _sprite = new sf::Sprite(*_texture);
  _sprite->setRotation(_angle);
  _sprite->setPosition(Q_DEFAULT_POS);
  _sprite->setOrigin(Q_ORIGIN);
}

Queue::~Queue(void)
{
  delete _sprite;
  delete _texture;
}

sf::Sprite		&Queue::sprite(void) const
{
  return *_sprite;
}

sf::Vector2f		Queue::pos(void)
{
  return _sprite->getPosition();
}

void			Queue::setPos(const sf::Event::MouseMoveEvent &vec)
{
  _sprite->setPosition(sf::Vector2f((float)vec.x, (float)vec.y));
  return ;
}

float			&Queue::power(void)
{
  return _power;
}

void			Queue::charge(t_key action)
{
  sf::Vector2f		queue(pos());
  float			power_change;

  if (action == DOWN)
    power_change = POWER_DELTA;
  else if (action == UP)
    power_change = -POWER_DELTA;
  _power += power_change;
  if (_power < 0)
    {
      _power = 0;
      power_change = 0;
    }
  else if (_power > 100)
    {
      _power = 100;
      power_change = 0;
    }
  _sprite->setPosition(queue.x + power_change, queue.y);
  return ;
}

void			Queue::rotate(t_key action/*const sf::Vector2f &white,
						    const sf::Event::MouseMoveEvent &vec*/)
{
  /*  sf::Vector2f		mouse((float)vec.x, (float)vec.y);
      sf::Vector2f		queue(pos());
      sf::Vector2f		wq(queue.x - white.x, queue.y - white.y);
      sf::Vector2f		wm(mouse.x - white.x, mouse.y - white.y);
      float			cosa((wq.x * wm.x + wq.y * wm.y) /
      (sqrtf(powf(wq.x, 2) * powf(wq.y, 2)) * sqrtf(powf(wm.x, 2) * powf(wm.y, 2))));

      _sprite->setRotation(acosf(cosa));*/
  if (action == LEFT)
    _sprite->setRotation(_angle += ANGLE_DELTA);
  else if (action == RIGHT)
    _sprite->setRotation(_angle -= ANGLE_DELTA);
  return ;
}

bool			Queue::fire(bool fireing)
{
  sf::Vector2f		queue(pos());

  std::cout << _power << std::endl;
  if (fireing == true)
    {
      if (_power == 0)
	return false;
      _power -= 5;
      _power < 0 ? _power = 0 : _power;
      _sprite->setPosition(queue.x - 5, queue.y);
      return true;
    }
  return false;
}
