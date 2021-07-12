/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoblado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:09:55 by spoblado          #+#    #+#             */
/*   Updated: 2021/07/11 19:56:16 by spoblado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_cmp(char *haystack, char *needle, int cont)
{
	if (cont != 0)
	{
		if (*(haystack - 1) != '\n')
			return (0);
	}
	while (*needle)
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}
	if (*haystack != ' ' && *haystack != ':')
		return (0);
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;
	int		r;
	int		cont;

	cont = 0;
	r = 1;
	haystack = str;
	needle = to_find;
	if (*needle == '\0')
		return (str);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			r = ft_cmp(haystack, needle, cont);
			if (r)
				return (haystack - (needle - to_find));
			needle = to_find;
			r = 1;
		}
		haystack ++;
		cont ++;
	}
	return (0);
}

int	ft_find_and_write(char *to_find, char *haystack)
{
	haystack = ft_strstr(haystack, to_find);
	while (*(haystack - 1) != ':')
		haystack++;
	while (*haystack == ' ')
		haystack++;
	while (*haystack != '\n')
	{
		if (*haystack == ' ')
		{
			write(1, " ", 1);
			while (*haystack == ' ')
				haystack++;
		}
		write(1, haystack, 1);
		haystack++;
	}
	if (haystack == 0)
		return (0);
	return (1);
}
