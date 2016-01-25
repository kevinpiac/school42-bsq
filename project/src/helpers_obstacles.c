/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_obstacles.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 17:55:50 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/24 22:35:23 by kpiacent         ###   ########.fr       */
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

int		*ft_obstacle_nbr_col(t_grid *grid)
{
	int		x;
	int		y;
	int		count;
	int		*array;

	array = malloc(sizeof(int) * grid->line_len);
	y = -1;
	while (y++ < grid->line_len)
	{
		count = 0;
		x = -1;
		while (x++ < grid->params.line_nbr)
		{
			if (grid->body[x][y] == grid->params.obstacle)
				count++;
		}
		array[y] = count;
	}
	return (array);
}

int		**ft_to_obstacle_map(t_grid *grid)
{
	int		i;
	int		x;
	int		y;
	int		**array;

	y = -1;
	array = malloc(sizeof(int *) * grid->line_len);
	while (y++ < grid->line_len)
		array[y] = malloc(sizeof(int) * grid->obstacle_nbr_at[y]);
	y = -1;
	while (y++ < grid->line_len)
	{
		x = 0;
		i = 0;
		while (i < grid->obstacle_nbr_at[y])
		{
			if (grid->body[x][y] == grid->params.obstacle)
			{
				array[y][i] = x;
				i++;
			}
			x++;
		}
	}
	return (array);
}


int		ft_col_has_obstacle(int x, int y, t_grid *grid)
{
	int		i;
	int		first;
	int		middle;
	int		last;

	i = -1;
	first = 0;
	last = grid->obstacle_nbr_at[y] - 1;
	while (first <= last)
	{
		middle = (first + last) / 2;
		if (grid->obstacle_map[y][middle] >= x &&
			grid->obstacle_map[y][middle] <= x + grid->max_square)
			return (1);
		if (grid->obstacle_map[y][middle] > x + grid->max_square)
			last = middle - 1;
		if (grid->obstacle_map[y][middle] < x)
			first = middle + 1;
	}
	return (0);
}
