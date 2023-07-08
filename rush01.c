/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qguinat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:20:00 by qguinat           #+#    #+#             */
/*   Updated: 2023/07/08 10:32:25 by qguinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	rush(int width, int height)
{
	int	x;
	int	y;

	y = 1;
	while (y <= height)
	{
		x = 1;
		while (x <= width)
		{
			if ((x == 1 && y == 1) || (x == width && y == height))
				ft_putchar('/');
			else if ((x == width && y == 1) || (x == 1 && y == height))
				ft_putchar('\\');
			else if (x == width || x == 1 || y == height || y == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			if (x == width)
				ft_putchar('\n');
			x++;
		}
		y++;
	}
}
