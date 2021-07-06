/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:38:11 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/01 18:53:08 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	ind;
	int	temp;

	ind = 0;
	while (ind < (size - 1))
	{
		if (tab[ind] > tab[ind + 1])
		{
			temp = tab[ind];
			tab[ind] = tab[ind + 1];
			tab[ind + 1] = temp;
			ind = 0;
		}
		else
			ind++;
	}
}
