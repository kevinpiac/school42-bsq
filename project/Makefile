#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/06 21:21:40 by kpiacent          #+#    #+#              #
#    Updated: 2016/01/06 23:56:39 by kpiacent         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = bsq
L_DIR = library
F_DIR = src/
FILES = $(F_DIR)main.c 
TEMP = Makefile~ $(FILES:.c=.c~)

all : $(EXEC)

$(EXEC) :
		CC -o $(EXEC) $(FLAGS) $(FILES) -L $(L_DIR) -lft

clean :
		rm -f $(TEMP)

fclean : clean
		rm -f $(EXEC)

re : fclean all