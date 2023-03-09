#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	char *d = dest + ft_strlen(dest);
	while(*src)
		*d++ = *src++;
	*d = '\0';
	return (d);
}

int main(int ac, char **av)
{
	char dest[20] = "Hello ";
	if(ac == 2)	
		printf("%s", ft_strcat(dest, av[1]));
		printf("%s", dest);
	return (0);
}
