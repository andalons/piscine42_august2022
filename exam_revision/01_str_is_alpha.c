/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str[] = "HO00007";
	char str2[] = "";
	char str3[] = "Hola";

	int res = ft_str_is_alpha(str2);
	printf ("%d", res);
	return(0);
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		else
			i++;
	}
	return (1);
}
