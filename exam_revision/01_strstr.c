/* #include <stdio.h>
#include <string.h>

char 	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *dest = "hola amiga";
	char *to_find = "amiga hola";
	printf("Dest: %s\n", dest);
    char *ret = strstr(dest, to_find);
    //char *ret = ft_strstr(dest, to_find);
	printf("Return: %s\n", ret);
	return(0);
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j] != '\0')
		{
			if (to_find [j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
