//
// YellowBall.hpp for YellowBall in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 14:13:05 2017 Tiphaine
// Last update Thu Jul 13 17:22:30 2017 Tiphaine
//

#ifndef YELLOWBALL_HPP_
# define YELLOWBALL_HPP_

# include "Ball.hpp"

class				YellowBall : public Ball
{
public:
  YellowBall();
  virtual ~YellowBall();

public:
  virtual bool			reset(void);

private:

private:
  static const std::string	_color;
  static int			_totalBall;
  int				_id;
};

#endif /* !YELLOWBALL_HPP_ */
