/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/29 19:26:29 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	ft_strupcase(char *str);

int	main(void)
{
	char	str1[1024] = {"to_upper_ALPHABETIC_characters_but012$\\?"};

	printf("Before strupcase: %s\n", str1);
	ft_strupcase(str1); //in ASCII a-z has values [97:122] & A-Z has values [65:90]
	printf("After strupcase: %s\n", str1);
}
