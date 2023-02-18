#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int temp;
	int li = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i++] = tab[li];
		tab[li--] = temp;
	}
}

int main(void)
{
	int tab[8] = {1, 2, 3, 4, 5, 5, 6, 7};
	ft_rev_int_tab(tab, 8);
	printf("%i", tab[0]);
	return (0);
}