#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/06 21:21:40 by kpiacent          #+#    #+#              #
#    Updated: 2016/01/18 14:26:31 by kpiacent         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = bsq
L_DIR = library
F_DIR = src
H_DIR = library
FILES = $(F_DIR)/main.c\ 
		$(F_DIR)/helpers_read.c\
		$(F_DIR)/grid_error_cases.c\
		$(F_DIR)/helpers_grid.c\
		$(F_DIR)/grid.c\
		$(F_DIR)/helpers_solve.c\
		$(F_DIR)/helpers_obstacles.c\
		$(F_DIR)/grid_params.c\
		$(F_DIR)/grid_control.c

TEMP = Makefile~ $(FILES:.c=.c~)

all : $(EXEC)

$(EXEC) :
		CC -o $(EXEC) $(FLAGS) $(FILES) -I $(H_DIR) -L $(L_DIR) -lft

clean :
		rm -f $(TEMP)

fclean : clean
		rm -f $(EXEC)

re : fclean all
