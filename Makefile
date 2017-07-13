##Press Ctrl+H then enter this file name and press enter

XX		=	g++

RM		=	rm -f

CXXFLAGS	=	-W -Wall -Wextra -Werror -Wshadow -Wunreachable-code -Wconversion
CXXFLAGS	+=	-Wswitch-default -Wswitch-enum
CXXFLAGS	+=	-Wuninitialized -Winit-self
CXXFLAGS	+=	-fstack-protector-strong
CXXFLAGS	+=	-pedantic
CXXFLAGS	+=	-march=native ##-std=c++11
CPPFLAGS	=	-I include

LDFLAGS		=	-lm
LDFLAGS		+=	-lGL
LDFLAGS		+=	-lsfml-audio -lsfml-graphics -lsfml-network -lsfml-system -lsfml-window

CLASS_DIR	=	class
CLASS_SRC	=	Game.cpp					\
			Ball.cpp					\
			WhiteBall.cpp					\
			BlackBall.cpp					\
			RedBall.cpp					\
			YellowBall.cpp					\
			Queue.cpp					\

SRC_DIR		=	src
SRC_FILES	=	$(addprefix $(CLASS_DIR)/, $(CLASS_SRC))	\
			main.cpp					\

SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	pool

all:		$(NAME)

$(NAME):	$(OBJS)
		$(XX) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
