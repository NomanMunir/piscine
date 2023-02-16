#include <unistd.h>

void ft_print_numbers(void)
{
    char n = 47;

    while (++n <= '9')
        write(1, &n, 1);
}

int main(void)
{
    ft_print_numbers();
    return (0);
}