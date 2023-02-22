#include <stdio.h>

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (!(*str >= ' ') || (*str == 127))
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    printf("%i", ft_str_is_printable("abasc\7"));
    return (0);
}