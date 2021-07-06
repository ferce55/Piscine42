/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/29 19:36:23 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	ft_strlowcase(char *str);

int	main(void)
{
	char	str1[1024] = {"to_low_ALPHABETIC_characters_but012$\\?"};

	printf("Before strlowcase: %s\n", str1);
	ft_strlowcase(str1); //in ASCII a-z has values [97:122] & A-Z has values [65:90]
	printf("After strlowcase: %s\n", str1);
}
