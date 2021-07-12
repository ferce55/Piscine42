/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_to_find.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoblado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:22:04 by spoblado          #+#    #+#             */
/*   Updated: 2021/07/11 19:56:19 by spoblado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *argv)
{
	int	len;

	len = 0;
	while (*argv)
	{
		len++;
		argv++;
	}
	return (len);
}

void	ft_to_find_to_nul(char to_find[17][11])
{
	int	i;
	int	j;

	i = 0;
	while (i < 17)
	{
		j = 0;
		while (j < 11)
		{
			to_find[i][j] = '\0';
			j++;
		}
		i++;
	}
}

void	ft_load_1(int len, int *i, char *argv, char to_find[17][11])
{
	int	k;

	if (i[0] == 1 && argv [len - i[0]] != '0')
	{
		to_find[i[1]][0] = argv [len - i[0]];
		i[1] = i[1] + 1;
	}
	if (i[0] == 4 || i[0] == 7 || i[0] == 10)
	{
		to_find[i[1]][0] = '1';
		k = 1;
		while (k < i[0])
		{
			to_find[i[1]][k] = '0';
			k++;
		}
		i[1] = i[1] + 1;
		if (argv [len - i[0]] != '0')
		{
			to_find[i[1]][0] = argv [len - i[0]];
			i[1] = i[1] + 1;
		}
	}
}

void	ft_load_2(int len, int *i, char *argv, char to_find[17][11])
{
	if ((i[0] == 2 || i[0] == 5 || i[0] == 8) && argv [len - i[0]] != '0')
	{
		if (argv [len - i[0]] == '1' && argv [len - i [0] + 1] != '0')
		{
			i[1] = i[1] - 1;
			to_find[i[1]][0] = '1';
			to_find[i[1]][1] = argv[len - i[0] + 1];
		}
		else
		{
			to_find[i[1]][0] = argv [len - i[0]];
			to_find[i[1]][1] = '0';
		}
		i[1] = i[1] + 1;
	}
	if ((i[0] == 3 || i[0] == 6 || i[0] == 9) && argv [len - i[0]] != '0')
	{
		to_find[i[1]][0] = '1';
		to_find[i[1]][1] = '0';
		to_find[i[1]][2] = '0';
		i[1] = i[1] + 1;
		to_find[i[1]][0] = argv [len - i[0]];
		i[1] = i[1] + 1;
	}
}

void	ft_create_to_find(char *argv, char to_find[17][11])
{
	int	len;
	int	*i;
	int	pos[2];

	len = ft_strlen(argv);
	pos[0] = 1;
	pos[1] = 0;
	i = &pos[0];
	while ((len - i[0]) >= 0)
	{
		ft_load_1 (len, i, argv, to_find);
		ft_load_2 (len, i, argv, to_find);
		i[0] = i[0] + 1;
	}
	if (len == 1 && argv[0] == '0')
		to_find [0][0] = '0';
}
