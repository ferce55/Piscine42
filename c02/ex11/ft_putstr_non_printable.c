/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:53:32 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/06 20:07:55 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_char_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				ind;
	char			*hextab;

	hextab = "0123456789abcdef";
	ind = 0;
	while (str[ind] != '\0')
	{
		if (is_char_printable(str[ind]))
			ft_putchar(str[ind]);
		else
		{
			ft_putchar('\\');
			ft_putchar(hextab[str[ind] / 16]);
			ft_putchar(hextab[str[ind] % 16]);
		}
		ind++;
	}
}
