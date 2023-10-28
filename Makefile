# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 18:05:14 by nuferron          #+#    #+#              #
#    Updated: 2023/10/28 21:20:19 by nuferron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
PURPLE = \033[1;35m
CYAN = \033[1;36m
WHITE = \033[1;37m
RESET = \033[0m

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BNS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(addprefix $(OBJDIR),$(SRCS:.c=.o))
OBJS_BNS = $(addprefix $(OBJDIR_BNS),$(SRCS_BNS:.c=.o))

OBJDIR = obj/
OBJDIR_BNS = obj_bonus/
SRCDIR = src/
SRCDIR_BNS = src_bonus/
HEADER = libft.h
NAME = libft.a
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
COLUMNS = $(shell tput cols)

all: 		${NAME}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}
		printf "${WHITE}LIBFT: ${GREEN}Library compiled!\n${RESET}"

bonus:		${OBJS} ${OBJS_BNS}
		ar rcs ${NAME} ${OBJS} ${OBJS_BNS}
		printf "${WHITE}LIBFT: ${GREEN}Bonus compiled!\n${RESET}"

$(OBJDIR)%.o:	${SRCDIR}%.c $(HEADER) | ${OBJDIR}
		@printf "${WHITE}LIBFT:${CYAN}Compiling files: ${WHITE}$(notdir $<)...${RESET}\r"
		@cc $(CFLAGS) -I $(HEADER) -c $< -o $@
		@printf "\r%-${COLUMNS}s\r"

$(OBJDIR_BNS)%.o:	${SRCDIR_BNS}%.c $(HEADER) | ${OBJDIR_BNS}
		@printf "${WHITE}LIBFT:${CYAN}Compiling files: ${WHITE}$(notdir $<)...${RESET}\r"
		@cc $(CFLAGS) -I $(HEADER) -c $< -o $@
		@printf "\r%-${COLUMNS}s\r"

${OBJDIR}:
		mkdir -p $(dir $@)

${OBJDIR_BNS}:
		mkdir -p $(dir $@)

clean: 		
	if [ -d ${OBJDIR} ] ; then \
		rm -rf ${OBJDIR} ; \
		printf "${WHITE}LIBFT: ${RED}Objects have been deleted${RESET}\n"; \
	fi

fclean: 	clean
	if [ -e ${NAME} ] ; then \
		rm -f ${NAME} ; \
		printf "${WHITE}LIBFT: ${RED}All existing binaries have been deleted${RESET}\n" ; \
	else printf "${WHITE}LIBFT: ${PURPLE}Already cleaned${RESET}\n" ; \
	fi

re:		fclean all

.SILENT: fclean clean ${NAME} bonus ${OBJDIR} ${OBJDIR_BNS}
.PHONY: all clean fclean re bonus
