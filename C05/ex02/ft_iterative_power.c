#include <stdio.h>
#include <stdbool.h>

int ft_iterative_power(int nb, int power)
{
	int result = nb;
	if (nb <= 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int main(void)
{
	printf("%i", ft_iterative_power(2, 4));
	return (0);
}