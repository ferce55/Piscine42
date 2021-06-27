/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:56:56 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/06/27 11:49:48 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	indx;
	int	indy;

	indx = 0;
	indy = 0;
	while (indy < y)
	{
		while (indx < x)
		{
			if ((indx == 0 || indx == x - 1) && indy == 0)
				ft_putchar('A');
			else if ((indx == 0 || indx == x - 1) && indy == y - 1)
				ft_putchar('C');
			else if (indy == 0 || indy == y - 1 || indx == 0 || indx == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			indx++;
		}
		ft_putchar('\n');
		indx = 0;
		indy++;
	}
}
