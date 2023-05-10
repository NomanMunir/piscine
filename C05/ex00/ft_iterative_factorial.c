#include <stdio.h>
#include <stdbool.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;
    if (nb <= 0)
        return (0);
    while (nb >= 1)
        result *= nb--;

    return (result);
}

int main(void)
{
    printf("%i", ft_iterative_factorial(8));
    return (0);
}