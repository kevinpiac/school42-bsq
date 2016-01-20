/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_obstacles.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 17:55:50 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/20 19:50:44 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_obstacle_nbr(char *grid, char obstacle)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (grid[i])
	{
		if (grid[i] == obstacle)
			count++;
		i++;
	}
	return (count);
}

int		*ft_obstacle_nbr_line(t_grid *grid)
{
	int		x;
	int		y;
	int		count;
	int		*array;

	array = malloc(sizeof(int) * grid->params.line_nbr);
	x = -1;
	while (x++ < grid->params.line_nbr)
	{
		count = 0;
		y = -1;
		while (y++ < grid->line_len)
		{
			if (grid->body[x][y] == grid->params.obstacle)
				count++;
		}
		array[x] = count;
	}
	return (array);
}

int		**ft_to_obstacle_map(t_grid *grid)
{
	int		y;
	int		i;
	int		j;
	int		**array;

	i = -1;
	array = malloc(sizeof(int *) * grid->params.line_nbr);
	while (i++ < grid->params.line_nbr)
		array[i] = malloc(sizeof(int) * grid->obstacle_nbr_at[i]);
	i = -1;
	while (i++ < grid->params.line_nbr)
	{
		j = 0;
		y = 0;
		while (y < grid->obstacle_nbr_at[i])
		{
			if (grid->body[i][j] == grid->params.obstacle)
			{
				array[i][y] = j;
				y++;
			}
			j++;
		}			
	}
	return (array);
}

int		ft_line_has_obstacle(int x, int y, t_grid *grid)
{
	int		i;
	int		first;
	int		middle;
	int		last;

	i = -1;
	first = 0;
	last = grid->obstacle_nbr_at[x] - 1;
	while (first <= last)
	{
		middle = (first + last) / 2;
		if (grid->obstacle_map[x][middle] >= y &&
			grid->obstacle_map[x][middle] <= y + grid->max_square - 1)
			return (1);
		if (grid->obstacle_map[x][middle] > y + grid->max_square - 1)
			last = middle - 1;
		if (grid->obstacle_map[x][middle] < y)
			first = middle + 1;
	}
	return (0);
}
