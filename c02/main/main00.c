/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:38:28 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/29 13:02:51 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	ft_strlen(char *str)
{
	int	sum;

	sum = 0;
	while (*str != '\0')
	{
		sum++;
		str++;
	}
	return (sum);
}

int	main(void)
{
	char	src[1024] = {"First line only \0 Second line skipped due to 0"}; //Data source string
	char	dest[1024] = ""; //Data destination string
	
	ft_strcpy(dest, src); //call functio to copy one string to another including the terminating `\0' character, return dest

	printf("src: %s (length %d) \n", src, ft_strlen(src)); //print source string, output only till \0
	printf("dest: %s (length %d) \n", dest, ft_strlen(dest)); //print destination string

	return (0);
}
