/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 21:53:19 by kpiacent          #+#    #+#             */
/*   Updated: 2016/03/02 11:38:06 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

typedef struct		s_params
{
	int				line_nbr;
	char			empty;
	char			obstacle;
	char			fill;
}					t_params;

typedef struct		s_grid
{
	void			(*print)(struct s_grid *this);

	t_params		params;
	char			**body;
	int				**obstacle_map;
	int				*obstacle_nbr_at;
	int				obstacle_nbr;
	int				current_obstacle_col;
	int				line_len;
	int				max_square;
	int				max_square_x;
	int				max_square_y;
	int				next_x;
	int				next_y;
}					t_grid;

void				params_init(t_params *this, char *grid);
t_params			*new_params(char *grid);

void				grid_init(t_grid *this, t_params *params, char *grid);
t_grid				*new_grid(t_params *params, char *grid);

#endif
