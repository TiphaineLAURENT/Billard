//
// Queue.cpp for Queue in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 17:31:27 2017 Tiphaine
// Last update Thu Jul 13 18:24:46 2017 Tiphaine
//

#include "const.hpp"
#include "Queue.hpp"

Queue::Queue(void)
  : _power(0), _angle(DEFAULT_ANGLE)
{
  _texture = new sf::Texture;
  _texture->loadFromFile(Q_PATH);
  _sprite = new sf::Sprite(*_texture);
  _sprite->setRotation(_angle);
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

bool			Queue::setPos(const sf::Event::MouseMoveEvent &vec)
{
  _sprite->setPosition(sf::Vector2f((float)vec.x, (float)vec.y));
  return true;
}
