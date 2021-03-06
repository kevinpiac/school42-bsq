/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 11:11:18 by kpiacent          #+#    #+#             */
/*   Updated: 2016/02/08 17:40:24 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		lenght;
	char	tmp;

	i = 0;
	lenght = ft_strlen(str);
	while (i < lenght / 2)
	{
		tmp = str[i];
		str[i] = str[lenght - i - 1];
		str[lenght - i - 1] = tmp;
		i++;
	}
	return (str);
}
