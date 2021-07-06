/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:39:27 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/04 16:40:44 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

int		ft_check_input(int argc, char *argv[]);

int		*ft_save_input(char argv[]);

int	*ft_init_solution(void)
{
	int	i;
	int	*solution;

	solution = (int *) malloc(sizeof(int) * 16);
	i = 0;
	while (i < 16)
	{
		solution[i] = 0;
		i++;
	}
	return (solution);
}

void	ft_print_solution(int solution[])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (((i + 1) % 4) == 0)
		{
			ft_putchar(solution[i] + '0');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(solution[i] + '0');
			ft_putchar(' ');
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{	
	int	*clues;
	int	*solution;
	int	i;

	i = 0;
	if (ft_check_input(argc, argv) == 0)
		return (0);
	clues = ft_save_input(argv[1]);
	solution = ft_init_solution();
	ft_print_solution(solution);
}	
