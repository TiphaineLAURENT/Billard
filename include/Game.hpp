//
// Game.hpp for Game in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 17:45:07 2017 Tiphaine
// Last update Thu Jul 13 17:57:38 2017 Tiphaine
//

#ifndef GAME_HPP
# define GAME_HPP

# include <iostream>

# include <SFML/Audio.hpp>
# include <SFML/Graphics.hpp>
# include <vector>

# include "Ball.hpp"
# include "WhiteBall.hpp"
# include "BlackBall.hpp"
# include "RedBall.hpp"
# include "YellowBall.hpp"
# include "Queue.hpp"

class			Game
{
public:
  Game();
  ~Game();

public:
  //bool			config();
  bool			loop(bool);

private:
  void			createBalls(void);
  bool			draw(void);
  void			checkEvent(void);

private:
  sf::RenderWindow	*_window;
  sf::Event		*_event;
  sf::Texture		*_tableTexture;
  sf::Sprite		*_tableSprite;
  std::vector<Ball*>	_yellowBalls;
  std::vector<Ball*>	_redBalls;
  WhiteBall		*_whiteBall;
  BlackBall		*_blackBall;
  Queue			*_queue;
  bool			_isPlaying;
};

#endif /* !GAME_HPP */
