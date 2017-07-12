//
// const.hpp for const in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 18:00:11 2017 Tiphaine
// Last update Wed Jul 12 14:04:17 2017 Tiphaine
//

#ifndef CONST_HPP
# define CONST_HPP

/* RESOLUTIONS */
# define getK4(pos)		(pos == 'x' ? 4096 : 2160)
# define K4			4096, 2160
# define getFULL_HD(pos)	(pos == 'x' ? 1900 : 1050)
# define FULL_HD		1920, 1080
# define HD			1280, 720
# define SD			800, 480

/* WINDOW */
# define W_NAME			"Billard"
# define W_STYLE		sf::Style::Fullscreen
# define W_RESOLUTION		FULL_HD
# define W_BPP			32
# define W_CLEAR		sf::Color(42, 142, 42, 100)//sf::Color::Green

/* OBJETS */
# define RESSOURCE		"ressource/"
# define IMAGE			RESSOURCE"image/"
# define MUSIC			RESSOURCE"music/"
# define FONT			RESSOURCE"font/"

/* TABLE */
# define T_PATH			IMAGE"white.png"
# define T_HEIGHT		24//674
# define T_WIDTH		24//1280
# define T_ORIGIN_X		T_WIDTH / 2
# define T_ORIGIN_Y		T_HEIGHT / 2
# define T_ORIGIN		T_ORIGIN_X, T_ORIGIN_Y
# define T_POS_DEFAULT		getFULL_HD('x') / 2, getFULL_HD('y') / 2
# define T_SPEED_X		1
# define T_SPEED_Y		10

# define ACCELERATION		(float)0.98

#endif /* !CONST_HPP */
