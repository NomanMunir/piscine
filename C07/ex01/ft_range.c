#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *ft_range(int min, int max)
{
	int range = max - min - 1;
	int *buffer;
	int i;
	if (min >= max)
		return (0);
	if ((buffer = malloc(sizeof(int) * range)) == NULL)
		return (0);
	i = 0;
	while (i <= range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}

void debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int main(void)
{
	int min;
	int max;

	min = -15;
	max = 10;
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min, max), max - min);
}