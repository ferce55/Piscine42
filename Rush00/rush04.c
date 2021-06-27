/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 09:45:03 by dasanche          #+#    #+#             */
/*   Updated: 2021/06/27 12:16:07 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	t_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < y)
	{
		while (j < x)
		{
			if ((i == 0 && j == 0)
				|| (i == y - 1 && j == x - 1 && x != 1 && y != 1))
				ft_putchar('A');
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
				ft_putchar('C');
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
