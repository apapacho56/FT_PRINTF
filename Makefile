# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 14:55:33 by aparedes          #+#    #+#              #
#    Updated: 2022/04/22 12:43:03 by aparedes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -I.
OBJDIR		= obj
SRCDIR		= src
CONVDIR		= conversions
FLAGDIR		= flags
LIBFTDIR	= libft
INCDIR		= $(LIBFTDIR)
HEAD		= $(SRCDIR)/ft_printf.h

SRCS		= srcs/ft_printf.c 		\
				srcs/ft_check.c 	\
				srcs/ft_chr.c 		\
				srcs/ft_num.c 		\
				srcs/ft_extra.c 	\
EXTRA		=	libft/ft_putchar.c 		\
				libft/ft_putstrf.c 		\
				libft/ft_putnbrf.c 		\
				libft/ft_putunsignf.c 	\
				libft/ft_putoctal.c 	\
				libft/ft_puthexa.c 		\
				libft/ft_puthexam.c 	\
				libft/ft_putaddr.c 		\

OBJ	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	make -C ./libft/
	@ar -rcs $(NAME) $(OBJ) ./libft/*.o

clean:
	make clean -C ./libft/
	@rm -f $(OBJ) 

fclean:	clean
	make fclean -C ./libft/
	@rm -f $(NAME)

re: fclean all

all: $(NAME) bonus

.PHONY: bonus clean fclean re all