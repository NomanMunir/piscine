#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        write(1, "147483648", 9);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else
    {
        if (nb > 9)
        {
            ft_putnbr(nb / 10);
        }
        ft_putchar(48 + nb % 10);
    }
}

int main(void)
{
    ft_putnbr(2147483647);
    return (0);
}