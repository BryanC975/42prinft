# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 10:51:53 by bcaguana          #+#    #+#              #
#    Updated: 2022/12/21 16:22:54 by bcaguana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_bzero.c ft_strlen.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_toupper.c ft_strchr.c ft_tolower.c ft_atoi.c \
			ft_memchr.c ft_memcpy.c ft_memset.c ft_strlcpy.c ft_memcmp.c ft_strlen.c \
			ft_putchar_fd.c ft_memmove.c  ft_strncmp.c ft_calloc.c ft_strlcat.c\
			ft_strnstr.c ft_strrchr.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			ft_itoa.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_strdup.c ft_split.c\
			ft_striteri.c  ft_strmapi.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsnbr.c\
			ft_puthex.c ft_pointhex.c \
			

OBJS = $(SRC:.c=.o)

SRC_BONUS =	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\




OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		@ar rsc $(NAME) $(OBJS)

bonus: 
		make SRC='$(SRC) $(SRC_BONUS)'

clean:
		@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus
