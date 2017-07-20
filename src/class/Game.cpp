//
// Game.cpp for Game in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 17:44:44 2017 Tiphaine
// Last update Thu Jul 20 10:33:43 2017 Tiphaine
//

#include "Game.hpp"
#include "const.hpp"
#include "utils.hpp"
#include <iostream>

void		Game::createBalls()
{
  for (int i = 0; i < NB_RED; i++)
    _redBalls.push_back(new RedBall);
  for (int i = 0; i < NB_YELLOW; i++)
    _yellowBalls.push_back(new YellowBall);
  _blackBall = new BlackBall;
  _whiteBall = new WhiteBall;
}

Game::Game() : _isPlaying(false)
{
  _window = new sf::RenderWindow(sf::VideoMode(W_RESOLUTION, W_BPP), W_NAME, W_STYLE);
  _window->setFramerateLimit(W_FPS_MAX);
  _event = new sf::Event;
  _tableTexture = new sf::Texture;
  _tableTexture->loadFromFile(T_PATH);
  _tableSprite = new sf::Sprite(*_tableTexture);
  _tableSprite->setOrigin(T_ORIGIN_X, T_ORIGIN_Y);
  _tableSprite->setPosition(T_POS_DEFAULT);
  _queue = new Queue;
  createBalls();
  _font = new sf::Font;
  _font->loadFromFile(F_PATH);
  _text = new sf::Text;
  _text->setFont(*_font);
  _text->setCharacterSize(T_CSIZE);
  _text->setColor(T_COLOR);
}

Game::~Game()
{
  delete _window;
  delete _event;
  delete _tableTexture;
  delete _tableSprite;
  for (unsigned int i = 0; i < _yellowBalls.size(); i++)
    delete _redBalls[i];
  for (unsigned int i = 0; i < _redBalls.size(); i++)
    delete _yellowBalls[i];
  delete _blackBall;
  delete _whiteBall;
  delete _font;
  delete _text;
}

bool		Game::loop(bool play)
{
  _isPlaying = play;

  while (_isPlaying)
    {
      checkEvent();
      draw();
    }
  _window->close();
  return true;
}

bool		Game::draw(void)
{
  _window->clear(W_CLEAR);
  _window->draw(*_tableSprite);
  for (unsigned int i = 0; i < _redBalls.size(); i++)
    _window->draw(_redBalls[i]->sprite());
  for (unsigned int i = 0; i < _yellowBalls.size(); i++)
    _window->draw(_yellowBalls[i]->sprite());
  _window->draw(_blackBall->sprite());
  _window->draw(_whiteBall->sprite());
  _window->draw(_queue->sprite());
  _text->setString(itostr(fps()));
  //_text->setString(itostr((int)_queue->power()));
  _window->draw(*_text);
  _window->display();
  return true;
}

void		Game::checkEvent(void)
{
  static bool		fireing = false;

  std::cout << fireing << std::endl;
  while (_window->pollEvent(*_event))
    {
      if (_event->type == sf::Event::KeyPressed)
	{
	  if (_event->key.code == sf::Keyboard::Escape)
	    {
	      _isPlaying = false;
	      break ;
	    }
	  else if (_event->key.code == sf::Keyboard::Left)
	    _queue->rotate(LEFT);
	  else if (_event->key.code == sf::Keyboard::Right)
	    _queue->rotate(RIGHT);
	  else if (_event->key.code == sf::Keyboard::Up)
	    _queue->charge(UP);
	  else if (_event->key.code == sf::Keyboard::Down)
	    _queue->charge(DOWN);
	  else if (_event->key.code == sf::Keyboard::Space)
	    fireing = true;
	}
      else if (_event->type == sf::Event::MouseMoved)
	//_queue->rotate(_whiteBall->pos(), _event->mouseMove);
	_queue->setPos(_event->mouseMove);
      /*if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	charging = true;
	else
	charging = false;
	}
	if (charging == true)
	_queue->charge(_event->mouseButton);*/
      _queue->fire(fireing);
    }
}
