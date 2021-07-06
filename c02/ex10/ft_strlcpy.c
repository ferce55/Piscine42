/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:33:55 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/07/06 19:38:02 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	ind;

	count = 0;
	ind = 0;
	while (src[count] != '\0')
		count ++;
	if (size != 0)
	{
		while (src[ind] != '\0' && ind < (size - 1))
		{
			dest[ind] = src[ind];
			ind++;
		}
		dest[ind] = '\0';
	}
	return (count);
}
