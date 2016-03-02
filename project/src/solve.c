/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 09:48:18 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/02 13:33:04 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_filoutage(char *grid, char **fgrid)
{
	int		i;
	int		j;
	int		k;
	char	**final_grid;

	i = 0;
	j = 0;
	k = 0;
	final_grid = fgrid;
	while (grid[i])
	{
		final_grid[j][k] = grid[i];
		if (grid[i] == '\n')
		{
			final_grid[j][k + 1] = '\0';
			k = -1;
			j++;
		}
		k++;
		i++;
	}
	final_grid[j] = "\0";
	return (final_grid);
}

void	multiple_file(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;
	int			i;

	i = 1;
	while (i < ac)
	{
		simple_grid = ft_file_to_array(av[i]);
		if (!ft_grid_control(simple_grid))
		{
			params = new_params(simple_grid);
			grid = new_grid(params, simple_grid);
			ft_find_max_square(grid);
			grid->print(grid);
		}
		i++;
	}
}
