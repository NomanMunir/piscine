#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 42;
    int b = 44;

    ft_swap(&a, &b);
    printf("a:%i, b: %i", a, b);
    return (0);
}