/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3};
	int size = 3;
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]); //print before function call
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	i=0;
	while (i < size)
	{
		printf("%d ", tab[i]); //print after function call
		i++;
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	number;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		number = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = number;
		i++;
	}
}
