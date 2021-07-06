/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/30 16:56:57 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str1[1024] = {"Coucou\ntu vas bien ?"};

	printf("Before ft: %s\n", str1);
	ft_putstr_non_printable(str1); //in ASCII non-printable characters have values [0:31]
	printf("After ft: %s\n", str1);
}
