/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 10:33:29 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/17 18:40:30 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
/*
int		ft_try_square(int begin_x, int begin_y, t_grid *grid)
{
	int		x;
	int		y;
	int		size;

	if (!ft_is_valid_begin(grid, begin_x, begin_y))
		return (0);
	else
	{
		size = 2;
		x = begin_x + 1;
		y = begin_y + 1;
		while (
			ft_is_empty_col(x, y, grid, size) &&
			ft_is_empty_line(x, y, grid, size))
		{
			x++;
			y++;
			size++;
		}
		ft_is_empty_col(x, y, grid, size);
//		if(!ft_is_empty_col(x, y, grid, size))
//		   grid->next_y = y + 1;
		if (size - 1 > grid->max_square)
			grid->max_square = size - 1;
	}
	return (size - 1);
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
