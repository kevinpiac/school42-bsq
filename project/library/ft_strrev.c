/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 13:25:40 by nhuber            #+#    #+#             */
/*   Updated: 2016/01/11 13:26:20 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	tmp;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		while (i <= len / 2)
		{
			tmp = str[i];
			str[i] = str[len - i];
			str[len - i] = tmp;
			i++;
		}
	}
	return (str);
}
