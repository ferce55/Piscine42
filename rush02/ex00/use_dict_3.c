/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_dict_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoblado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:39:25 by spoblado          #+#    #+#             */
/*   Updated: 2021/07/11 18:30:08 by spoblado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int		ft_find_and_write(char *to_find, char *haystack);
void	ft_create_to_find(char *argv, char to_find[17][11]);
void	ft_to_find_to_nul(char to_find[17][11]);

int	ft_heigth_tofind_3(char to_find[17][11])
{
	int	len;

	len = 0;
	while (to_find [len][0])
		len++;
	return (len);
}

long double	ft_count_file_3( char **argv)
{
	long double	len;
	int			fd;
	char		c;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	len = 0;
	while (read(fd, &c, 1))
		len++;
	if (close(fd) == -1)
		return (0);
	return (len);
}

int	ft_load_haystack_3(char *haystack, int len, char **argv)
{
	char	c;
	int		fd;

	fd = open(argv[1], O_RDONLY);
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

int	ft_count_load_write_3(char **argv, char *str)
{
	char		*haystack;
	long double	len;
	char		to_find[17][11];
	int			len_to_find;

	len = ft_count_file_3(argv);
	if (len == 0)
		return (0);
	haystack = (char *)malloc (len + 1);
	if (ft_load_haystack_3(haystack, len, argv) == 0)
		return (0);
	ft_to_find_to_nul(to_find);
	ft_create_to_find(str, to_find);
	len_to_find = ft_heigth_tofind_3(to_find);
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
