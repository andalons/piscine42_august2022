/*#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 10;
	ft_swap(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
