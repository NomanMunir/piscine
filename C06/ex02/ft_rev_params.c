#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char **argv)
{
    if (argc >= 2)
        while (--argc > 0)
        {
            ft_putstr(argv[argc]);
            ft_putstr("\n");
        }
    return (0);
}