/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:50:52 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/07 14:23:12 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{

	int ret;

	ac = 1;
	ft_puterror("**************\n");
	ft_putstr("Hello World\n");
	ft_puterror("**************\n");
	ft_file_to_array(av[1]);

	ret = ft_grid_contains_wrong_char(ft_file_to_array(av[1]), ".o\n");

	ft_putnbr(ret);
}
