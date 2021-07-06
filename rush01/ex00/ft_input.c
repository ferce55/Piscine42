/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:02:51 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/04 16:39:50 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_print_error(void);

int	ft_check_input(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((i % 2) == 0)
			{
				if (argv[1][i] < '1' || argv[1][i] > '4')
					break ;
			}
			else if (argv[1][i] != ' ')
				break ;
			i++;
		}
	}
	if (i != 31)
	{
		ft_print_error();
		return (0);
	}
	return (1);
}

int	*ft_save_input(char argv[])
{
	int	i;
	int	j;
	int	*clues;

	clues = (int *) malloc(sizeof(int) * 16);
	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != ' ')
		{
			clues[j] = argv[i] - '0';
			j++;
		}
		i++;
	}
	return (clues);
}
