/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:02:10 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/07 19:30:51 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
