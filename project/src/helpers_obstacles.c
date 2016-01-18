/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_obstacles.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 17:55:50 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/18 10:49:07 by kpiacent         ###   ########.fr       */
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

int		**ft_to_obstacle_map(t_grid *grid, char *simple_grid)
{
	int		x;
	int		y;
	int		i;
	int		obstacle_nbr;
	int		**array;
	
	x = 0;
	y = 0;
	i = -1;
	obstacle_nbr = ft_obstacle_nbr(simple_grid, grid->params.obstacle);
	array = malloc(sizeof(int*) * obstacle_nbr);
	while (i++ < obstacle_nbr)
		array[i] = malloc(sizeof(int) * 2);

	i = 0;
	while (grid->body[x][y])
	{
		y = 0;
		while (grid->body[x][y] != '\n')
		{
			if (grid->body[x][y] == grid->params.obstacle)
			{
				array[i][0] = x;
				array[i][1] = y;
				i++;
			}
			y++;
		}
		x++;
	}
	return (array);
}
