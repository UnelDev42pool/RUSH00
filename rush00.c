/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:21:22 by kiparis           #+#    #+#             */
/*   Updated: 2023/07/08 17:22:25 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	height;

	height = 1;
	while (height <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((width == 1 || width == x) && (height == 1 || height == y))
				ft_putchar('o');
			else if (width == 1 || width == x)
				ft_putchar('|');
			else if (height == 1 || height == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			if (width == x)
				ft_putchar('\n');
			width++;
		}
		height++;
	}
}
