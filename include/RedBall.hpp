//
// RedBall.hpp for Red in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 14:14:22 2017 Tiphaine
// Last update Thu Jul 13 14:27:58 2017 Tiphaine
//

#ifndef REDBALL_HPP_
# define REDBALL_HPP_

# include "Ball.hpp"

class				RedBall : public Ball
{
public:
  RedBall();
  virtual ~RedBall();

public:
  virtual bool			reset(void);

private:

private:
  static const std::string	_color;
  static int			_totalBall;
  int				_id;
};

#endif /* !REDBALL_HPP_ */
