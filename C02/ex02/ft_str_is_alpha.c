#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if (!((*str >= 'a' && *str <= 'z') ||
              (*str >= 'A' && *str <= 'Z')))
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    printf("%i", ft_str_is_alpha("abASDasc"));
    return (0);
}