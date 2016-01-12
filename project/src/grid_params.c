/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 13:11:08 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/12 15:36:02 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	ft_char_to_fill(char *param_line)
{
	char *tab;

	tab = ft_strrev(param_line);
	return (tab[1]);
}

char	ft_char_obstacle(char *param_line)
{
	char *tab;

	tab = ft_strrev(param_line);
	return (tab[2]);
}

char	ft_char_empty(char *param_line)
{
	char	*tab;

	tab = ft_strrev(param_line);
	return (tab[3]);	
}

int	ft_number_of_line(char *param_line)
{
	char	*tab;
	int	len;

	len = ft_strlen(param_line) - 3;
	if (!(tab = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	tab[len] = '\0';
	tab = ft_strncpy(tab, param_line, len);
	len = ft_atoi(tab);
	free(tab);
	return (len);
}

char	*ft_grid_get_params(char *grid)
{
	char	*param_line;
	int	i;

	i = 0;
	while (grid[i] != '\n')
		i++;
	if (!(param_line = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	param_line = ft_strncpy(param_line, grid, i);
	return (param_line);
}
