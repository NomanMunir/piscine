#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	while (*src && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return i;
}

int main(void)
{
	char dest[10];
	unsigned int size = 11;
	char src[] = "Hello world";
	printf("src size: %u \n", ft_strlcpy(dest, src, size));
	printf("dest: %s\n", dest);
	return (0);
}
