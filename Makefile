##
## Makefile for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
##
## Made by Marin Alcaraz
## Login   <alcara_m@epitech.net>
##
## Started on  Thu Feb 21 13:16:40 2013 Marin Alcaraz
## Last update Thu Feb 21 20:56:49 2013 Marin Alcaraz
##

NAME	=	abstractvm

SRC	= 	CPU.cpp\
		Data_Manager.cpp\
		Grammar.cpp\
		Instruction.cpp\
		InstructionFactory.cpp\
		InstructionHandler.cpp\
		main.cpp\
		Memory.cpp\
		Operand.cpp\
		OperandFactory.cpp\
		OperandHandler.cpp\
		VMException.cpp\
		AbstractVM.cpp

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	=	-Wall -Wextra -W -g3

CC		=	g++

RM		=	rm -f
ECHO	=	echo -e

%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
	@$(ECHO) '\033[0;33m> Compiled\033[0m'

clean	:
	$(RM) $(OBJ)
	@$(ECHO) '\033[0;33m> Directory cleaned\033[0m'

fclean	: clean
	$(RM) $(NAME)
	@$(ECHO) '\033[0;33m> Remove executable\033[0m'

re	: fclean all
