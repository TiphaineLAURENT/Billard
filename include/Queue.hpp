//
// Queue.hpp for Queue in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 17:29:58 2017 Tiphaine
// Last update Thu Jul 20 10:33:25 2017 Tiphaine
//

#ifndef QUEUE_HPP_
# define QUEUE_HPP_

# include <SFML/Graphics.hpp>
# include "const.hpp"

class			Queue
{
public:
  Queue();
  ~Queue();

public:
  sf::Sprite		&sprite(void) const;
  sf::Vector2f		pos(void);
  void			setPos(const sf::Event::MouseMoveEvent&);
  float			&power(void);
  void			charge(t_key);
  void			rotate(t_key);
  void			fire(bool&);
  //void			rotate(const sf::Vector2f &, const sf::Event::MouseMoveEvent &);
  //bool			fire(void);

private:

private:
  sf::Texture		*_texture;
  sf::Sprite		*_sprite;
  float			_power;
  float			_angle;
};

#endif /* !QUEUE_HPP_ */
