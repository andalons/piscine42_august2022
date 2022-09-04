/*#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str;
	str = "hola";
	int count =	ft_strlen(str);
	printf("Count: %d", count);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
