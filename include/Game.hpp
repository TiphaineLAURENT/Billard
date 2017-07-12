//
// Game.hpp for Game in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 17:45:07 2017 Tiphaine
// Last update Tue Jul 11 23:24:12 2017 Tiphaine
//

#ifndef GAME_HPP
# define GAME_HPP

# include <SFML/Audio.hpp>
# include <SFML/Graphics.hpp>

class			Game
{
public:
  Game();
  ~Game();

public:
  //bool			config();
  bool			loop(bool);

private:
  bool			draw(void);
  void			checkEvent(void);

private:
  sf::RenderWindow	*_window;
  sf::Event		*_event;
  sf::Texture		*_tableTexture;
  sf::Sprite		*_tableSprite;
  bool			_isPlaying;
};

#endif /* !GAME_HPP */
