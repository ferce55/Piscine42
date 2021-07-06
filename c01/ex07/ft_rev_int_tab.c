/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:28:29 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/01 17:21:57 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	cont;
	int	ind;

	cont = 0;
	ind = size;
	while (cont < ind)
	{
		temp = tab[cont];
		tab[cont] = tab[ind - 1];
		tab[ind - 1] = temp;
		cont++;
		ind--;
	}
}
