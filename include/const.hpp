//
// const.hpp for const in /home/tiphaine/Billard/include
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 18:00:11 2017 Tiphaine
// Last update Wed Jul 19 14:31:00 2017 Tiphaine
//

#ifndef CONST_HPP
# define CONST_HPP

/* RESOLUTIONS */
# define getK4(pos)		(pos == 'x' ? 4096 : 2160)
# define K4			4096, 2160
# define getFULL_HD(pos)	(pos == 'x' ? 1920 : 1080)
# define FULL_HD		1920, 1080
# define HD			1280, 720
# define SD			800, 480

/* WINDOW */
# define W_NAME			"Billard"
# define W_STYLE		sf::Style::Fullscreen
# define W_RESOLUTION		FULL_HD
# define W_BPP			32
# define W_CLEAR		sf::Color(42, 142, 42, 100)//sf::Color::Green
# define W_FPS_MAX		62

/* OBJETS */
# define RESSOURCE		"ressource/"
# define IMAGE			RESSOURCE"image/"
# define MUSIC			RESSOURCE"music/"
# define FONT			RESSOURCE"font/"

/* TABLE */
# define T_PATH			IMAGE"table.png"
# define T_HEIGHT		674
# define T_WIDTH		1280
# define T_ORIGIN_X		T_WIDTH / 2
# define T_ORIGIN_Y		T_HEIGHT / 2
# define T_ORIGIN		T_ORIGIN_X, T_ORIGIN_Y
# define T_POS_DEFAULT		getFULL_HD('x') / 2, getFULL_HD('y') / 2
# define T_SPEED_X		1
# define T_SPEED_Y		10
# define T_OFFSET_X(x)		(float)(x + 320)
# define T_OFFSET_Y(y)		(float)(y + 200)

/* BALL */
# define B_PATH(color)		(IMAGE + color + ".png")
# define B_HEIGHT		17
# define B_WIDTH		17
# define B_ORIGIN_X		9
# define B_ORIGIN_Y		9
# define B_ORIGIN		B_ORIGIN_X, B_ORIGIN_Y
# define B_SCALE		1.2f, 1.2f

# define SPEED_MIN		0
# define SPEED_MAX		100
//# define SPEED_X		_speed * sin(angle)
//# define SPEED_Y		_speed * cos(angle)
# define ACCELERATION		0.98

/* WHITE */
# define WHITE			"white"
# define BW_DEFAULT_POS_X	T_OFFSET_X(994)
# define BW_DEFAULT_POS_Y	T_OFFSET_Y(337)
# define BW_DEFAULT_POS		BW_DEFAULT_POS_X, BW_DEFAULT_POS_Y

/* BLACK */
# define BLACK			"black"
# define BB_DEFAULT_POS_X	T_OFFSET_X(279)
# define BB_DEFAULT_POS_Y	T_OFFSET_Y(337)
# define BB_DEFAULT_POS		BB_DEFAULT_POS_X, BB_DEFAULT_POS_Y

/* RED */
# define RED			"red"
# define NB_RED			7
# define REDPOS_1		T_OFFSET_X(241), T_OFFSET_Y(316)
# define REDPOS_2		T_OFFSET_X(241), T_OFFSET_Y(337)
# define REDPOS_3		T_OFFSET_X(241), T_OFFSET_Y(376)
# define REDPOS_4		T_OFFSET_X(260), T_OFFSET_Y(308)
# define REDPOS_5		T_OFFSET_X(260), T_OFFSET_Y(346)
# define REDPOS_6		T_OFFSET_X(279), T_OFFSET_Y(357)
# define REDPOS_7		T_OFFSET_X(298), T_OFFSET_Y(326)

# define BOT_MID		247, 338

/* YELLOW */
# define YELLOW			"yellow"
# define NB_YELLOW		7
# define YELLOWPOS_1		T_OFFSET_X(241), T_OFFSET_Y(297)
# define YELLOWPOS_2		T_OFFSET_X(241), T_OFFSET_Y(357)
# define YELLOWPOS_3		T_OFFSET_X(260), T_OFFSET_Y(328)
# define YELLOWPOS_4		T_OFFSET_X(260), T_OFFSET_Y(366)
# define YELLOWPOS_5		T_OFFSET_X(279), T_OFFSET_Y(317)
# define YELLOWPOS_6		T_OFFSET_X(298), T_OFFSET_Y(347)
# define YELLOWPOS_7		T_OFFSET_X(316), T_OFFSET_Y(337)

/* QUEUE */
# define Q_PATH			IMAGE"queue.png"
# define Q_HEIGHT		24
# define Q_WIDTH		536
# define Q_ORIGIN_X		0//Q_WIDTH / 2
# define Q_ORIGIN_Y		Q_HEIGHT / 2
# define Q_ORIGIN		Q_ORIGIN_X, Q_ORIGIN_Y
# define Q_BACK_ORIGIN		Q_WIDTH, Q_HEIGHT / 2
# define Q_DEFAULT_ANGLE	0//180
# define Q_DEFAULT_POS_X	BW_DEFAULT_POS_X
# define Q_DEFAULT_POS_Y	BW_DEFAULT_POS_Y
# define Q_DEFAULT_POS		Q_DEFAULT_POS_X, Q_DEFAULT_POS_Y
# define ANGLE_DELTA		1
# define POWER_DELTA		1

typedef enum			e_key
  {
    LEFT,
    RIGHT,
    UP,
    DOWN
  }				t_key;

/* FONT */
# define F_PATH			FONT"BebasNeue.otf"

/* TEXT */
# define T_CSIZE		15
# define T_COLOR		sf::Color::Black

#endif /* !CONST_HPP */
