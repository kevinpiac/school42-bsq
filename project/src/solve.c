/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 09:48:18 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/02 10:07:24 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	multiple_file(int ac, char **av)
{
	char		*simple_grid;
	t_params	*params;
	t_grid		*grid;
	int		i;

	i = 1;
	while (i < ac)
	{
		simple_grid = ft_file_to_array(av[i]);
		params = new_params(simple_grid);
		grid = new_grid(params, simple_grid);
		ft_find_max_square(grid);
		grid->print(grid);
		i++;
	}
}
