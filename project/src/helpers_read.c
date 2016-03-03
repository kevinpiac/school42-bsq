/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 08:47:21 by kpiacent          #+#    #+#             */
/*   Updated: 2016/03/03 16:59:52 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_file_to_array(char *file)
{
	int		fd;
	int		ret;
	int		flag;
	char	*buffer;
	char	*prev;

	fd = open(file, O_RDONLY);
	flag = 0;
	if (!(buffer = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (NULL);
	while ((ret = read(fd, buffer, BUFF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		if (flag++ == 0)
			prev = ft_strcreatecpy(buffer);
		else
			prev = ft_strconcat(prev, buffer);
	}
	free(buffer);
	close(fd);
	return (prev);
}

char	*ft_stdin_to_array(void)
{
	int		ret;
	int		flag;
	char	*buffer;
	char	*prev;
	int		empty;

	empty = 0;
	prev = NULL;
	flag = 0;
	if (!(buffer = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (NULL);
	while ((ret = read(0, buffer, BUFF_SIZE)) != 0)
	{
		empty = 1;
		buffer[ret] = '\0';
		if (flag++ == 0)
			prev = ft_strcreatecpy(buffer);
		else
			prev = ft_strconcat(prev, buffer);
	}
	if (!empty)
		ft_puterror("map error\n");
	free(buffer);
	return (prev);
}
