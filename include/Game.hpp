//
// Game.hpp for Game in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 17:45:07 2017 Tiphaine
// Last update Wed Jul 12 19:26:49 2017 Tiphaine
//

#ifndef GAME_HPP
# define GAME_HPP

# include <iostream>

# include <SFML/Audio.hpp>
# include <SFML/Graphics.hpp>
# include <vector>

# include "Ball.hpp"

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
  Ball			*_white;
  Ball			*_black;
  bool			_isPlaying;
};

#endif /* !GAME_HPP */
