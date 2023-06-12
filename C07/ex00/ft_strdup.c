#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src)
{
    int i = 0;
    char *dest;

    while (src[i])
        i++;
    dest = (char *)malloc(sizeof(char) * i + 1);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char *str;
    char *allocated;

    str = "Hello World with malloc()";
    printf("x  : base  : $%s$ @ %p\n", str, str);
    allocated = strdup(str);
    printf("c  : alloc : $%s$ @ %p\n", allocated, allocated);
    allocated = ft_strdup(str);
    printf("ft : alloc : $%s$ @ %p\n", allocated, allocated);
}