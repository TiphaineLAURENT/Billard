//
// Queue.hpp for Queue in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 17:29:58 2017 Tiphaine
// Last update Thu Jul 13 18:18:04 2017 Tiphaine
//

#ifndef QUEUE_HPP_
# define QUEUE_HPP_

# include <SFML/Graphics.hpp>

class			Queue
{
public:
  Queue();
  ~Queue();

public:
  sf::Sprite		&sprite(void) const;
  bool			setPos(const sf::Event::MouseMoveEvent&);
  //bool			fire(void);
  //void			turn(void);

private:

private:
  sf::Texture		*_texture;
  sf::Sprite		*_sprite;
  float			_power;
  float			_angle;
};

#endif /* !QUEUE_HPP_ */
