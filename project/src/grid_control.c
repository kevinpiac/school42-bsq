/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 12:34:53 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/16 12:48:04 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_grid_control(char *grid)
{
	int	(*f[4])(char *);
	int	i;

	i = 0;
	f[0] = &ft_grid_contains_wrong_char;
	f[1] = &ft_is_line_number;
	f[2] = &ft_is_all_line;
	f[3] = &ft_is_print_char;
	while (i < 4)
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
