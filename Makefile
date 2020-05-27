# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 15:59:18 by kdeirdre          #+#    #+#              #
#    Updated: 2020/05/24 15:59:18 by kdeirdre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

FLAGS = -Wall -Wextra -Werror

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	   ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
	   ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	   ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
	   ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_strjoin.c ft_strtrim.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_split.c \
	   ft_itoa.c ft_strmapi.c \

OBJ = $(SRCS:%.c=%.o)

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			 ft_lstadd_back.c ft_lstiter.c ft_lstlast.c \
			 ft_lstdelone.c ft_lstclear.c ft_lstmap.c \

BONUS_OBJ = $(SRCS_BONUS:%.c=%.o)

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(BONUS_OBJ) $(OBJ)
	@ar rcs $(NAME) $(BONUS_OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ) $(BONUS_OBJ)

fclean:  clean
	@rm -rf $(NAME)

re: fclean all

so: fclean
	 gcc -fPIC -c $(FLAGS) $(SRCS) $(SRCS_BONUS)
	gcc -shared -Wl,-soname,libft.so -o libft.so *.o
.PHONY: all clean fclean re bonus %.o
