/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:02:47 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/06/30 21:01:29 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_show(int comb[], int ncomb)
{
	int	pos;

	pos = 0;
	while (pos < ncomb)
	{
		ft_putchar(comb[pos] + 48);
		pos++;
	}	
}

void	ft_bucle(int comb[], int pos, int ncomb)
{
	while (comb[ncomb - pos] < (ncomb - pos))
	{
		comb[pos + 1] = comb[pos] + 1;
		ft_show(comb, ncomb);
		comb[po]
		ft_bucle(comb, pos, ncomb);
	}
}

void	ft_print_comb(int ncomb)
{
	int	comb[9];
	int	pos;

	pos = 0;
	while (pos < ncomb)
	{
		comb[pos] = pos;
		pos++;
	}
	pos = 0;
	ft_bucle(comb, pos, ncomb);
}

int	main(void)
{
	ft_print_comb(3);
}
