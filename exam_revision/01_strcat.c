/*#include <stdio.h>
#include <string.h>

char 	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[10] = "hola";
	char *src = " amiga";
    //strcat(dest, src);
    ft_strcat(dest, src);
	printf("Resultado: %s\n", dest);
} */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
