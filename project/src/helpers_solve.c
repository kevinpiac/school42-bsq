/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 10:33:29 by kpiacent          #+#    #+#             */
/*   Updated: 2016/03/02 10:24:35 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_try_square(int begin_x, int begin_y, t_grid *grid)
{
	int		i;

	if (!ft_is_empty_box(grid->body[begin_x][begin_y], grid->params.empty))
	{
		grid->next_y++;
		return (0);
	}
	i = 0;
	while (i <= grid->max_square)
	{
		if (ft_col_has_obstacle(begin_x, begin_y + i, grid))
		{
			grid->next_y = begin_y + i + 1;
			return (0);
		}
		i++;
	}
	if (i > grid->max_square)
	{
		grid->max_square = i;
		grid->max_square_x = begin_x;
		grid->max_square_y = begin_y;
	}
	return (grid->max_square);
}

void	ft_find_max_square(t_grid *grid)
{
	int		ret;

	while (grid->next_x <= grid->params.line_nbr)
	{
		ret = ft_is_valid_begin(grid, grid->next_x, grid->next_y);
		if (ret == -1)
		{
			ft_fill_grid(grid);
			return ;
		}
		if (ret == 0)
		{
			grid->next_x++;
			grid->next_y = 0;
		}
		ft_try_square(grid->next_x, grid->next_y, grid);
	}
}

void	ft_fill_grid(t_grid *grid)
{
	int		x;
	int		y;
	int		gx;
	int		gy;

	gx = grid->max_square_x;
	gy = grid->max_square_y;
	x = -1;
	while (x++ < grid->max_square - 1)
	{
		y = -1;
		while (y++ < grid->max_square - 1)
		{
			grid->body[gx + x][gy + y] = grid->params.fill;
		}
	}
}

int		ft_is_valid_begin(t_grid *grid, int x, int y)
{
	if (x >= (grid->params.line_nbr - 1 - grid->max_square))
		return (-1);
	if (y >= (grid->line_len - 1 - grid->max_square))
		return (0);
	return (1);
}

int		ft_is_empty_box(char box, char param_empty)
{
	if (box == param_empty)
		return (1);
	return (0);
}
