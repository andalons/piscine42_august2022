/*#include <stdio.h>

int	ft_atoi(char *str);

int	main ()
{
	int result = ft_atoi("---+--+1234ab567");
	printf("%d\n", result); 
}*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] < '\r'))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - '0') + (nb * 10);
		i++;
	}
	return (sign * nb);
}
