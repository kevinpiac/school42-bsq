/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/03/02 09:21:51 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;
	int		i;

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
		i = 1;
		while (i < ac)
		{
			simple_grid = ft_file_to_array(av[i]);
			params = new_params(simple_grid);
			grid = new_grid(params, simple_grid);
			ft_find_max_square(grid);
			grid->print(grid);
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
