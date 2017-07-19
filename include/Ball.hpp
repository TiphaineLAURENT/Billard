//
// Ball.hpp for Ball in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Wed Jul 12 00:01:33 2017 Tiphaine
// Last update Wed Jul 19 11:45:46 2017 Tiphaine
//

#ifndef BALL_HPP_
# define BALL_HPP_

# include <SFML/Graphics.hpp>

class			Ball
{
public:
  Ball();
  virtual ~Ball();

public:
  sf::Vector2f		pos(void) const;
  bool			setPos(const sf::Vector2f&);
  bool			setPos(float, float);
  sf::Vector2<double>	&speed(void) const;
  bool			setSpeed(const sf::Vector2<double>&);
  bool			setSpeed(double, double);
  sf::Sprite		&sprite(void) const;
  virtual bool		reset(void) = 0;

private:

protected:
  sf::Texture		*_texture;
  sf::Sprite		*_sprite;
  sf::Vector2<double>	*_speed;
  double		_acceleration;
};

#endif /* !BALL_HPP_ */
