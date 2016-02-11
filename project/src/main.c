/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/02/11 17:05:04 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;
	int			i;

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
	{
		i = 0;
		while (i++ < ac - 1)
		{
			simple_grid = ft_file_to_array(av[i]);
			if (!ft_grid_control(simple_grid))
			{
				params = new_params(simple_grid);
				grid = new_grid(params, simple_grid);
				ft_find_max_square(grid);
				grid->print(grid);
			}
		}
	}
	return (0);
}
