#include <stdio.h>
#include <stdbool.h>

int ft_is_prime(int nb) {
    if (nb < 2) {
        return 0;
    }
    int i = 2;
    while (i * i <= nb) {
        if (nb % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    int number;

    number = 23;
    printf("Prime(%d) = %d\n", number, ft_is_prime(number));
}