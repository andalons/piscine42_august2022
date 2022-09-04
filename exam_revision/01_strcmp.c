/*#include <stdio.h>
#include <string.h>

int 	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "hola";
	char *s2 = "1";	
	//int ret = strcmp(s1, s2);
	int ret = ft_strcmp(s1, s2);

	printf("Return: %d\n", ret);
} */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0;
	dif = 0;
	while ((dif == 0) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			dif = s1[i] - s2[i];
		i++;
	}
	return (dif);
}
