/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 13:11:08 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/11 17:26:44 by nhuber           ###   ########.fr       */
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
