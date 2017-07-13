//
// main.cpp for main in /home/tiphaine/Billard
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 17:36:07 2017 Tiphaine
// Last update Thu Jul 13 14:08:04 2017 Tiphaine
//

#include "main.hpp"
#include "Game.hpp"

int		main(void)
{
  Game		*game = new Game;

  game->loop(true);
  delete game;
  return SUCCESS;
}
