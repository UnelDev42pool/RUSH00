/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qguinat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:20:00 by qguinat           #+#    #+#             */
/*   Updated: 2023/07/08 14:31:43 by kiparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			if ((x == 1 && y == 1) || (x == 1 && y == height))
				ft_putchar('A');
			else if ((x == width && y == 1) || (x == width && y == height))
				ft_putchar('C');
			else if (x == width || x == 1 || y == height || y == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (x == width)
				ft_putchar('\n');
			x++;
		}
		y++;
	}
}
