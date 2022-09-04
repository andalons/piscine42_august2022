/*#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[]="ho77la";
	ft_strupcase(str);
	printf("%s", str);
}*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
