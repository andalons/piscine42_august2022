/*#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "Adiós";

	ft_strcpy(str1, str2);
	printf("%s", str1);
	return (0);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
