#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/06 23:15:02 by kpiacent          #+#    #+#              #
#    Updated: 2016/01/07 12:30:17 by kpiacent         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc -c
AR = ar rc
FILES = ft_putchar.c ft_putstr.c ft_puterror.c ft_putnbr.c
LIB = libft.a
OBJ = $(FILES:.c=.o)
TEMP = Makefile~ header.h~ $(FILES:.c=.c~)

all : $(LIB)

$(LIB) :
		$(CC) $(FILES) && ar rc $(LIB) $(OBJ)

clean :
		rm -f $(TEMP) $(OBJ)

fclean : clean
		rm -f $(LIB)

re : all clean