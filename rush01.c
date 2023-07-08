/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:20:00 by qguinat           #+#    #+#             */
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
			if ((width == 1 && height == 1) || (width == x && height == y))
				ft_putchar('/');
			else if ((width == x && height == 1) || (width == 1 && height == y))
				ft_putchar('\\');
			else if (width == x || width == 1 || height == y || height == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			if (width == x)
				ft_putchar('\n');
			width++;
		}
		height++;
	}
}
