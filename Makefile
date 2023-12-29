# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alorru <alorru@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 14:22:34 by alorru            #+#    #+#              #
#    Updated: 2023/12/29 14:06:35 by alorru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAG = -Wall -Wextra -Werror
NAME = libft.a 
SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_memset.c ft_strlcat.c ft_strlcpy.c\
		ft_strlen.c ft_memmove.c ft_memcpy.c\
		ft_memcmp.c ft_strnstr.c ft_strrchr.c\
		ft_strchr.c ft_toupper.c ft_tolower.c\
		ft_bzero.c ft_strjoin.c ft_substr.c\
		ft_strdup.c ft_calloc.c
OBJ = $(SRC:.c=.o)
LIB = ar rcs $(NAME)

DEFAULT = \033[0;39m
GREEN = \033[0;92m
RED = \033[0;91m
CIANO = \033[0;96m

all = $(NAME)

$(NAME): $(OBJ)
		@ $(LIB) $(NAME) $(OBJ)
		@ echo "$(GREEN)$(NAME) compilata con successo(DEFAULT)"

clean:
		@ rm -f $(OBJ)
		@ echo "$(CIANO)file oggetto di (NAME) rimossi con successo"
				
fclean: clean
		@ rm -f $(NAME)
		@ echo "$(RED)$(NAME) rimossa con successo"

re: fclean all 

.PHONY: all clean fclean 
