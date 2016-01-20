/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 10:33:29 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/19 10:16:09 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
int		ft_try_square(int begin_x, int begin_y, t_grid *grid)
{
	int		size;

	size = 0;
	if (!ft_is_valid_begin(grid, begin_x, begin_y))
		return (0);
	else if (ft_find_obstacle(begin_x, begin_y, grid))
		return (0);
	else
	{
		grid->max_square++;
		while (ft_find_obstacle(begin_x, begin_y, grid))	
			grid->max_square++;
	}
	return (grid->max_square);
}
*/
int		ft_is_valid_begin(t_grid *grid, int x, int y)
{
	if (x >= (grid->params.line_nbr - grid->max_square) ||
		y >= (grid->line_len - grid->max_square))
		{
			grid->next_x = x + 1;
			grid->next_y = 0;
			return (0);
		}
	if (!ft_is_empty_box(grid->body[x][y], grid->params.empty))
		return (0);
	return (1);
}

int		ft_is_empty_box(char box, char param_empty)
{
	if (box == param_empty)
		return (1);
	return (0);
}
