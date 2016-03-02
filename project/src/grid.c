/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 21:51:30 by kpiacent          #+#    #+#             */
/*   Updated: 2016/03/02 09:37:26 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		params_init(t_params *this, char *grid)
{
	this->line_nbr = ft_number_of_line(grid);
	this->empty = ft_char_empty(grid);
	this->obstacle = ft_char_obstacle(grid);
	this->fill = ft_char_to_fill(grid);
}

t_params	*new_params(char *grid)
{
	t_params *this;

	this = malloc(sizeof(t_params));
	if (!this)
		return (NULL);
	params_init(this, grid);
	return (this);
}

void		grid_init(t_grid *this, t_params *params, char *grid)
{
	int y;

	if (!this || !params || !grid)
		y = 0;
	this->params.line_nbr = params->line_nbr;
	this->params.empty = params->empty;
	this->params.obstacle = params->obstacle;
	this->params.fill = params->fill;
	this->line_len = ft_grid_line_length(grid, 2);
	this->max_square = 0;
	this->next_x = 0;
	this->next_y = 0;
	this->body = ft_to_final_grid(grid, this->params.line_nbr);
	this->print = ft_print_grid;
	this->obstacle_nbr_at = ft_obstacle_nbr_col(this);
	this->obstacle_map = ft_to_obstacle_map(this);
}

t_grid		*new_grid(t_params *params, char *grid)
{
	t_grid		*this;

	this = malloc(sizeof(t_grid));
	if (!this)
		return (NULL);
	grid_init(this, params, grid);
	return (this);
}
