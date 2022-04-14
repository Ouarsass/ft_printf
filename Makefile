# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouarsas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 18:52:27 by mouarsas          #+#    #+#              #
#    Updated: 2022/01/11 18:52:36 by mouarsas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RM = rm -rf

SRCS =  ft_printf.c \
		ft_printf_utils.c \
		ft_printf_utils1.c \

OBJS = $(SRCS:.c=.o)

%.o: %.c %.h
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
