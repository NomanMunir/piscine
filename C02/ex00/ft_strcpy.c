#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return dest;
}

int main(void)
{
    char src[] = {"Hello"};
    char dest[10];
    ft_strcpy(dest, src);
    printf("%s \n%s", dest, src);
    return (0);
}