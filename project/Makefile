#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/06 21:21:40 by kpiacent          #+#    #+#              #
#    Updated: 2016/01/07 12:23:15 by kpiacent         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = bsq
L_DIR = library
F_DIR = src
H_DIR = library
FILES = $(F_DIR)/main.c $(F_DIR)/helpers_read.c $(F_DIR)/grid_error_cases.c 
TEMP = Makefile~ $(FILES:.c=.c~)

all : $(EXEC)

$(EXEC) :
		CC -o $(EXEC) $(FLAGS) $(FILES) -I $(H_DIR) -L $(L_DIR) -lft

clean :
		rm -f $(TEMP)

fclean : clean
		rm -f $(EXEC)

re : fclean all