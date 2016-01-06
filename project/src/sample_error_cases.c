/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpiacent <kpiacent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 21:36:27 by kpiacent          #+#    #+#             */
/*   Updated: 2016/01/06 22:00:50 by kpiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_valid_grid(grid, char *grid_params)
{
	if (ft_same_line_length(grid) && !ft_contains_wrong_char(grid, char *grid_params))
		return (true);
	ft_puterror("map error\n");
	return (false);
}
