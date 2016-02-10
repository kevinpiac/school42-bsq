/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 08:47:21 by kpiacent          #+#    #+#             */
/*   Updated: 2016/02/10 18:01:38 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_file_to_array(char *file)
{
	int		fd;
	int		ret;
	char	*buffer;
	char	*prev;

	fd = open(file, O_RDONLY);
	prev = NULL;
	if (!(buffer = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (NULL);
	while ((ret = read(fd, buffer, BUFF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		if (prev == NULL)
			prev = buffer;
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
	char	*buffer;
	char	*prev;

	prev = NULL;
	if (!(buffer = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (NULL);
	while ((ret = read(0, buffer, BUFF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		if (prev == NULL)
			prev = buffer;
		else
			prev = ft_strconcat(prev, buffer);
	}
	free(buffer);
	return (prev);
}
