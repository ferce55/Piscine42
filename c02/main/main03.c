/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/29 19:08:21 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[1024] = {"0123456789"};
	char	str2[1024] = {"no0123456789&$+>?"};
	char	str3[1024] = {""};
	int	test_str1, test_str2, test_str3;

	test_str1 = ft_str_is_numeric(str1); //in ASCII 0-9 has values [48:57]
	test_str2 = ft_str_is_numeric(str2);
	test_str3 = ft_str_is_numeric(str3);

	if (test_str1 == 0)
	{
		printf("Non numeric characters are detected in test 1\n");
	}
	else
	{
		printf("Only numeric characters in test 1\n");
	}

	if (test_str2 == 0)
	{
		printf("Non numeric characters are detected in test 2\n");
	}
	else
	{
		printf("Only numeric characters in test 2\n");
	}

	if (test_str3 == 1)
	{
		printf("Empty string\n");
	}
}
