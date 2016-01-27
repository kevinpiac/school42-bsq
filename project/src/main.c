/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/27 18:29:35 by kpiacent         ###   ########.fr       */
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
	
	params = new_params(simple_grid);
	
	grid = new_grid(params, simple_grid);
	grid->print(grid);
	y = -1;
	ft_find_max_square(grid);
	if (!ac)
		return (0);
}
