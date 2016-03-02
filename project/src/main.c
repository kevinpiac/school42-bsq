/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/03/02 11:03:54 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;

	if (ac == 1)
	{
		simple_grid = ft_stdin_to_array();
		if (!ft_grid_control(simple_grid))
		{
			params = new_params(simple_grid);
			grid = new_grid(params, simple_grid);
			ft_find_max_square(grid);
			grid->print(grid);
		}
	}
	else
		multiple_file(ac, av);
	return (0);
}
