/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 10:33:29 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/23 12:56:25 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
/*
int		ft_try_square(int begin_x, int begin_y, t_grid *grid)
{
	int		i;

//	if (!ft_is_valid_begin(grid, begin_x, begin_y))
//		return (-1);
	if (!ft_is_empty_box(grid->body[begin_x][begin_y], grid->params.empty))
		return (0);
	i = -1;
	while (i++ < grid->max_square)
	{
		printf("has obstacle x: %d, y: %d -> %d\n", begin_x+i, begin_y, ft_line_has_obstacle(begin_x + i, begin_y, grid));
		if (ft_line_has_obstacle(begin_x + i, begin_y, grid))
		{
			ft_set_next_y(begin_x, grid);
			return (0);
		}
	}
	grid->max_square += 1;
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
	return (1);
}

int		ft_is_empty_box(char box, char param_empty)
{
	if (box == param_empty)
		return (1);
	return (0);
}
/*
int		ft_max_square(int x, int y, t_grid grid)
{
	
}

*/
