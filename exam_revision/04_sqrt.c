/* #include <stdio.h>

int	ft_sqrt(int nb);

int  main ()
{	
	int n;
	
	n = ft_sqrt (2147395600);
	printf ("%d \n", n);
	return (0);
} */

int	ft_sqrt(int nb)
{
	int	i;
	int	t;

	if (nb < 1)
		return (0);
	i = 0;
	while (i <= 46340)
	{
		t = i * i;
		if (t == nb)
			return (i);
		else if (t > nb)
			return (0);
		i++;
	}
	return (0);
}
