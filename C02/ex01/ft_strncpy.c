#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
        dest[i] = '\0';
    return dest;
}

int main(void)
{
    char *src = "Hello World!";
    char dest[20];
    ft_strncpy(dest, src, 7);
    printf("%s", dest);
    return (0);
}