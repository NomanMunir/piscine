#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while (*str)
    {
        if (!(*str >= '0' && *str <= '9'))
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    printf("%i", ft_str_is_numeric("0101010101010101001010101"));
    return (0);
}