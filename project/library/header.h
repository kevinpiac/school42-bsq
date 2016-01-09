/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 22:55:38 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/08 22:32:29 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_putnbr(int i);
void	ft_print_grid(char **grid);
int		ft_file_length(char *file);
int		ft_grid_line_length(char *grid, int line);
int		ft_grid_contains_wrong_char(char *grid, char *allowed_chars);
char	*ft_file_to_array(char *file);
char	*ft_grid_get_params(char *grid);
char	*ft_grid_get_line(char *grid, int line_index);
char	*ft_grid_find_line(char *grid, int searched_line);
char	**ft_to_final_grid(char *grid, int nb_lines);

#endif
