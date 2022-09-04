/* #include <stdio.h>

int	ft_iterative_power(int nb, int power);

int  main ()
{	
	int n;
	
	n = ft_iterative_power (5,1);
    printf ("%d \n", n);
	return (0);
}  */

int	ft_iterative_power(int nb, int power)
{
	int	base;
	int	i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = power;
	base = nb;
	while (i > 1)
	{
		nb = base * nb;
		i--;
	}
	return (base);
}
