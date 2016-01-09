/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 08:47:21 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/08 13:52:30 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_file_to_array(char *file)
{
	int		fd;
	int		file_len;
	char	*buf;

	file_len = ft_file_length(file);
	if (!(buf = malloc(sizeof(char) * file_len)))
		return (0);
	fd = open(file, O_RDONLY);
	if (fd != -1)
		read(fd, buf, file_len);
	buf[file_len] = '\0';
	return (buf);
}

int		ft_file_length(char *file)
{
	int		fd;
	int		ret;
	int		len;
	char	buf[1];

	fd = open(file, O_RDONLY);
	len = 0;
	if (fd != -1)
	{
		while ((ret = read(fd, buf, 1)))
			len++;
		if (close(fd) == -1)
			ft_puterror("Close() failed\n");
	}
	else
		ft_puterror("Open() failed\n");
	return (len);
}
