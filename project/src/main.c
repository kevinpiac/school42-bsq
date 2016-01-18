/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/18 10:42:50 by kpiacent         ###   ########.fr       */
/*   Updated: 2016/01/16 11:06:58 by kpiacent         ###   ########.fr       */
/*   Updated: 2016/01/10 13:56:09 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;
	int			**obstacles;
	int			i;

	i = 0;
	simple_grid = ft_file_to_array(av[1]);
	params = new_params("9.ox");
	grid = new_grid(params, simple_grid);
	grid->print(grid);
	obstacles = ft_to_obstacle_map(grid, simple_grid);
//	ft_putnbr(ft_obstacle_nbr(simple_grid, grid->params.obstacle));
	while (i < ft_obstacle_nbr(simple_grid, grid->params.obstacle))
	{
		ft_putnbr(obstacles[i][0]);
		ft_putchar(',');
		ft_putnbr(obstacles[i][1]);
		ft_putchar(' ');
		i++;
	}
	if (ac)
		return (1);
}
