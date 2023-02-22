#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if (!(*str >= 'a' && *str <= 'z'))
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    printf("%i", ft_str_is_lowercase("abasc"));
    return (0);
}