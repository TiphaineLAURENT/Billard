//
// ftostr.cpp for ftostr in /home/tiphaine/Billard/src
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Wed Jul 19 13:42:40 2017 Tiphaine
// Last update Wed Jul 19 14:29:01 2017 Tiphaine
//

#include <sstream>
#include <SFML/System.hpp>
#include "utils.hpp"

std::string		itostr(int nb)
{
  std::string		str;
  std::ostringstream	os;

  os << nb;
  str = os.str(); 
  return str;
}

int			fps(void)
{
  static sf::Clock	clock;
  sf::Time		frameTime;
  float			framerate;

  frameTime = clock.restart();
  framerate = 1 / frameTime.asSeconds();
  return (int)framerate;
}
