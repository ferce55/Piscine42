/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:00:43 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/10 17:58:12 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	ft_base_duplicate(char *base, int i)
{
	int	j;

	j = i + 1;
	while (base[j] != '\0')
	{
		if (base[j] == base[i])
			return (0);
		j++;
	}
	return (1);
}

int	ft_ver_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || ft_base_duplicate(base, i) == 0)
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_ver_base(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}
