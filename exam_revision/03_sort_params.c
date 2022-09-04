#include <unistd.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap (char **str1, char **str2);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap (char **str1, char **str2)
{
 	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp; 
}


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
