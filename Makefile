# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 14:39:19 by dzivanov          #+#    #+#              #
#    Updated: 2021/06/30 12:24:12 by dzivanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CFLAGS	= -Wall -Wextra -Werror

HEADER	= libft.h

#SRCS	= ${wildcard *.c}
SRCS	=	ft_itoa.c ft_split.c ft_strtrim.c ft_memccpy.c ft_strdup.c ft_substr.c ft_strchr.c \
			ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
			ft_toupper.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
			ft_memcmp.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_isalpha.c ft_strnstr.c ft_bzero.c ft_atoi.c \
			ft_memcpy.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c

SRCB	=	ft_lstiter.c ft_lstdelone.c ft_lstadd_front.c ft_lstnew.c ft_lstmap.c ft_lstlast.c ft_lstsize.c ft_lstclear.c ft_lstadd_back.c


CC		= gcc

OBJS	= ${SRCS:.c=.o}
OBJB	= ${SRCB:.c=.o}

ifdef WITH_BONUS
OBJ	= ${OBJS} ${OBJB}
else
OBJ	= ${OBJS}
endif

AR		= ar

all: ${NAME}

$(NAME): $(OBJ)
	$(AR) rcs $(NAME) $(OBJ)


add:
	sed -i '19,$$d' libft.h
	awk 'BEGIN{ORS="\n;"} FNR==20{print; nextfile}' ${SRCS} >> libft.h
	sed -i 'H;$${x;s/\n;/;\n/g;p;};d' libft.h
	sed -i '1d' libft.h
	echo '\n #endif' >> libft.h

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

bonus:
	$(MAKE) WITH_BONUS=1 all

so:
	$(CC) -fPIC $(CFLAGS) -c $(SRCS)
	gcc -shared -o libft.so $(OBJ)

.PHONY: all clean re fclean add so bonus
