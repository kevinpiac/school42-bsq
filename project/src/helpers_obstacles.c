/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_obstacles.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 17:55:50 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/18 23:58:20 by kpiacent         ###   ########.fr       */
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

int		**ft_to_obstacle_map(t_grid *grid)
{
	int		x;
	int		y;
	int		i;
	int		**array;

	x = -1;
	i = -1;
	array = malloc(sizeof(int*) * grid->obstacle_nbr);
	while (i++ < grid->obstacle_nbr)
		array[i] = malloc(sizeof(int) * 2);
	i = 0;
	while (x++ < grid->params.line_nbr)
	{
		y = -1;
		while (y++ < grid->line_len - 1)
		{
			if (grid->body[x][y] == grid->params.obstacle)
			{
				array[i][0] = x;
				array[i][1] = y;
				i++;
			}
		}
	}
	return (array);
}
/*
int		ft_find_obstacle(int begin_x, int begin_y, t_grid *grid)
{
	return (1);
}
*/
