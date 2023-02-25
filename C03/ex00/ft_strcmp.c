#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
        if (*s1++ - *s2 == 0)
            *s2++;
    return (*s1 - *s2);
}

int main(int ac, char **av)
{
    if (ac == 3)
        printf("%i",ft_strcmp(av[1], av[2]));
    return (0);
}