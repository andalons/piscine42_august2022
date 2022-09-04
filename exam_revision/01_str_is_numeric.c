/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[] = "00007";
	char str2[] = "";
	char str3[] = "078hola";

	int res = ft_str_is_numeric(str3);
	printf ("%d", res);
	return(0);
}*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}
