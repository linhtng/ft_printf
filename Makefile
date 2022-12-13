# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:30:29 by thuynguy          #+#    #+#              #
#    Updated: 2022/11/22 15:30:31 by thuynguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -I libft

SRC = ft_printf.c ft_printf_utils.c ft_putptr.c ft_putunbr.c ft_puthex.c

OBJS = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rucs $(NAME) $(OBJS)

%.o: %.c
	cc -c $(CFLAGS) $<

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re
