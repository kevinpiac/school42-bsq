/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 12:34:53 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/27 21:58:24 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_grid_control(char *grid)
{
	int		(*f[5])(char *);
	int		i;

	i = 0;
	f[0] = &ft_is_minimal_grid;
	f[1] = &ft_is_wrong_char;
	f[2] = &ft_is_line_number;
	f[3] = &ft_is_all_line;
	f[4] = &ft_is_print_char;
	while (i < 6)
	{
		if (f[i](grid) == 1)
		{
			ft_puterror("map error\n");
			return (1);
		}
		i++;
	}
	return (0);
}
