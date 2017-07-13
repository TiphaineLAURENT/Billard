//
// WhiteBall.hpp for WhiteBall in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Thu Jul 13 10:40:41 2017 Tiphaine
// Last update Thu Jul 13 14:11:42 2017 Tiphaine
//

#ifndef WHITEBALL_HPP_
# define WHITEBALL_HPP_

# include "Ball.hpp"

class				WhiteBall : public Ball
{
public:
  WhiteBall();
  virtual ~WhiteBall();

public:
  virtual bool			reset(void);

private:

private:
  static const std::string	_color;
};

#endif /* !WHITE_HPP_ */
