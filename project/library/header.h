/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 13:00:49 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/25 13:20:41 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "grid.h"

/*
** START LIBFT FUNCTIONS
*/
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_putnbr(int i);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
char	*ft_strncpy(char *dst, char *src, int n);
/*
** END LIBFT FUNCTIONS
*/

/*
** START KPIACENT'S FUNCTIONS
*/
void	ft_print_grid(t_grid *this);
void	ft_set_next_y(int x, t_grid *grid);
void	ft_find_max_square(t_grid *grid);
int		ft_file_length(char *file);
int		ft_grid_line_length(char *grid, int line);
int		ft_try_square(int begin_x, int begin_y, t_grid *grid);
int		ft_is_empty_box(char box, char param_empty);
int		ft_is_valid_begin(t_grid *grid, int x, int y);
int		ft_obstacle_nbr(char *grid, char obstacle);
int		ft_file_length(char *file);
int		ft_grid_line_length(char *grid, int line);
int		ft_col_has_obstacle(int x, int y, t_grid *grid);
int		*ft_obstacle_nbr_col(t_grid *grid);
int		**ft_to_obstacle_map(t_grid *grid);
char	*ft_file_to_array(char *file);
char	*ft_grid_get_params(char *grid);
char	*ft_grid_get_line(char *grid, int line_index);
char	*ft_grid_find_line(char *grid, int searched_line);
char	**ft_to_final_grid(char *grid, int nb_lines);
/*
** END KPIACENT'S FUNCTIONS
*/

/*
** START NHUBER'S FUNCTIONS
*/
char	ft_char_obstacle(char *grid);
char	ft_char_empty(char *grid);
char	ft_char_to_fill(char *grid);
int		ft_number_of_line(char *grid);
int		ft_is_wrong_char(char *grid);
int		ft_is_line_number(char *grid);
int		ft_is_print_char(char *grid);
int		ft_is_all_line(char *grid);
int		ft_is_minimal_grid(char *grid);
int		ft_grid_control(char *grid);
/*
** START NHUBER'S FUNCTIONS
*/

#endif
