/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/23 14:28:52 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;
	int			i;
	int			y;

	i = -1;
	y = -1;
	simple_grid = ft_file_to_array(av[1]);
	params = new_params("9.ox");
	grid = new_grid(params, simple_grid);
	grid->print(grid);
	grid->max_square = 3;
	if (ft_col_has_obstacle(1, 0, grid))
		ft_putstr("Un obstacle\n");
	else
		ft_putstr("Pas d'obstacle\n");
	if (!ac)
		return (0);

}
