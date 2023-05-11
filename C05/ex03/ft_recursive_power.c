#include <stdio.h>
#include <stdbool.h>

int ft_recursive_power(int nb, int power)
{
	if (nb <= 0)
		return (0);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	printf("%i", ft_recursive_power(2, 4));
	return (0);
}