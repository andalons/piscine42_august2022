/* #include <stdio.h>

int	ft_fibonacci(int index);

int  main ()
{	
	int n;
	
	n = ft_fibonacci (0);
	printf ("%d \n", n);
	return (0);
} */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index < 3)
		return (1);
	else
		return (ft_fibonacci (index - 2) + ft_fibonacci (index - 1));
}
