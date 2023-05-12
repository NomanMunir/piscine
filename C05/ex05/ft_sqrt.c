#include <stdio.h>
#include <stdbool.h>

int ft_sqrt(int nb)
{
    if (nb < 0)
        return (0);
    if (nb <= 1)
        return (nb);

    unsigned int index = 0;
    unsigned int sqrt = 0;
    while ((sqrt = index * index) <= (unsigned int)nb)
        index++;
    index--;
    return (index * index == (unsigned int)nb ? index : 0);
}

int	main(void)
{
	int number;

	number = 25;
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));

}