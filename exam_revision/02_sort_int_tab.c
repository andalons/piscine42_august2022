/*#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab [] = {7, 8, 1, 2, 9, 6, 1};
    int size = sizeof(tab)/sizeof(tab[0]);;
    int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]); //print before function call
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, size);
	
	i=0;
	while (i < size)
	{
		printf("%d ", tab[i]); //print after function call
		i++;
	}
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}
