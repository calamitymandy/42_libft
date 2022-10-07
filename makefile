# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:20:51 by amdemuyn          #+#    #+#              #
#    Updated: 2022/10/07 18:49:44 by amdemuyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	 ft_strlen.c ft_memset.c ft_bzero.c \
	 ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	 ft_toupper.c ft_tolower.c \
	 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	 ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	 ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	 ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	 ft_putendl_fd.c ft_putnbr_fd.c \
	 
SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

.PHONY: $(NAME), all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(OBJ) $(OBJ_B)
	$(CC) $(FLAGS) -c $(SRC_B)
	ar rc $(NAME) $(OBJ_B) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all
