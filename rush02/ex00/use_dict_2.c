/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoblado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:01:32 by spoblado          #+#    #+#             */
/*   Updated: 2021/07/11 18:23:22 by spoblado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int		ft_find_and_write	(char *to_find, char *haystack);
void	ft_create_to_find	(char *argv, char to_find[17][11]);
void	ft_to_find_to_nul	(char to_find[17][11]);

int	ft_heigth_tofind(char to_find[17][11])
{
	int	len;

	len = 0;
	while (to_find [len][0])
		len++;
	return (len);
}

long double	ft_count_file(void)
{
	long double	len;
	int			fd;
	char		c;

	fd = open("numbers.dict.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	len = 0;
	while (read(fd, &c, 1))
		len++;
	if (close(fd) == -1)
		return (0);
	return (len);
}

int	ft_load_haystack(char *haystack, int len)
{
	char	c;
	int		fd;

	fd = open("numbers.dict.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
	{
		*haystack = c;
		haystack++;
	}
	haystack [len] = '\0';
	if (close(fd) == -1)
		return (0);
	return (1);
}

int	ft_count_load_write_2(char *str)
{
	char		*haystack;
	long double	len;
	char		to_find[17][11];
	int			len_to_find;

	len = ft_count_file();
	if (len == 0)
		return (0);
	haystack = (char *)malloc (len + 1);
	if (ft_load_haystack(haystack, len) == 0)
		return (0);
	ft_to_find_to_nul(to_find);
	ft_create_to_find(str, to_find);
	len_to_find = ft_heigth_tofind(to_find);
	while (len_to_find > 0)
	{
		ft_find_and_write(to_find[len_to_find - 1], haystack);
		if (len_to_find != 1)
			write(1, " ", 1);
		len_to_find--;
	}
	write(1, "\n", 1);
	free(haystack);
	return (1);
}
