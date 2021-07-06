/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:38:28 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/29 14:14:48 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	char	src[1024] = {"First line is shorter to return till here despite it reads till here"}; //Data source string
	char	dest[1024] = ""; //Data destination string
	int	n; //limit of the passing to the function characters
	
	n = 42; //assigne limiter
	ft_strncpy(dest, src, n); //call function to copy n characters of  src string to dest. If src <  n characters long, filled the reminder with `\0' characters

	printf("src: %s (length %d) \n", src, ft_strlen(src)); //print source string & its length
	printf("dest: %s (length %d) \n", dest, ft_strlen(dest)); //print destination string & its length

	return (0);
}
