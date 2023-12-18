# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-m <dgomez-m@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 19:45:52 by dgomez-m          #+#    #+#              #
#    Updated: 2023/12/18 13:27:52 by dgomez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_strings.c ft_print.c ft_numbers.c
OBJS			= $(SRCS:.c=.o)
 
CC				= @cc
RM				= @rm -f
CFLAGS			= -Wall -Wextra -Werror -ggdb -pedantic -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re 