#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;
    int j;

    while (i < size)
    {
        j = 0;
        while (j < (size - 1 - i))
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    int i = 0;
    int tab[] = {2, 4, 5, 1213, 41, 21, 13, 1, 2, 3, 4, 5, 5, 6, 7};
    ft_sort_int_tab(tab, 15);

    while (i < 15)
    {
        printf("%i, ", tab[i]);
        i++;
    }

    return (0);
}