#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = temp / *b;
    *b = *a % *b;
}

int main(void)
{
    int a = 100;
    int b = 10;
    ft_ultimate_div_mod(&a, &b);
    printf("div: %i mod: %i", a, b);
    return (0);
}