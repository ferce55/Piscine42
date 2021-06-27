/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:04:23 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/06/27 11:20:50 by rsarri-c         ###   ########.fr       */
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
			if ((indy == 0 || indy == y - 1) && indx == 0)
				ft_putchar('A');
			else if ((indy == 0 || indy == y - 1) && indx == x - 1)
				ft_putchar('C');
			else if (indy == 0 || indy == y - 1 || indx == 0 || indx == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			indx++;
		}
		ft_putchar('\n');
		indy++;
		indx = 0;
	}
}
