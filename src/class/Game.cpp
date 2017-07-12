//
// Game.cpp for Game in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 17:44:44 2017 Tiphaine
// Last update Wed Jul 12 14:00:34 2017 Tiphaine
//

#include "Game.hpp"
#include "const.hpp"
#include <iostream>

Game::Game() : _isPlaying(false)
{
  _window = new sf::RenderWindow(sf::VideoMode(W_RESOLUTION, W_BPP), W_NAME, W_STYLE);
  _event = new sf::Event;
  _tableTexture = new sf::Texture;
  _tableTexture->loadFromFile(T_PATH);
  _tableSprite = new sf::Sprite(*_tableTexture);
  _tableSprite->setOrigin(T_ORIGIN_X, T_ORIGIN_Y);
  _tableSprite->setPosition(T_POS_DEFAULT);
}

Game::~Game()
{
  delete _window;
  delete _event;
  delete _tableTexture;
  delete _tableSprite;
}

bool		Game::loop(bool play)
{
  _isPlaying = play;

  while (_isPlaying)
    {
      checkEvent();
      draw();
      sf::sleep(sf::milliseconds(20));
    }
  _window->close();
  return true;
}

bool		Game::draw(void)
{
  static float x_speed(T_SPEED_X);
  static float y_speed(T_SPEED_Y);
  float pos_x(_tableSprite->getPosition().x);
  float pos_y(_tableSprite->getPosition().y);
  float acceleration(ACCELERATION);

  _window->clear(W_CLEAR);
  if (pos_x < 10.0 || pos_x > getFULL_HD('x'))
    x_speed *= (float)-1;
  if (pos_y < 10.0 || pos_y > getFULL_HD('y'))
    y_speed *= (float)-1;
  std::cout << x_speed << std::endl << y_speed << std::endl;
  _tableSprite->setPosition(pos_x + x_speed, pos_y + y_speed);
  _window->draw(*_tableSprite);
  _window->display();
  if (x_speed < (float)0.001 && x_speed > (float)-0.001)
    x_speed = 0;
  else
    x_speed *= acceleration;
  if (y_speed < (float)0.001 && y_speed > (float)-0.001)
    y_speed = 0;
  else
    y_speed *= acceleration;
  return true;
}

void		Game::checkEvent(void)
{
  while (_window->pollEvent(*_event))
    {
      if (_event->type == sf::Event::KeyPressed)
	{
	  if (_event->key.code == sf::Keyboard::Escape)
	    {
	      _isPlaying = false;
	      break ;
	    }
	}
    }
}
