# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 10:27:54 by bcaguana          #+#    #+#              #
#    Updated: 2022/12/21 18:41:26 by bcaguana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
				ft_writeparams.c\

OBJS = $(SRC:.c=.o)

LIBFT = libft/libft.a

all: $(NAME)

$(NAME) : $(OBJS)
		@cd libft ; make
		@cp ${LIBFT} ${NAME}
		@ar rsc $(NAME) $(OBJS) ${LIBFT}

clean:
		@cd libft ; make clean
		@rm -f $(OBJS)
	
fclean: clean
		@cd libft ; make fclean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re