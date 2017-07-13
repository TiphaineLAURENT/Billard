//
// BlackBall.hpp for BlackBall.hpp in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 13:30:29 2017 Tiphaine
// Last update Thu Jul 13 13:38:01 2017 Tiphaine
//

#ifndef BLACKBALL_HPP_
# define BLACKBALL_HPP_

# include "Ball.hpp"

class				BlackBall : public Ball
{
public:
  BlackBall();
  virtual ~BlackBall();

public:
  virtual bool			reset(void);

private:

private:
  static const std::string	_color;
};

#endif /* !BLACKBALL_HPP_ */
