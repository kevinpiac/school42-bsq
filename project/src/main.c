/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/25 16:59:16 by kpiacent         ###   ########.fr       */
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
	y = 0;
//	grid->max_square = 5;
//	printf("result :%d\n", ft_col_has_obstacle(1, 6, grid));
	ft_find_max_square(grid);
	if (!ac)
		return (0);
}
