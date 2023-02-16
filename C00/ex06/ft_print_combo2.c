#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combo2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 99)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar(48);
        }
    }
}