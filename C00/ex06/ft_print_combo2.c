#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combo2(void)
{
    int a;
    int b;
    int c;

    a = 0;
    while (a <= 99)
    {
        b = a + 1;
        while (b <= 99)
        {
            c = b + 1;
            while (c <= 99)
            {
                ft_putchar(48 + a / 10);
                ft_putchar(48 + a % 10);
                ft_putchar(' ');
                ft_putchar(48 + b / 10);
                ft_putchar(48 + b % 10);
                ft_putchar(' ');
                ft_putchar(48 + c / 10);
                ft_putchar(48 + c % 10);
                if (a != 96)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_combo2();
    return (0);
}