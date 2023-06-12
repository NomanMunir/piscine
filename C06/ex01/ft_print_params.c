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
    int i;

    i = 1;
    if (argc >= 2)
        while (i < argc)
        {
            ft_putstr(argv[i++]);
            ft_putstr("\n");
        }
    return (0);
}