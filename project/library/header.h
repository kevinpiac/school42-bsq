/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 13:00:49 by kpiacent          #+#    #+#             */
/*   Updated: 2016/03/03 15:13:13 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "grid.h"
# define BUFF_SIZE 8192

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_putnbr(int i);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
char	*ft_strcpy(char *str);
char	*ft_strncpy(char *dst, char *src, int n);
char	*ft_strcreatecpy(char *src);
char	*ft_strconcat(char *s1, char *s2);
void	ft_print_grid(t_grid *this);
void	ft_set_next_y(int x, t_grid *grid);
void	ft_find_max_square(t_grid *grid);
void	ft_fill_grid(t_grid *grid);
int		ft_grid_line_length(char *grid, int line);
void	ft_try_square(int begin_x, int begin_y, t_grid *grid);
int		ft_is_empty_box(char box, char param_empty);
int		ft_is_valid_begin(t_grid *grid, int x, int y);
int		ft_obstacle_nbr(char *grid, char obstacle);
int		ft_grid_line_length(char *grid, int line);
int		ft_col_has_obstacle(int x, int y, t_grid *grid);
int		*ft_obstacle_nbr_col(t_grid *grid);
int		**ft_to_obstacle_map(t_grid *grid);
char	*ft_file_to_array(char *file);
char	*ft_grid_get_params(char *grid);
char	*ft_grid_get_line(char *grid, int line_index);
char	*ft_grid_find_line(char *grid, int searched_line);
char	**ft_to_final_grid(char *grid, int nb_lines);
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
char	*ft_stdin_to_array(void);
void	multiple_file(int ac, char **av);
char	**ft_filoutage(char *grid, char **final_grid);
int	ft_filecheck(char *fname);

#endif
