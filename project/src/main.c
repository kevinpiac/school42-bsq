/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/16 11:06:58 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;

	simple_grid = ft_file_to_array(av[1]);
	params = new_params("9.ox");
	grid = new_grid(params, simple_grid);
	grid->print(grid);
	
	if (ac)
		return (1);
}

/*
int	main(int ac, char **av)
{
	char *grid;
	char **final_grid;

	if (ac)
	{
		grid = ft_file_to_array(av[1]);
		ft_putstr("*********************\n");
		ft_putstr("**GRID IN SIMPE ARRAY\n");
		ft_putstr("*********************\n");
		ft_putstr(grid);
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putstr("*********************\n");
		ft_putstr("***********GRID[x][y]\n");
		ft_putstr("*********************\n");
		ft_putchar('\n');
		final_grid = ft_to_final_grid(grid, 9);
		ft_print_grid(final_grid);

	}
}
*/
