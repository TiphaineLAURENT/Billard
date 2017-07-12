//
// Ball.hpp for Ball in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Wed Jul 12 00:01:33 2017 Tiphaine
// Last update Wed Jul 12 19:29:36 2017 Tiphaine
//

#ifndef BALL_HPP
# define BALL_HPP

class			Ball
{
public:
  Ball(const char *);
  ~Ball();

public:
  sf::Vector2f		&pos(void) const;
  bool			setPos(const sf::Vector2f&);
  bool			setPos(float, float);
  sf::Vector2<double>	&speed(void) const;
  bool			setSpeed(const sf::Vector2<double>&);
  bool			setSpeed(double, double);
  sf::Sprite		&sprite(void);

private:

private:
  sf::Texture		*_texture;
  sf::Sprite		*_sprite;
  sf::Vector2<double>	*_speed;
  double		_acceleration;
  std::string		_color;
};

#endif /* !BALL_HPP */
