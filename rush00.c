/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:21:22 by kiparis           #+#    #+#             */
/*   Updated: 2023/07/08 14:30:13 by kiparis          ###   ########.fr       */
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
			if ((x == 1 || x == width) && (y == 1 || y == height))
				ft_putchar('o');
			else if (x == 1 || x == width)
				ft_putchar('|');
			else if (y == 1 || y == height)
				ft_putchar('-');
			else
				ft_putchar(' ');
			if (x == width)
				ft_putchar('\n');
			x++;
		}
		y++;
	}
}
