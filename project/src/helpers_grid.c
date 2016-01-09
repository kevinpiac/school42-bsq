/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:48:20 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/09 12:09:50 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_grid_line_length(char *grid, int line)
{
	int		i;
	int		len;
	int		current_line;
	int		start;

	start = 0;
	current_line = 1;
	i = 0;
	len = -1;
	while (grid[i])
	{
		if (grid[i] == '\n')
		{
			current_line++;
			start = 0;
		}
		if (line == current_line)
			start = 1;
		if (start == 1)
			len++;
		i++;
	}
	return (len);
}

char	*ft_grid_find_line(char *grid, int searched_line)
{
	int		i;
	int		current_line;

	i = 0;
	current_line = 1;
	while (current_line < searched_line)
	{
		if (current_line == searched_line)
			return (&grid[i]);
		if (grid[i] == '\n')
			current_line++;
		i++;
	}
	return (&grid[i]);
}

char	*ft_grid_get_line(char *grid, int line_index)
{
	int		i;
	int		j;
	char	*line;
	char	*grid_start;

	i = 0;
	j = 0;
	if ((line = malloc(sizeof(char) * ft_grid_line_length(grid, line_index))))
	{
		grid_start = ft_grid_find_line(grid, line_index);
		while (grid_start[i] != '\0' && grid_start[i] != '\n')
		{
			line[j] = grid_start[i];
			j++;
			i++;
		}
		line[j] = '\n';
		line[j + 1] = '\0';
	}
	return (line);
}

char	**ft_to_final_grid(char *grid, int nb_lines)
{
	char	**final_grid;
	int		i;

	i = 0;
	final_grid = malloc(sizeof(char) * ft_grid_line_length(grid, 1));
	*final_grid = malloc(sizeof(grid) * nb_lines);
	while (i < nb_lines)
	{
		final_grid[i] = ft_grid_get_line(grid, i + 1);
		i++;
	}
	final_grid[i] = "\0";
	return (final_grid);
}

void	ft_print_grid(char **grid)
{
	int		i;

	i = 0;
	while (grid[i])
	{
		ft_putstr(grid[i]);
		i++;
	}
}
