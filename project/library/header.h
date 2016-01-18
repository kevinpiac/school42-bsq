/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 13:00:49 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/17 18:47:38 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "grid.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_putnbr(int i);
int		ft_atoi(char *str);

void	ft_print_grid(t_grid *this);
int		ft_file_length(char *file);
int		ft_grid_line_length(char *grid, int line);
int		ft_grid_contains_wrong_char(char *grid, char *allowed_chars);
int		ft_try_square(int begin_x, int begin_y, t_grid *grid);
int		ft_is_empty_box(char box, char param_empty);
int		ft_is_valid_begin(t_grid *grid, int x, int y);
int		ft_is_empty_col(int x, int y, t_grid *grid, int size);
int		ft_is_empty_line(int x, int y, t_grid *grid, int size);
int		**ft_to_obstacle_map(t_grid *grid, char *simple_grid);
int		ft_obstacle_nbr(char *grid, char obstacle);
char	*ft_file_to_array(char *file);
char	*ft_grid_get_params(char *grid);
char	*ft_grid_get_line(char *grid, int line_index);
char	*ft_grid_find_line(char *grid, int searched_line);
char	**ft_to_final_grid(char *grid, int nb_lines);

#endif
