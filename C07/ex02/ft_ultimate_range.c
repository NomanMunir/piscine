#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *buffer;
	int totalRange = max - min - 1;
	int i;
	if ((buffer = malloc(sizeof(int) * totalRange)) == NULL)
		return (0);
	i = 0;
	while (i <= totalRange)
	{
		buffer[i] = min + i;
		i++;
	}
	*range = buffer;
	return (totalRange + 1);
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
	int *range;
	int bound;

	min = -5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound + 2);
}