/* #include <stdio.h>

int	ft_is_prime(int nb);

int  main ()
{
		
	int n;
	
	n = ft_is_prime (0);
	printf ("%d \n", n);
	return (0);
} */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
