#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}
void ft_swap(char p1, char p2)
{
    char temp = p1;
    p1 = p2;
    p2 = temp;
}

void ft_sort_params(char **args)
{
    int i, j;

    i = 1;
    while (args[i])
    {
        j = i + 1;
        if ((args[i][0] - args[j][0]) > 0)
        {
            ft_swap(args[i][0], args[j][0]);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    ft_sort_params(argv);
    // if (argc >= 2)
    //     while (--argc > 0)
    //     {
    //         ft_putstr(argv[argc]);
    //         ft_putstr("\n");
    //     }
    return (0);
}