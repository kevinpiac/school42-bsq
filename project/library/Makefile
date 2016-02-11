#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/06 23:15:02 by kpiacent          #+#    #+#              #
#*   Updated: 2016/02/11 16:57:09 by nhuber           ###   ########.fr       *#
#                                                                              #
#******************************************************************************#

CC = gcc -c
AR = ar rc
FILES = ft_putchar.c ft_putstr.c ft_puterror.c ft_putnbr.c ft_atoi.c ft_strrev.c ft_strlen.c ft_strncpy.c ft_strcpy.c ft_strconcat.c ft_strcreatecpy.c
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
