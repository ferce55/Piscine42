#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(int ac, char **argv)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				str = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = str;
				i = 0;
			}
			i++;
		}
		ft_print_params(argc, argv);
	}
}
