#include <stdio.h>
#include <stdbool.h>

int ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return nb;
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
	printf("%i", ft_recursive_factorial(1));
	return (0);
}