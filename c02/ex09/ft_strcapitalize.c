/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:19:19 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/06 19:31:12 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if ((cap == 1) && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if ((cap != 1) && (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		if (ft_is_alphanumeric(str[i]))
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
