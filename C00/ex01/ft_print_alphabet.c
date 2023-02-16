#include <unistd.h>

void ft_print_alphabet(void)
{
    char c = 96;

    while (++c <= 'z')
        write(1, &c, 1);
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}