# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 11:25:29 by hbel-hou          #+#    #+#              #
#    Updated: 2021/11/06 11:25:31 by hbel-hou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = libft.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
		ft_putchar_fd.c ft_strlcat.c ft_atoi.c ft_substr.c ft_itoa.c ft_putendl_fd.c\
		ft_strlcpy.c ft_tolower.c ft_bzero.c  ft_putnbr_fd.c ft_strlen.c\
		ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
		ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
		ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_lstnew.c\
		# ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
		# ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\
		# ft_strndup.c

OBJ = $(SRCS:.c=.o)

INCLUDES = libft.h

all : $(Name)

$(Name): $(OBJ) $(INCLUDES)
	ar rcs $(Name) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)
re : fclean all

rm:
	rm -f *.o