/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 21:53:19 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/16 11:07:33 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

typedef struct		s_params
{
	int		line_nbr;
	char	empty;
	char	obstacle;
	char	fill;
}					t_params;

typedef struct		s_grid
{
	void		(*print)(struct s_grid *this);

	t_params	params;
	char		**body;
	int			line_len;
	int			max_square;
}					t_grid;

void	params_init(t_params *this, char *params);
t_params *new_params(char *params);

void	grid_init(t_grid *this, t_params *params, char *grid);
t_grid	*new_grid(t_params *params, char *grid);

#endif 
