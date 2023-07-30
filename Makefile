# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 18:05:14 by nuferron          #+#    #+#              #
#    Updated: 2023/03/02 01:52:15 by nuferron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJS = ${SRCS:.c=.o}

HEADER = libft.h
NAME = libft.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
OBJSBONUS = ${SRCSBONUS:.c=.o}

%.o: %.c $(HEADER)
	${CC} ${CFLAGS} -I libft.h -c $< -o ${<:.c=.o}

all: 		${NAME}

${NAME}:	${OBJS} 
		ar rcs ${NAME} ${OBJS}

norm:
	norminette ${SRCS} ${SRCSBONUS}

leaks:
	leaks -atExit -- ./a.out ${ARGS}

bonus:		${OBJS} ${OBJSBONUS} $(HEADER)
			ar rcs ${NAME} ${OBJS} ${OBJSBONUS}
			@touch $@
clean: 		
		${RM} ${OBJS} ${OBJSBONUS} 

fclean: 	clean
		${RM} ${NAME}
		${RM} bonus
		${RM} a.out

re:		fclean all

.PHONY: all clean fclean re norm leaks
