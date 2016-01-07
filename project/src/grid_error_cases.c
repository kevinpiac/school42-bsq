/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_error_cases.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 12:00:58 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/07 14:16:24 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_grid_contains_wrong_char(char *grid, char *allowed_chars)
{
	int		i;

	i = 0;
	while (grid[i])
	{
		if (grid[i] == allowed_chars[0] ||
			grid[i] == allowed_chars[1] ||
			grid[i] == allowed_chars[2])
			i++;
		else
			return (1);
	}
	return (0);
}
