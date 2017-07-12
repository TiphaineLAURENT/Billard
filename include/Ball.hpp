//
// Ball.hpp for Ball in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Wed Jul 12 00:01:33 2017 Tiphaine
// Last update Wed Jul 12 11:07:04 2017 Tiphaine
//

#ifndef BALL_HPP
# define BALL_HPP

typedef enum		e_type
  {
    WHITE,
    BLACK,
    STRIPE,
    FULL
  }			t_type;

class			Ball
{
public:
  Ball();
  ~Ball();

public:

private:

private:
  double		_speed;
  double		_velocity;
  int			_weight;
  sf::Vector2f		pos;
  sf::Sprite		_sprite;
  t_type		_type;
};

#endif /* !BALL_HPP */
