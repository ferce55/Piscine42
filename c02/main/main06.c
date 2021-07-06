/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/29 19:08:56 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[1024] = {"!\'\")(andsoON$"};
	char	str3[1024] = {""};
	int	test_str1, test_str3;

	test_str1 = ft_str_is_printable(str1); //in ASCII [32:126] are the printable characters, represent letters, digits, punctuation marks, and a few miscellaneous symbols
	test_str3 = ft_str_is_printable(str3);

	if (test_str1 == 0)
	{
		printf("Non printable characters are detected in test 1\n");
	}
	else
	{
		printf("Only printable characters in test 1\n");
	}

	if (test_str3 == 1)
	{
		printf("Empty string\n");
	}
}
