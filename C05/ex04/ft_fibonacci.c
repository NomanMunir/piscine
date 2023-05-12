#include <stdio.h>
#include <stdbool.h>

int ft_fibonacci(int index)
{
	
	if (index < 0)
		return (-1);
	if (index < 2)
		return index;
	else
		return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}

int main(void)
{
	printf("%i", ft_fibonacci(15));
	return (0);
}