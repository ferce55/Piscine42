/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:38:28 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/30 13:04:53 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

	int	sum;

int	main(void)
{
	char	str[1024] = {"salut, comment tu vas ? 42mots quarante-DEUX; cinquante+et+un"}; //Original string
	
	printf("original:\n %s\n", str); //print original string
	//the function is:
	//1) if (it is a new word & letter is low) => make it up;
	//2) if (it is not a new word & letter is up) => make it low;
	//3) if it is alphanumeric => flag as not new word; else => flag as a new word
	printf("modified:\n %s\n", ft_strcapitalize(str)); //print modified string

	return (0);
}
