/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:36:46 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/08 14:33:11 by kiparis          ###   ########.fr       */
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
			if ((x == 1 && y == 1) || (x == width && y == height))
				ft_putchar('A');
			else if ((y == height && x == 1) || (y == 1 && x == width))
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
