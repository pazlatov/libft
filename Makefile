# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pzlatov <pzlatov@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2024/10/07 18:17:07 by pzlatov       #+#    #+#                  #
#    Updated: 2024/10/24 14:14:09 by pzlatov       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
    ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
    ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_bzero.c\
    ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
    ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_putnbr_fd.c ft_strjoin.c ft_strmapi.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_substr.c ft_strtrim.c\
	ft_itoa.c ft_split.c\

OBJECTS = $(SOURCES:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?



%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all