#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 09:51:09 by tczapnic          #+#    #+#              #
#    Updated: 2024/05/02 10:46:19 by tczapnic         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS	=	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthex.c ft_hexptr.c

OBJS	=	$(SRCS:.c=.o)

CC	= gcc
RM	= rm -f
CFLAGS = -Wall -Wextra -Werror -I.
LIBFTDIR  =	libft

NAME	=	libftprintf.a
LIBFTNAME	=	libft.a

all:	$(NAME)

$(NAME):	  $(OBJS)
				@make -C $(LIBFTDIR)
				@cp libft/libft.a .
				@mv $(LIBFTNAME) $(NAME)
				ar rcs $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
				cd $(LIBFTDIR) && make clean

fclean:		clean
				$(RM) $(NAME) libft/libft.a

re:	fclean	all

.PHONY:	all	clean fclean re