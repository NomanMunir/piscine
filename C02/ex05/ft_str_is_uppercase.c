#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if (!(*str >= 'A' && *str <= 'Z'))
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    printf("%i", ft_str_is_uppercase("asdb"));
    return (0);
}