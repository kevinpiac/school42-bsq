/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 11:11:18 by kpiacent          #+#    #+#             */
/*   Updated: 2015/10/23 13:38:49 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
