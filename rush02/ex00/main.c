/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoblado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:01:26 by spoblado          #+#    #+#             */
/*   Updated: 2021/07/11 19:45:58 by spoblado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h> 
#include<fcntl.h>
#include<stdlib.h>

int	ft_count_load_write_2(char *str);
int	ft_count_load_write_3(char **argv, char *str);

int	ft_check_int(char *str)
{
	int				i;
	unsigned int	result;

	result = 0;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	if (str[i] != '\0')
		return (0);
	if (result <= 4294967295)
		return (1);
	else
		return (0);
}

char	*ft_error_str(char **argv, int argc)
{
	int	i;

	i = 0;
	if (ft_check_int(argv[argc - 1]) == 0)
		return (0);
	if (argv [argc - 1][i] == '+')
		i++;
	while (argv [argc - 1][i] == '0')
		i++;
	if (argv [argc - 1][i] == '\0')
		i--;
	return (&argv[argc - 1][i]);
}

int	main(int argc, char **argv)
{
	char	*str;

	str = ft_error_str(argv, argc);
	if (str != 0)
	{
		if (argc == 2)
		{
			if (ft_count_load_write_2(str) == 0)
				write (1, "Dict Error\n", 11);
			return (0);
		}
		else if (argc == 3)
		{
			if (ft_count_load_write_3(argv, str) == 0)
				write (1, "Dict Error\n", 11);
			return (0);
		}
	}
	write (1, "Error\n", 6);
	return (0);
}
