#include <stdio.h>
#include <stdbool.h>

int ft_atoi(char *str)
{
    long i = 0;
    long sign = 1;
    long result = 0;

    if (str[i] == '\0')
        return 0;
    while (str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
        result = result * 10 + (str[i++] - '0');
    return (result * sign);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printf("%i", ft_atoi(av[1]));

    return (0);
}