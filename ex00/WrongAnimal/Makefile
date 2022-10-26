#Makefile   CPP04   ex00

SRCS		= Wrongmain.cpp WrongAnimal.cpp WrongCat.cpp Dog.cpp Animal.cpp

OBJS		= $(SRCS:.cpp=.o)

NAME		= Wronganimal

CC			= c++-12 #c++-12

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra -std=c++98 -g


all:		${NAME}

%.o: %.cpp
			$(CC) $(CFLAGS) -c $< 

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			

.PHONY:		all clean fclean  re

clean:	
			$(RM) $(OBJS)


fclean:		clean
			$(RM) $(NAME)

re:			fclean all
