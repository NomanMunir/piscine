#include <stdio.h>

int ft_strlen(char *str)
{
        int i = 0;
        while(str[i])
                i++;
        return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
        char *d = dest + ft_strlen(dest);
	unsigned int i = 0;

        while(src[i] && i < nb)
	{
        	*d++ = src[i++];
	}
        *d = '\0';
        return (d);
}

int main(int ac, char **av)
{
        char dest[20] = "Hello";
	unsigned int nb = 7;
                printf("%s", ft_strncat(dest, av[1], nb));
		printf("%s", dest);
        return (0);
}

