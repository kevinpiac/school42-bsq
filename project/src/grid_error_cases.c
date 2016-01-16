/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_error_cases.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 12:00:58 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/16 12:30:37 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_grid_contains_wrong_char(char *grid)
{
	int	i;
	char	obstacle;
	char	to_fill;
	char	empty;

	empty = ft_char_empty(grid);
	to_fill = ft_char_to_fill(grid);
	obstacle = ft_char_obstacle(grid);
	i = 0;
	while (grid[i])
	{
		if (grid[i] == obstacle ||
			grid[i] == to_fill ||
			grid[i] == empty)
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_is_line_number(char *grid)
{
	char	*params; 
	int	nbr_line;
	int	i;
	int	count;

	params = ft_grid_get_line(grid, 1);
	nbr_line = ft_number_of_line(params);
	count = 0;
	i = ft_strlen(params);
	while (grid[i])
	{
		if (grid[i] == '\n')
		count++;
		i++;
	}
	if (nbr_line == count)
		return (0);
	return (1);
}

int	ft_is_all_line(char *grid)
{
	int	i;
	int	y;
	int	nbr_char;

	i = 0;
	y = 0;
	nbr_char = 0;
	while (grid[i] != '\n')
		i++;
	i++;
	while (grid[i] != '\n')
	{
		nbr_char++;
		i++;
	}
	i++;
	while (grid[i])
	{
		if (grid[i] == '\n' && y % nbr_char != 0)
			return (1);
		y++;
		i++;
	}
	return (0);
}

int	ft_is_print_char(char *grid)
{
	char	empty;
	char	to_fill;
	char	obstacle;

	grid = ft_grid_get_line(grid, 1);
	empty = ft_char_empty(grid);
	to_fill = ft_char_to_fill(grid);
	obstacle = ft_char_obstacle(grid);
	if ((empty < 32 || empty > 126) ||
		(to_fill < 32 || to_fill > 126) ||
		(obstacle < 32 || obstacle > 126))
		return (1);
	return (0);
}
