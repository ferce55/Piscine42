/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/29 19:08:42 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[1024] = {"UPPERALPHABETIC"};
	char	str2[1024] = {"nonUPPERalphabeticcharacters&$+>?"};
	char	str3[1024] = {""};
	int	test_str1, test_str2, test_str3;

	test_str1 = ft_str_is_uppercase(str1); //in ASCII A-Z has values [65:90]
	test_str2 = ft_str_is_uppercase(str2);
	test_str3 = ft_str_is_uppercase(str3);

	if (test_str1 == 0)
	{
		printf("Non upper alphabetic characters are detected in test 1\n");
	}
	else
	{
		printf("Only upper alphabetic characters in test 1\n");
	}

	if (test_str2 == 0)
	{
		printf("Non upper alphabetic characters are detected in test 2\n");
	}
	else
	{
		printf("Only upper alphabetic characters in test 2\n");
	}

	if (test_str3 == 1)
	{
		printf("Empty string\n");
	}
}
